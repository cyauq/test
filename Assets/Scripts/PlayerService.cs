using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TouchControlsKit;

namespace Xeemu.PathAutoGen
{
    /// <summary>
    /// Player service.
    /// </summary>
    public class PlayerService : MonoBehaviour, IPlayerService
    {

        private readonly IPlaneHelperService _iPlaneHerplerService;

        private PlayerController _playerController;
        private GameObject _playerControllerObject;

        private GameObject _gameManagerObject;
        private PlanePathController _planePathController;

        private int _positionGuideline;

        private GameObject _guideL;
        private GameObject _guideR;
        private GuidelineUI _guildLController;
        private GuidelineUI _guildRController;
        private SINGLEROWBLOCKER _typeBonus;

        private string _user = "";
        private int _coin = 1;
        private float sensorUp1 = 0f;
        private float sensorUp2 = 0f;
        
        private float sensorDown1 = 0f;
        private float sensorDown2 = 0f;
        

        [Header("Bar sensor")]
        private GameObject barSensorLeft;
        private GameObject barSensorRight;
        private float DEFAULT_VALUE = 100f;
        /// <summary>
        /// Initializes a new instance of the <see cref="Xeemu.PathAutoGen.PlayerService"/> class.
        /// </summary>
        public PlayerService()
        {
            _iPlaneHerplerService = new PlanePathHelperService();            
        }

        #region IPlayerService implementation

        /// <summary>
        /// surasole right the movement.
        /// </summary>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        public void surasoleRightMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, int[] sensor, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue)
        {       
            if (_playerControllerObject == null)
            {
                FindPlayerControllerObject();
            }
            //5 sensor
            if (!_playerController.isGameOver && _playerController.isStart && sensor.Length < 7)
            {
                
                float sum = sensor[1] + sensor[2] + sensor[4];

                if (barSensorRight == null)
                {
                    barSensorRight = GameObject.Find("SliderRight");
                    barSensorRight.GetComponent<Slider>().maxValue = 1023 * 3;
                }

                barSensorRight.GetComponent<Slider>().value = sum;
                GameObject.Find("txtRight").GetComponent<Text>().text = sum.ToString();
                

                sensorUp2 = PlayerPrefs.GetFloat("$calibrateUpDevice2", DEFAULT_VALUE);                                  
                sensorDown2 = PlayerPrefs.GetFloat("$calibrateDownDevice2", DEFAULT_VALUE);
                
                float diff = (sensorDown2 - sensorUp2) / 2f;
                if ((sum - sensorUp2) < diff)
                {                    
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, true);
                    if (_playerController.isBonus)
                    {
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                    }                   
                }
                else
                {                    
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, false);
                }
            }

            // 8 sensor
            if (!_playerController.isGameOver && _playerController.isStart && sensor.Length > 7)
            {
                float sum = sensor[2] + sensor[4] + sensor[7];

                if (barSensorRight == null)
                {
                    barSensorRight = GameObject.Find("SliderRight");
                    barSensorRight.GetComponent<Slider>().maxValue = 1023 * 3;
                }

                barSensorRight.GetComponent<Slider>().value = sum;
                GameObject.Find("txtRight").GetComponent<Text>().text = sum.ToString();
                

                sensorUp2 = PlayerPrefs.GetFloat("$calibrateUpDevice2", DEFAULT_VALUE);                                  
                sensorDown2 = PlayerPrefs.GetFloat("$calibrateDownDevice2", DEFAULT_VALUE);
                
                float diff = (sensorDown2 - sensorUp2) / 2f;
                if ((sum - sensorUp2) < diff)
                {                    
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, true);
                    if (_playerController.isBonus)
                    {
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                    }                   
                }
                else
                {                    
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, false);
                }
            }
        }

        /// <summary>
        /// surasole left the movement.
        /// </summary>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        public void surasoleLeftMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, int[] sensor, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue)
        {            
            if (_playerControllerObject == null)
            {
                FindPlayerControllerObject();
            }
            // 5 sensor
            if (!_playerController.isGameOver && _playerController.isStart && sensor.Length < 7)
            {
                float sum = sensor[1] + sensor[2] + sensor[4];
                
                if (barSensorLeft == null)
                {
                    barSensorLeft = GameObject.Find("SliderLeft");
                    barSensorLeft.GetComponent<Slider>().maxValue = 1023 * 3;
                }

                barSensorLeft.GetComponent<Slider>().value = sum;
                GameObject.Find("txtLeft").GetComponent<Text>().text = sum.ToString();

                sensorUp1 = PlayerPrefs.GetFloat("$calibrateUpDevice1", DEFAULT_VALUE);
                sensorDown1 = PlayerPrefs.GetFloat("$calibrateDownDevice1", DEFAULT_VALUE);
                

                float diff = (sensorDown1 - sensorUp1) / 2f;
                //string log = "diff : " + diff.ToString() + "\nsum : " + sum + "\n up : " + sensorUp1 + "\n down : " + sensorDown1;
                //GameObject.Find("LogLabel0").GetComponent<Text>().text = log;

                if ((sum - sensorUp1) < diff)
                {                    
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, true);
                    if (_playerController.isBonus)
                    {
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                    }
                }
                else
                {
                    //GameObject.Find("txtLeft").GetComponent<Text>().text = "";
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, false);
                }          
            }
            //8 sensor
            if (!_playerController.isGameOver && _playerController.isStart && sensor.Length > 7)
            {
                float sum = sensor[2] + sensor[4] + sensor[7];
                
                if (barSensorLeft == null)
                {
                    barSensorLeft = GameObject.Find("SliderLeft");
                    barSensorLeft.GetComponent<Slider>().maxValue = 1023 * 3;
                }

                barSensorLeft.GetComponent<Slider>().value = sum;
                GameObject.Find("txtLeft").GetComponent<Text>().text = sum.ToString();

                sensorUp1 = PlayerPrefs.GetFloat("$calibrateUpDevice1", DEFAULT_VALUE);
                sensorDown1 = PlayerPrefs.GetFloat("$calibrateDownDevice1", DEFAULT_VALUE);
                

                float diff = (sensorDown1 - sensorUp1) / 2f;
                //string log = "diff : " + diff.ToString() + "\nsum : " + sum + "\n up : " + sensorUp1 + "\n down : " + sensorDown1;
                //GameObject.Find("LogLabel0").GetComponent<Text>().text = log;

                if ((sum - sensorUp1) < diff)
                {                    
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, true);
                    if (_playerController.isBonus)
                    {
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                    }
                }
                else
                {
                    //GameObject.Find("txtLeft").GetComponent<Text>().text = "";
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, false);
                }          
            }
        }

        /// <summary>
        /// Gets the player X postion.
        /// </summary>
        /// <returns>The player X postion.</returns>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        public void keyboardMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue)
        {
            if (_playerControllerObject == null)
            {
                FindPlayerControllerObject();
            }

            if (!_playerController.isGameOver)
            {

                if (Input.GetKeyDown(KeyCode.Z))
                {
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, false);                    
                    if (_playerController.isBonus)
                    {                        
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                    }
                }
                else if (Input.GetKeyDown(KeyCode.Slash))
                {
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, false);                    
                    if (_playerController.isBonus)
                    {
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                    }
                }
                else if (Input.GetKeyDown(KeyCode.X))
                {                    
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, true);
                }
                else if (Input.GetKeyDown(KeyCode.Period))
                {                    
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, true);
                }
            }

        }

        /// <summary>
        /// Touchs the movement.
        /// </summary>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        public void touchMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue)
        {
            if (_playerControllerObject == null)
            {
                FindPlayerControllerObject();
            }

            if (!_playerController.isGameOver)
            {
                if (TCKInput.GetAction("ctrlRightUp", EActionEvent.Down))
                {
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, true);
                    if (_playerController.isBonus)
                    {
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.RIGHT, ref coinLabel, ref coinValue);
                    }
                }

                if (TCKInput.GetAction("ctrlRightDown", EActionEvent.Down))
                {
                    RightUpAndDown(ref playerYPos, ref playerRigidBody, false);
                }

                if (TCKInput.GetAction("ctrlLeftUp", EActionEvent.Down))
                {
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, true);
                    if (_playerController.isBonus)
                    {
                        if (miniGameScreen.activeInHierarchy)
                            miniGameScreen.GetComponent<BonusSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                        else if (matchGame.activeInHierarchy)
                            matchGame.GetComponent<BonusMatchSceneUI>().SelectAnswer(SCHOOSE.LEFT, ref coinLabel, ref coinValue);
                    }
                }

                if (TCKInput.GetAction("ctrlLeftDown", EActionEvent.Down))
                {
                    LeftUpAndDown(ref playerYPos, ref playerRigidBody, false);
                }
            }            
        }

        /// <summary>
        /// Enters the trigger.
        /// </summary>
        /// <param name="coinValue">Coin value.</param>
        /// <param name="coinLabel">Coin label.</param>
        /// <param name="triggerCollider">Trigger collider.</param>
        /// <param name="restartButton">Restart button.</param>
        /// <param name="currentPathSpeed">Current path speed.</param>
        public void EnterTrigger(
            ref int coinValue,
            ref Text coinLabel,
            ref Collider triggerCollider,
            ref GameObject restartButton,
            ref float currentPathSpeed,
            ref int currentHp,
            ref List<Image> hp,
            ref float distance,
            ref string currentMission,
            ref GameObject bonusGame,
            ref GameObject matchGame,
            ref AudioSource mAudioSource,
            AudioClip hitClip,
            AudioClip coinClip,
            AudioClip bonusClip
            )
        {           
            if (_playerController.isPause) return;
            if (_playerControllerObject == null)
            {
                FindPlayerControllerObject();
            }
            if (triggerCollider.gameObject.tag.ToLower() == "obstacle")
            {
                // player sound effect
                mAudioSource.PlayOneShot(hitClip);


                _playerController.obstacleParticle.SetActive(true);
                currentHp--;
                Debug.Log("currentHp: " + currentHp);
                hp[currentHp].enabled = false;
                if (currentHp < 1)
                {
                    GameOverMethod(ref restartButton, ref currentPathSpeed, ref distance, ref coinValue);
                }
                else
                {

                }
                triggerCollider.gameObject.SetActive(false);
            }

            if (triggerCollider.gameObject.tag.ToLower() == "skidding")
            {
                if (!_playerController.isSikdding)
                {
                    // player sound effect
                    mAudioSource.PlayOneShot(hitClip);

                    _playerController.obstacleParticle.SetActive(true);
                    currentHp--;
                    Debug.Log("currentHp: " + currentHp);
                    hp[currentHp].enabled = false;
                    if (currentHp < 1)
                    {
                        GameOverMethod(ref restartButton, ref currentPathSpeed, ref distance, ref coinValue);
                    }
                    triggerCollider.gameObject.SetActive(false);
                }
            }
            if (triggerCollider.gameObject.tag.ToLower() == "coins")
            {
                // player sound effect
                mAudioSource.PlayOneShot(coinClip);

                _playerController.coinParticle.SetActive(true);
                _user = PlayerPrefs.GetString("$user", "");
                int mapid = PlayerPrefs.GetInt("$currentSceneID", 1);                
                _coin = PlayerPrefs.GetInt("$sceneRun" + mapid + "_coin" + _user, 1);
                coinValue += _coin;
                coinLabel.text = coinValue.ToString();
                triggerCollider.gameObject.SetActive(false);
                PlayerPrefs.SetInt(currentMission, coinValue);
            }
            if (triggerCollider.gameObject.tag.ToLower() == "guide")
            { 
                if (_guildLController == null || _guildRController == null)
                {
                    FindGuidelineObject();
                }
                
                _typeBonus = (SINGLEROWBLOCKER)UnityEngine.Random.Range(1, 6);
                _positionGuideline = UnityEngine.Random.Range(0, 2);
                Debug.Log("_typeBonus --->  " + _typeBonus.ToString());
                if (_positionGuideline == 0)
                    _guildLController.OnStartSprite(_typeBonus);
                else
                    _guildRController.OnStartSprite(_typeBonus);

                triggerCollider.gameObject.SetActive(false);
            }            

            if (triggerCollider.gameObject.tag.ToLower() == "bonus")
            {
                // player sound effect
                mAudioSource.PlayOneShot(bonusClip);

                _positionGuideline = -1;
                GameBonusMethod(ref bonusGame);
                triggerCollider.gameObject.SetActive(false);
            }

            if (triggerCollider.gameObject.tag.ToLower() == "matchgame")
            {
                // player sound effect
                mAudioSource.PlayOneShot(bonusClip);
                GameMatcMethod(ref matchGame);
                triggerCollider.gameObject.SetActive(false);
            }

            if (triggerCollider.gameObject.tag.ToLower() == "ready")
            {
                if (_guildLController == null || _guildRController == null)
                {
                    FindGuidelineObject();
                }

                _guildLController.OnDistorySprite();
                _guildRController.OnDistorySprite();
                triggerCollider.gameObject.SetActive(false);
            }
        }

        public void TimeUp(ref GameObject restartButton, ref float currentPathSpeed, ref float distance, ref int coinValue)
        {            
            _playerController.isGameOver = true;
            if (_gameManagerObject == null)
            {
                FindGameManagerController();
            }
            _planePathController.speed = 0.0f;
            
        }

        public void GameOver(ref GameObject restartButton, ref float currentPathSpeed, ref float distance, ref int coinValue)
        {
            GameOverMethod(ref restartButton, ref currentPathSpeed, ref distance, ref coinValue);
        }

        #endregion



        #region Helper Section
        /// <summary>
        /// Finds the P layer controller object.
        /// </summary>
        void FindPlayerControllerObject()
        {
            _playerControllerObject = GameObject.FindWithTag("Player");
            if (_playerControllerObject != null)
            {
                _playerController = _playerControllerObject.GetComponent<PlayerController>();
            }           
        }

        /// <summary>
        /// Finds the game manager controller.
        /// </summary>
        void FindGameManagerController()
        {
            _gameManagerObject = GameObject.FindWithTag("GameManger");
            if (_gameManagerObject != null)
            {
                _planePathController = _gameManagerObject.GetComponent<PlanePathController>();
            }
        }

        void FindGuidelineObject()
        {
            _guideL = GameObject.FindGameObjectWithTag("GuidelineL");
            if (_guideL != null)
            {
                _guildLController = _guideL.GetComponent<GuidelineUI>();
            }
            _guideR = GameObject.FindGameObjectWithTag("GuidelineR");
            if (_guideR != null)
            {
                _guildRController = _guideR.GetComponent<GuidelineUI>();
            }
        }

        /// <summary>
        /// Gets the player X postion.
        /// </summary>
        /// <returns>The player X postion.</returns>
        /// <param name="playerSide">Player side.</param>
        public float GetPlayerXPostion(PLAYERSIDE playerSide)
        {
            COINALIGNMENT coinAlignment = COINALIGNMENT.CENTRE;

            switch (playerSide)
            {
                case PLAYERSIDE.CENTER:
                    coinAlignment = COINALIGNMENT.CENTRE;
                    break;
                case PLAYERSIDE.LEFT:
                    coinAlignment = COINALIGNMENT.LEFT;
                    break;
                case PLAYERSIDE.RIGHT:
                    coinAlignment = COINALIGNMENT.RIGHT;
                    break;

            }
            var pathModel = new PathModel();
            if (_gameManagerObject == null)
            {
                FindGameManagerController();
            }
            if (_gameManagerObject != null)
            {
                pathModel.PathSizeLength = _planePathController.tileLength;
                pathModel.PathSizeWidth = _planePathController.tileWidth;
            }

            //Aliginment
            return _iPlaneHerplerService.GetAlignmentType(coinAlignment, pathModel);

        }


        void LeftUpAndDown(ref float playerYPos, ref Rigidbody playerRigidBody, bool stateUp)
        {
            if (_playerController.isPause) return;
            if (_gameManagerObject == null)
            {
                FindGameManagerController();
            }
            if (stateUp && !_playerController.isBonus)
            {
                _playerController.animatorPlayer.SetBool("LeftDown", false);
                _playerController.animatorPlayer.SetBool("LeftUp", true);
            }
            else if (!stateUp && !_playerController.isBonus)
            {
                //_playerController.isLeftUp = false;
                _playerController.animatorPlayer.SetBool("LeftUp", false);
                _playerController.animatorPlayer.SetBool("LeftDown", true);     
            }
        }

        void RightUpAndDown(ref float playerYPos, ref Rigidbody playerRigidBody, bool stateUp)
        {
            if (_playerController.isPause) return;
            if (_gameManagerObject == null)
            {
                FindGameManagerController();
            }
            if (stateUp && !_playerController.isBonus)
            {    
                _playerController.animatorPlayer.SetBool("RightDown", false);                
                _playerController.animatorPlayer.SetBool("RightUp", true);
            }
            else if (!stateUp && !_playerController.isBonus)
            {
                _playerController.animatorPlayer.SetBool("RightUp", false);
                _playerController.animatorPlayer.SetBool("RightDown", true);     
            }

        }       

        void GameBonusMethod(ref GameObject bonusGame)
        {            
            _playerController.animatorPlayer.SetBool("RightDown", false);
            _playerController.animatorPlayer.SetBool("RightUp", false);
            _playerController.animatorPlayer.SetBool("LeftDown", false);
            _playerController.animatorPlayer.SetBool("LeftUp", false);
            _playerController.isBonus = true;
            bonusGame.SetActive(true);
            bonusGame.GetComponent<BonusSceneUI>().WaitForStart(_typeBonus);
        }

        void GameMatcMethod(ref GameObject matchGame)
        {
            _playerController.animatorPlayer.SetBool("RightDown", false);
            _playerController.animatorPlayer.SetBool("RightUp", false);
            _playerController.animatorPlayer.SetBool("LeftDown", false);
            _playerController.animatorPlayer.SetBool("LeftUp", false);
            _playerController.isBonus = true;
            matchGame.SetActive(true);
            matchGame.GetComponent<BonusMatchSceneUI>().WaitForStart();
        }

        void GameOverMethod(ref GameObject restartButton, ref float currentPathSpeed, ref float distance, ref int coinValue)
        {
            //save score
            string _user = PlayerPrefs.GetString("$user", "");
            int _sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);
            int bestScore = PlayerPrefs.GetInt("$bestScore_"+ _sceneId + "_" + _user, 0);
            
            if (bestScore == 0)
            {
                PlayerPrefs.SetInt("$bestScore_" + _sceneId + "_" + _user, coinValue);
            }
            if (bestScore < coinValue)
            {
                PlayerPrefs.SetInt("$bestScore_" + _sceneId + "_" + _user, coinValue);
            }
                     
            PlayerPrefs.SetInt("$currentScore_" + _sceneId + "_" + _user, coinValue);

            _playerController.SaveData(_user, _sceneId, ref distance, ref coinValue);

            _playerController.animatorPlayer.SetBool("RightDown", false);
            _playerController.animatorPlayer.SetBool("RightUp", false);
            _playerController.animatorPlayer.SetBool("LeftDown", false);
            _playerController.animatorPlayer.SetBool("LeftUp", false);

            if (_gameManagerObject == null)
            {
                FindGameManagerController();
            }
            if (_gameManagerObject != null)
            {
                _playerController.isGameOver = true;
                currentPathSpeed = _planePathController.speed;
                _planePathController.speed = 0.0f;
                restartButton.SetActive(true);
                restartButton.GetComponent<GameOverUI>().textScore.text = coinValue.ToString("0");
                restartButton.GetComponent<GameOverUI>().textTitle.text = "คะแนนที่คุณได้";
                restartButton.GetComponent<GameOverUI>().textUnit.text = "คะแนน";
            }
        }

        #endregion        
    }
}