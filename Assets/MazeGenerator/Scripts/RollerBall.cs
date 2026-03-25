using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;
using TouchControlsKit;
using UnityEngine.SceneManagement; // เพิ่มบรรทัดนี้

//<summary>
//Ball movement controlls and simple third-person-style camera
//</summary>
public class RollerBall : MonoBehaviour 
{

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
	[Min(1)] public int points = 1;     // Coin=1, Diamond=2, Jade=3

	private SuratechAPI suraTechAPI = null;
	// ตัวแปร dictionary สำหรับเก็บข้อมูลเส้นทางหลายๆ ชุดสำหรับแต่ละด่าน
	public static Dictionary<string, List<List<Vector3>>> levelPaths = new Dictionary<string, List<List<Vector3>>>();

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
		// กำหนดชื่อด่านปัจจุบัน
		string levelName = SceneManager.GetActiveScene().name;

		// ตรวจสอบว่ามีรายการสำหรับด่านนี้ใน dictionary หรือไม่
		if (!levelPaths.ContainsKey(levelName)) {
			levelPaths[levelName] = new List<List<Vector3>>();
		}

		// เพิ่มเส้นทางใหม่ (List ใหม่) ลงในรายการของด่านนี้
		levelPaths[levelName].Add(new List<Vector3>());

	}

	void FixedUpdate()
	{
		// ถ้าเกมหยุดชั่วคราว หรือจบเกมแล้ว ให้ return ออกไป
		if (isPause || isEndGame || !isStart) return;

		// ดึงชื่อ Scene ปัจจุบัน
		// string currentLevel = SceneManager.GetActiveScene().name;
		string currentLevel = PlayerPrefs.GetString("$currentScene", "");
		Debug.Log("Check player FixedUpdate - Current level name in RollerBall: " + currentLevel);

		// ตรวจสอบว่ามีข้อมูลของด่านปัจจุบันใน `levelPaths` หรือไม่
		if (levelPaths.ContainsKey(currentLevel) && levelPaths[currentLevel].Count > 0)
		{
			// บันทึกตำแหน่งปัจจุบันของผู้เล่น
			Vector3 currentPosition = transform.position;
			levelPaths[currentLevel][levelPaths[currentLevel].Count - 1].Add(currentPosition);

			// เพิ่ม Debug เพื่อตรวจสอบการบันทึกตำแหน่ง
			Debug.Log("Check player Saved position for level: " + currentLevel + 
					" at time: " + timerTotal.ToString("0.00") + 
					" Position: " + currentPosition);

			// บันทึกชื่อ Scene และตำแหน่งสุดท้ายใน PlayerPrefs
			PlayerPrefs.SetString("LastLevel", currentLevel);
			PlayerPrefs.SetFloat("LastPositionX", currentPosition.x);
			PlayerPrefs.SetFloat("LastPositionY", currentPosition.y);
			PlayerPrefs.SetFloat("LastPositionZ", currentPosition.z);
			PlayerPrefs.SetFloat("LastTime", timerTotal);
			PlayerPrefs.Save();  // บันทึกข้อมูลลงใน PlayerPrefs
		}

		// การเคลื่อนที่ของผู้เล่นและการอัปเดตตำแหน่งของกล้อง
		if (bluetoothManger != null && (bluetoothManger.IsConnect(1) || bluetoothManger.IsConnect(2)))
		{
			// ใช้การเคลื่อนที่จากบลูทูธ
			BluetoothMovement();
		}
		else if (!isJoystick)
		{
			// ใช้การเคลื่อนที่จาก accelerometer
			PlayerMovement(Input.acceleration.x, Input.acceleration.y);
		}
		else
		{
			// ใช้การเคลื่อนที่จาก joystick
			Vector2 move = TCKInput.GetAxis("Joystick");
			PlayerMovement(move.x, move.y);
		}

		// อัปเดตตำแหน่งกล้อง
		if (ViewCamera != null)
		{
			Vector3 direction = (Vector3.up * 2 + Vector3.back) * distanceCamera;
			RaycastHit hit;
			Debug.DrawLine(transform.position, transform.position + direction, Color.red);
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

		// อัปเดตเวลาที่ใช้และอัปเดต UI
		timerTotal += Time.deltaTime;
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
			moveDirection *= 5f;

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
                sumLeft = (bytesLeft[0] + bytesLeft[1] + bytesLeft[2] + bytesLeft[3] + bytesLeft[4]) / 5;
                sumRight = (bytesRight[0] + bytesRight[1] + bytesRight[2] + bytesRight[3] + bytesRight[4]) / 5;
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
		return value * 0.0008f;
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
	void OnTriggerEnter(Collider other)
	{
		if (other.CompareTag("ExitGame"))
		{
			OnResultGame();
			return;
		}

		// รองรับกรณีชนที่ชั้นลึก (child collider)
		var pickup = other.GetComponent<Pickup>() ?? other.GetComponentInParent<Pickup>();
		if (pickup != null)
		{
			if (mAudioSource && (pickup.sfx != null || CoinSound != null))
				mAudioSource.PlayOneShot(pickup.sfx ? pickup.sfx : CoinSound);

			coinTotal += pickup.points;        // เหรียญ=1, เพชร=2 (หลัง 20 นาที)
			Destroy(pickup.gameObject);        // ลบทั้งชุดเหรียญ
			return;
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

		// ตรวจสอบว่าชื่อ Scene ปัจจุบันขึ้นต้นด้วยอะไร
		string currentSceneName = SceneManager.GetActiveScene().name;

		if (currentSceneName.StartsWith("09"))
		{
			// ถ้าอยู่ใน Scene ที่มีเลขขึ้นต้นด้วย "09"
			StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "11_CalibationMaze_AI 1"));
		}
		else if (currentSceneName.StartsWith("10"))
		{
			// ถ้าอยู่ใน Scene ที่มีเลขขึ้นต้นด้วย "10"
			StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "06_SelecteMissionMaze_MazeAI"));
		}
		else
		{
			// ถ้าไม่ใช่ทั้ง "09" และ "10"
			StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "06_SelecteMissionMaze"));
		}
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
		//Debug.Log("[Popup_OnResultGame] called");
		if (PopupCanvasMessage.I == null) {
			//Debug.LogError("[Popup_OnResultGame] PopupCanvasMessage.I is NULL (PopupCanvas ถูกปิดหรือไม่มีสคริปต์?)");
			return;
		}
		if (resultGame == null) {
			//Debug.LogError("[Popup_OnResultGame] resultGame is NULL (ยังไม่ได้ลากใน Inspector)");
			return;
		}

		isEndGame = true;
		SaveData();

		PopupCanvasMessage.I.ShowPopupBeforeResult(
			resultGame, "คะแนนที่คุณได้", coinTotal, "คะแนน"
		);
	}

	void SaveData()
	{
		//save score
		string _user = PlayerPrefs.GetString("$user", "");
		int _sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);
        Debug.Log("Check playerRollerball Save to PlayerPrefs ตรวจสอบ _sceneId1: " + _sceneId);
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

		Debug.Log("Check playerRollerball Save to PlayerPrefs ตรวจสอบ _user: " + _user);
        Debug.Log("Check playerRollerball Save to PlayerPrefs ตรวจสอบ _sceneId2: " + _sceneId);
        Debug.Log("Check playerRollerball Save to PlayerPrefs ตรวจสอบ _typeMap: " + _typeMap);
        Debug.Log("Check playerRollerball Save to PlayerPrefs ตรวจสอบ bestScore: " + bestScore);
		// บันทึกค่า coinTotal ลงใน PlayerPrefs
		PlayerPrefs.SetInt("coinTotalQ0", coinTotal);
		// บันทึกการเปลี่ยนแปลงลงใน storage
		PlayerPrefs.Save();  // เรียกใช้เมื่อมีการบันทึกค่าใหม่
		
		SaveDataToStorage(_user, _sceneId, _typeMap);
	}

	void SaveDataToStorage(string _user, int _sceneId, string _mapType)
	{
		string _typeMap = PlayerPrefs.GetString("$mapType_" + _sceneId, "");
		int passBunsCount = PlayerPrefs.GetInt("$sceneMaze" + _sceneId + "_bonusFail" + _user, 0);
		int failBunsCount = PlayerPrefs.GetInt("$sceneMaze" + _sceneId + "_bonusFail" + _user, 0);
		string _sceneName = PlayerPrefs.GetString("$currentScene", "");
        float copX = PlayerPrefs.GetFloat("COPX", 0.0f);
        float copY = PlayerPrefs.GetFloat("COPY", 0.0f);
		
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
		dataSave.COP_X = copX;
		dataSave.COP_Y = copY;

		StartCoroutine(suraTechAPI.SeveDataGame(dataSave, saveDataCallback));

		Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น game_id: " + dataSave.game_id);
        Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น user_id: " + dataSave.user_id);
		Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น total_score: " + dataSave.total_score);
		Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น timer_gameplay: " + dataSave.timer_gameplay);
		Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น timestamp: " + dataSave.timestamp);
		Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น bonus_fail: " + dataSave.bonus_fail);
        Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น bonus_success: " + dataSave.bonus_success);
        Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น Mission ID: " + dataSave.mission_id);
        Debug.Log("Check playerRollerball Save to API ตรวจสอบผู้เล่น Mission Name: " + dataSave.mission_name);

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
