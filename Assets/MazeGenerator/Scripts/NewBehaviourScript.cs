using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;
using TouchControlsKit;

//<summary>
//Ball movement controlls and simple third-person-style camera
//</summary>
public class RollerBall_AI : MonoBehaviour {

	public GameObject ViewCamera = null;
	public AudioClip JumpSound = null;
	public AudioClip HitSound = null;
	public AudioClip CoinSound = null;
	public int distanceCamera = 5;
	public bool isJoystick = false;

	[Header("UI")]
	public GameObject resultGame;
	public GameObject pauseGame;
	public Text readyLabel;
	public Text coinLabel;
	public Text timerLabel;
	public Text logLabel;

	private Rigidbody mRigidBody = null;
	private AudioSource mAudioSource = null;
	
	private bool isPause = false;
	private bool isStart = false;
	private bool isEndGame = false;
	private float rotation;

	private bool prevGrounded;

	CharacterController controller;
	Transform myTransform, cameraTransform;

	#region Private blurtooth
	private BluetoothManager bluetoothManger;
	#endregion

	private Gyroscope m_Gyro;
	private bool gyroEnabled = false;
	private float timerTotal = 0f;
	private int coinTotal = 0;

	private SuratechAPI suraTechAPI = null;

	void Start () {

		if (suraTechAPI == null)
		{
			suraTechAPI = FindObjectOfType<SuratechAPI>();
		}

		isEndGame = false;
		//Set up and enable the gyroscope (check your device has one)
		if (!isJoystick)
		{
			if (SystemInfo.supportsGyroscope)
			{
				m_Gyro = Input.gyro;
				m_Gyro.enabled = true;
				gyroEnabled = true;
			}
		}

		myTransform = transform;
		bluetoothManger = FindObjectOfType<BluetoothManager>();
		controller = GetComponent<CharacterController>();

		mRigidBody = GetComponent<Rigidbody> ();
		mAudioSource = GetComponent<AudioSource> ();
		coinTotal = 0;
		timerTotal = 0f;

		coinLabel.text = coinTotal.ToString("0");
		timerLabel.text = timerTotal.ToString("0") + " s.";

		StartCoroutine("ReadyToPlay");
	}

	void FixedUpdate () {
		if (isPause) return;
		if (isEndGame) return;
		if (!isStart) return;


		if (bluetoothManger != null && (bluetoothManger.IsConnect(1) || bluetoothManger.IsConnect(2)))
		{			
			BluetoothMovement();
		}
		else if(!isJoystick)
        {
			PlayerMovement(Input.acceleration.x, Input.acceleration.y);
		}
		else
        {			
			Vector2 move = TCKInput.GetAxis("Joystick"); // NEW func since ver 1.5.5
			PlayerMovement(move.x, move.y);			
		}


		if (ViewCamera != null) {
			Vector3 direction = (Vector3.up * 2 + Vector3.back) * distanceCamera;
			RaycastHit hit;
			Debug.DrawLine(transform.position,transform.position+direction,Color.red);
			if (Physics.Linecast(transform.position, transform.position + direction, out hit))
			{
				ViewCamera.transform.position = hit.point;
			}
			else
			{
				ViewCamera.transform.position = transform.position + direction;
			}
			ViewCamera.transform.LookAt(transform.position);
		}

		timerTotal += Time.deltaTime;
		//update label
		coinLabel.text = coinTotal.ToString("0");
		timerLabel.text = timerTotal.ToString("0") + " s.";
	}

	/// <summary>
	/// BluetoothMovement
	/// </summary>
	private void BluetoothMovement()
	{
		//calling Services Method
		if (bluetoothManger.IsConnect(1) || bluetoothManger.IsConnect(2))
		{
			float posX = GetValueSencerHorizontal();
			float posY = GetValueSencerVertical();
			//logLabel.text = "ซ้าย - ขวา : " + posX + "\nบน - ล่าง : " + posY;
			PlayerMovement(posX, posY);
			//iPlayerService.surasoleRightMovement(ref playerSide, ref newXPos, ref playerRigidBody, ref yPos, barSencorLeft(), ref bonusGame, ref coinLabel, ref coinValue);
		}		
	}

	/// <summary>
	/// PlayerMovement
	/// </summary>
	/// <param name="horizontal"></param>
	/// <param name="vertical"></param>
	private void PlayerMovement(float horizontal, float vertical)
	{
		bool grounded = controller.isGrounded;

		Vector3 moveDirection = myTransform.forward * vertical;
		moveDirection += myTransform.right * horizontal;

		moveDirection.y = -4f;

		if (grounded)
			moveDirection *= 6f;

		controller.Move(moveDirection * Time.fixedDeltaTime);

		if (!prevGrounded && grounded)
			moveDirection.y = 5f;

		prevGrounded = grounded;
	}

	/// <summary>
	/// Get value Vertical sencor bluetooth
	/// </summary>
	/// <returns></returns>
	public float GetValueSencerVertical()
	{
        float value = 0f;
        if (bluetoothManger != null)
        {
			// บน-ล่าง คือ((R1 + R2 + R3) + (L1 + L2 + L3)) - (R5 + L5) ถ้าผลลัพธ์เป็นบวก เคลื่อนที่ขึ้นบน ถ้าผลลัพธ์เป็นลบ เคลื่อนที่ลงด้านล่าง
			int[] bytesLeft = bluetoothManger.GetSubscribeCharacteristic(1).Item1;
			int[] bytesRight = bluetoothManger.GetSubscribeCharacteristic(2).Item1;
			float sumLeft, sumRight;

			if (StaticStrings.is8Device)
			{
                sumLeft = (bytesLeft[0] + bytesLeft[2] + bytesLeft[3] + bytesLeft[4]) / 4;
                sumRight = (bytesRight[0] + bytesRight[2] + bytesRight[3] + bytesRight[4]) / 4;
                value = (sumRight + sumLeft) - (bytesLeft[7] + bytesRight[7]);
            }
			else
			{
                sumLeft = (bytesLeft[0] + bytesLeft[1] + bytesLeft[2]) / 3;
                sumRight = (bytesRight[0] + bytesRight[1] + bytesRight[2]) / 3;
                value = (sumRight + sumLeft) - (bytesLeft[4] + bytesRight[4]);
            }

			


        }
        return value * 0.002f;
;
	}

	/// <summary>
	/// Get value Horizontal sencor bluetooth
	/// </summary>
	/// <returns></returns>
	public float GetValueSencerHorizontal()
	{
		float value = 0f;
		if (bluetoothManger != null)
		{
			// ซ้าย-ขวา คือ sum R(1 + 2 + 3 + 4 + 5) -sum L(1 + 2 + 3 + 4 + 5) ถ้าผลลัพธ์เป็นบวก คือเคลื่อนที่ไปทางขวา ถ้าผลลัพธ์เป็นลบเคลื่อนที่ไปทางซ้าย
			int[] bytesLeft = bluetoothManger.GetSubscribeCharacteristic(1).Item1;
			int[] bytesRight = bluetoothManger.GetSubscribeCharacteristic(2).Item1;

			float sumLeft, sumRight;

			if (StaticStrings.is8Device)
			{
                sumLeft = bytesLeft[0] + bytesLeft[1] + bytesLeft[2] + bytesLeft[3] + bytesLeft[4] + bytesLeft[5] + bytesLeft[6] + bytesLeft[7];
                sumRight = bytesRight[0] + bytesRight[1] + bytesRight[2] + bytesRight[3] + bytesRight[4] + bytesRight[5] + bytesRight[6] + bytesRight[7];
            }
			else
			{
                sumLeft = bytesLeft[0] + bytesLeft[1] + bytesLeft[2] + bytesLeft[3] + bytesLeft[4];
                sumRight = bytesRight[0] + bytesRight[1] + bytesRight[2] + bytesRight[3] + bytesRight[4];
            }

            value = sumRight - sumLeft;

        }
		return value * 0.001f;
	}


	/// <summary>
	/// PlayerRotation
	/// </summary>
	/// <param name="horizontal"></param>
	/// <param name="vertical"></param>
	public void PlayerRotation(float horizontal, float vertical)
	{
		myTransform.Rotate(0f, horizontal * 12f, 0f);
		rotation += vertical * 12f;
		rotation = Mathf.Clamp(rotation, -60f, 60f);
		cameraTransform.localEulerAngles = new Vector3(-rotation, cameraTransform.localEulerAngles.y, 0f);
	}

	/// <summary>
	/// OnCollisionEnter
	/// </summary>
	/// <param name="coll"></param>
	void OnCollisionEnter(Collision coll){
		if (coll.gameObject.tag.Equals ("Floor")) {			
			if (mAudioSource != null && HitSound != null && coll.relativeVelocity.y > .5f) {
				mAudioSource.PlayOneShot (HitSound, coll.relativeVelocity.magnitude);
			}
		} else {
			if (mAudioSource != null && HitSound != null && coll.relativeVelocity.magnitude > 2f) {
				mAudioSource.PlayOneShot (HitSound, coll.relativeVelocity.magnitude);
			}
		}
	}

	/// <summary>
	/// OnTriggerEnter
	/// </summary>
	/// <param name="other"></param>
	void OnTriggerEnter(Collider other) {
		if (other.gameObject.tag.Equals("ExitGame"))
		{			
			OnResultGame();
		}

		if (other.gameObject.tag.Equals ("Coin")) {
			if(mAudioSource != null && CoinSound != null){
				mAudioSource.PlayOneShot(CoinSound);
			}
			Destroy(other.gameObject);

			coinTotal++;
		}
	}

	/// <summary>
	/// Restarts the game.
	/// </summary>
	public void OnExitGame()
	{
		if (!isEndGame)
		{
			SaveData();
		}
		StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "06_SelecteMissionMaze_AI"));
	}

	public void OnRestartGame()
	{
		if (!isEndGame)
		{
			SaveData();
		}
		string _currentScene = PlayerPrefs.GetString("$currentScene", "");
		StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, _currentScene));
	}

	public void OnResumeGame()
	{
        isPause = false;
        pauseGame.SetActive(false);
	}

	public void OnPauseGame()
	{
        isPause = true;
        pauseGame.SetActive(true);
	}

	public void OnResultGame()
    {
		isEndGame = true;
		resultGame.SetActive(true);
		resultGame.GetComponent<GameOverUI>().textTitle.text = "คะแนนที่คุณได้";
		resultGame.GetComponent<GameOverUI>().textScore.text = coinTotal.ToString("0");
		resultGame.GetComponent<GameOverUI>().textUnit.text = "คะแนน";
		SaveData();
	}

	void SaveData()
	{
		//save score
		string _user = PlayerPrefs.GetString("$user", "");
		int _sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);
		string _typeMap = PlayerPrefs.GetString("$mapType_" + _sceneId, "");
		int bestScore = PlayerPrefs.GetInt("$bestScore_" + _typeMap + "_" + _sceneId + "_" + _user, 0);

		if (bestScore == 0)
		{
			PlayerPrefs.SetInt("$bestScore_" + _typeMap + "_" + _sceneId + "_" + _user, coinTotal);
		}
		if (bestScore < coinTotal)
		{
			PlayerPrefs.SetInt("$bestScore_" + _typeMap + "_" + _sceneId + "_" + _user, coinTotal);
		}
		PlayerPrefs.SetInt("$currentScore_" + _typeMap + "_" + _sceneId + "_" + _user, coinTotal);
		SaveDataToStorage(_user, _sceneId, _typeMap);
	}

	void SaveDataToStorage(string _user, int _sceneId, string _mapType)
	{
		string _typeMap = PlayerPrefs.GetString("$mapType_" + _sceneId, "");
		int passBunsCount = PlayerPrefs.GetInt("$sceneMaze" + _sceneId + "_bonusFail" + _user, 0);
		int failBunsCount = PlayerPrefs.GetInt("$sceneMaze" + _sceneId + "_bonusFail" + _user, 0);
		string _sceneName = PlayerPrefs.GetString("$currentScene", "");

		var dataSave = new SaveDataModel();
		dataSave.game_id = 2;
		dataSave.user_id = suraTechAPI.memberInfo.user_member;
		dataSave.total_score = coinTotal;
		dataSave.distance = 0;
		dataSave.timer_gameplay = timerTotal;
		dataSave.timestamp = suraTechAPI._GetDate(DateTime.Now.ToUniversalTime().AddHours(7));//DateTime.Now.ToLocalTime().ToString("yyyy-MM-dd HH:mm:ss");
		dataSave.bonus_fail = failBunsCount;
		dataSave.bonus_success = passBunsCount;
		dataSave.mission_id = _sceneId;
		dataSave.mission_name = _sceneName;

		StartCoroutine(suraTechAPI.SeveDataGame(dataSave, saveDataCallback));
	}

	void saveDataCallback(bool isSuccess, SaveDataModelResponse? resp)
	{
		if (isSuccess)
		{
			Debug.Log("save data success : " + resp);
		}
	}

	IEnumerator ReadyToPlay()
	{
		yield return new WaitForSeconds(1);
		readyLabel.text = "3";
		yield return new WaitForSeconds(1);
		readyLabel.text = "2";
		yield return new WaitForSeconds(1);
		readyLabel.text = "1";
		yield return new WaitForSeconds(1);
		readyLabel.text = "";
        isStart = true;
    }
}
