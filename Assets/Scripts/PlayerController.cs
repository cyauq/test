using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine.UI;

namespace Xeemu.PathAutoGen
{

    public class PlayerController : MonoBehaviour
    {

        #region Private variable
        private readonly IPlayerService iPlayerService;
        private float newXPos = 0.0f;
        private Rigidbody playerRigidBody;        
        private int coinValue = 0;
        private int currentHp = 0;        
        private string sceneName;
        #endregion

        private AudioSource mAudioSource = null;

        #region Public Vaiables
        public Animator animatorPlayer;
        public Camera mainCamera;
        public GameObject restartButton;
        public GameObject timerUpUI;
        public GameObject bonusGame;
        public GameObject matchGame;
        public GameObject pauseGame;
        [HideInInspector]
        public bool isSikdding = false;
        [HideInInspector]
        public bool isGameOver = false;
        [HideInInspector]
        public bool isJump = false;
        [HideInInspector]
        public bool isRightUp = false;
        [HideInInspector]
        public bool isLeftUp = false;
        [HideInInspector]
        public bool isGround = true;
        [HideInInspector]
        public bool isBonus = false;
        [HideInInspector]
        public bool isPause = false;
        [HideInInspector]
        public bool isStart = false;
        [HideInInspector]
        public float totalDistance = 0f;
        [HideInInspector]
        public float maxSpeed = 0f;
        [HideInInspector]
        public float timerGame = 60.0f;


        PLAYERSIDE playerSide = PLAYERSIDE.CENTER;
        public List<Image> hpIcons;
        public Text coinLabel;
        public GameObject coinParticle;
        public GameObject obstacleParticle;
        public Text readyLabel;
        public Text timerLabel;
        #endregion

        [Header("AudioClips")]
        public AudioClip hitClip;
        public AudioClip coinClip;
        public AudioClip bonusClip;

        #region Private blurtooth
        private BluetoothManager bluetoothManger;
        #endregion

        private SuratechAPI suraTechAPI;

        public GameObject controllerJoystick;

        //Constructor
        PlayerController()
        {
            iPlayerService = new PlayerService();
        }

        // Use this for initialization
        void Start()
        {
            mAudioSource = GetComponent<AudioSource>();
            controllerJoystick.SetActive(false);
            bluetoothManger = FindObjectOfType<BluetoothManager>();
            suraTechAPI = FindObjectOfType<SuratechAPI>();
            playerSide = PLAYERSIDE.CENTER;
            playerRigidBody = GetComponent<Rigidbody>();
            coinParticle.SetActive(false);
            obstacleParticle.SetActive(false);
            pauseGame.SetActive(false);
            // Male HP
            currentHp = hpIcons.Capacity;
            isStart = false;
            readyLabel.text = "";
            StartCoroutine(ReadyToPlay());

            string _user = PlayerPrefs.GetString("$user", "");
            int _sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);

            timerGame = PlayerPrefs.GetFloat("$sceneRun" + _sceneId + "_timerGame" + _user, 60f);
            timerLabel.text = timerGame.ToString("0");
        }

        // Update is called once per frame
        void Update()
        {

#if UNITY_EDITOR_WIN || UNITY_EDITOR_OSX || UNITY_WEBPLAYER
            keyboardMovement();
            BluetoothMovement();
#endif
#if UNITY_ANDROID
            TouchMovement();
            BluetoothMovement();
#endif
#if UNITY_IPHONE
            TouchMovement();
            BluetoothMovement();
#endif
            if (!isBonus && !isPause && isStart)
            {
                timerGame -= Time.deltaTime;
                timerLabel.text = timerGame.ToString("0");
            }

            if (timerGame <= 0 && !isGameOver)
            {
                isStart = false;
                timerGame = 0;
                timerLabel.text = timerGame.ToString("0");
                iPlayerService.TimeUp(ref restartButton, ref maxSpeed, ref totalDistance, ref coinValue);
                timerUpUI.SetActive(true);
                //iTween.ScaleFrom(timerUpUI.gameObject, iTween.Hash("x", 0f, "y", 0f, "z", 0f, "time", 0.3f, "oncompletetarget", gameObject));                
                StartCoroutine(StartGameOverUI());
            }
            
        }

        IEnumerator StartGameOverUI()
        {            
            yield return new WaitForSeconds(4);
            timerUpUI.SetActive(false);
            iPlayerService.GameOver(ref restartButton, ref maxSpeed, ref totalDistance, ref coinValue);
        }

#if UNITY_EDITOR_WIN || UNITY_EDITOR_OSX
        /// <summary>
        /// Keyboards the movement.
        /// </summary>
        private void keyboardMovement()
        {
            var yPos = Convert.ToSingle(Math.Round(transform.position.y, 2));
            //calling Services Method
            iPlayerService.keyboardMovement(ref playerSide, ref newXPos, ref playerRigidBody, ref yPos, ref bonusGame, ref matchGame, ref coinLabel, ref coinValue);            
        }
#endif

#if UNITY_ANDROID || UNITY_IPHONE
        /// <summary>
        /// Touchs the movement.
        /// </summary>
        private void TouchMovement()
        {            
            var yPos = Convert.ToSingle(Math.Round(transform.position.y, 2));
            //calling Services Method
            iPlayerService.touchMovement(ref playerSide, ref newXPos, ref playerRigidBody, ref yPos, ref bonusGame, ref matchGame, ref coinLabel, ref coinValue);            
        }
#endif

        private void BluetoothMovement()
        {
            if (bluetoothManger != null)
            {  
                var yPos = Convert.ToSingle(Math.Round(transform.position.y, 2));
                //calling Services Method
                if (bluetoothManger.IsConnect(1))
                {
                    iPlayerService.surasoleRightMovement(ref playerSide, ref newXPos, ref playerRigidBody, ref yPos, GetValueSensorRight(), ref bonusGame, ref matchGame, ref coinLabel, ref coinValue);
                }

                if (bluetoothManger.IsConnect(2))
                {
                    iPlayerService.surasoleLeftMovement(ref playerSide, ref newXPos, ref playerRigidBody, ref yPos, GetValueSensorLeft(), ref bonusGame, ref matchGame, ref coinLabel, ref coinValue);
                }

            }
        }

        /// <summary>
        /// Raises the trigger enter event.
        /// </summary>
        /// <param name="triggerCollider">Trigger collider.</param>
        void OnTriggerEnter(Collider triggerCollider)
        {
            coinParticle.SetActive(false);
            obstacleParticle.SetActive(false);
            //calling Services Method
            iPlayerService.EnterTrigger(ref coinValue,
                                        ref coinLabel,
                                        ref triggerCollider,
                                        ref restartButton,
                                        ref maxSpeed,
                                        ref currentHp,
                                        ref hpIcons,
                                        ref totalDistance,
                                        ref sceneName,
                                        ref bonusGame,
                                        ref matchGame,
                                        ref mAudioSource,
                                        hitClip,
                                        coinClip,
                                        bonusClip);
        }

        /// <summary>
        /// Get value right sencor bluetooth
        /// </summary>
        /// <returns></returns>
        public int[] GetValueSensorRight()
        {
            if (bluetoothManger != null)
                return bluetoothManger.GetSubscribeCharacteristic(2).Item1;
            return new int[5];
        }

        /// <summary>
        /// Get value left sencor bluetooth
        /// </summary>
        /// <returns></returns>
        public int[] GetValueSensorLeft()
        {
            if (bluetoothManger != null)
                return bluetoothManger.GetSubscribeCharacteristic(1).Item1;
            return new int[5];
        }

        /// <summary>
        /// Restarts the game.
        /// </summary>
        public void OnExitGame()
        {
            if (!isGameOver)
            {
                //save score
                string _user = PlayerPrefs.GetString("$user", "");
                int _sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);
                SaveData(_user, _sceneId, ref totalDistance, ref coinValue);
            }
            StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "06_SelecteMissionRuner"));
        }

        public void OnRestartGame(bool isGameOver = true)
        {
            if (!isGameOver)
            {
                //save score
                string _user = PlayerPrefs.GetString("$user", "");
                int _sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);
                SaveData(_user, _sceneId, ref totalDistance, ref coinValue);
                timerGame = PlayerPrefs.GetFloat("$sceneRun" + _sceneId + "_timerGame" + _user, 60f);
                timerLabel.text = timerGame.ToString("0");
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

        IEnumerator ReadyToPlay()
        {
            if (bluetoothManger != null && bluetoothManger.IsConnect(1) && bluetoothManger.IsConnect(2))
            {
                controllerJoystick.SetActive(false);
            } else
            {
                controllerJoystick.SetActive(true);
            }
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

        public void SaveData(string _user, int _sceneId, ref float _distance, ref int _coin)
        {
            
            string _typeMap = PlayerPrefs.GetString("$mapType_" + _sceneId, "");            
            int bestScore = PlayerPrefs.GetInt("$bestScore_" + _typeMap + "_" + _sceneId + "_" + _user, 0);
    
            if (bestScore == 0)
            {
                PlayerPrefs.SetInt("$bestScore_" + _typeMap + "_" + _sceneId + "_" + _user, coinValue);
            }
            if (bestScore < coinValue)
            {
                PlayerPrefs.SetInt("$bestScore_" + _typeMap + "_" + _sceneId + "_" + _user, coinValue);
            }

            PlayerPrefs.SetInt("$currentScore_" + _typeMap + "_" + _sceneId + "_" + _user, coinValue);


            //iPlayerService.SaveDataToStorage(_user, _sceneId, ref totalDistance, ref coinValue);

            SaveDataToStorage(_user, _sceneId, ref totalDistance, ref coinValue);
        }



        void SaveDataToStorage(string _user, int _sceneId, ref float _distance, ref int _coin)
        {
            if (suraTechAPI == null)
            {
                suraTechAPI = FindObjectOfType<SuratechAPI>(); //GameObject.FindGameObjectWithTag("SuraTechAPI").GetComponent<SuratechAPI>();
            }
            
            int passBunsCount = PlayerPrefs.GetInt("$sceneRun" + _sceneId + "_bonusFail" + _user, 0);
            int failBunsCount = PlayerPrefs.GetInt("$sceneRun" + _sceneId + "_bonusFail" + _user, 0);
            string _sceneName = PlayerPrefs.GetString("$currentScene", "");

            var dataSave = new SaveDataModel();
            dataSave.game_id = 1;
            dataSave.user_id = suraTechAPI.memberInfo.user_member;
            dataSave.total_score = _coin;
            dataSave.distance = _distance;
            dataSave.timer_gameplay = 0;
            dataSave.timestamp = suraTechAPI._GetDate(DateTime.Now.ToUniversalTime().AddHours(7));//DateTime.Now.ToLocalTime().ToString("yyyy-MM:dd HH:mm:ss");
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
    }
}