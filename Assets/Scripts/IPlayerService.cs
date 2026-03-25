using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace Xeemu.PathAutoGen
{

    public interface IPlayerService
    {

        /// <summary>
        /// surasole right the movement.
        /// </summary>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        void surasoleRightMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, int[] sensor, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue);

        /// <summary>
        /// surasole left the movement.
        /// </summary>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        void surasoleLeftMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, int[] sensor, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue);

        /// <summary>
        /// Keyboards the movement.
        /// </summary>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        void keyboardMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue);

        /// <summary>
        /// Touchs the movement.
        /// </summary>
        /// <param name="playerSide">Player side.</param>
        /// <param name="newXPos">New X position.</param>
        /// <param name="playerRigidBody">Player rigid body.</param>
        /// <param name="playerYPos">Player Y position.</param>
        void touchMovement(ref PLAYERSIDE playerSide, ref float newXPos, ref Rigidbody playerRigidBody, ref float playerYPos, ref GameObject miniGameScreen, ref GameObject matchGame, ref Text coinLabel, ref int coinValue);

        /// <summary>
        /// Enters the trigger.
        /// </summary>
        /// <param name="coinValue">Coin value.</param>
        /// <param name="coinLabel">Coin label.</param>
        /// <param name="triggerCollider">Trigger collider.</param>
        /// <param name="restartButton">Restart button.</param>
        /// <param name="currentPathSpeed">Current path speed.</param>
        void EnterTrigger(ref int coinValue, ref Text coinLabel, ref Collider triggerCollider, ref GameObject restartButton, ref float currentPathSpeed, ref int currentHp, ref List<Image> hp, ref float distance,
                ref string currentMission, ref GameObject bonusGame, ref GameObject matchGame, ref AudioSource mAdioSource, AudioClip hitClip, AudioClip coinClip, AudioClip bonusClip);

        /// <summary>
        /// 
        /// </summary>
        /// <param name="restartButton"></param>
        /// <param name="currentPathSpeed"></param>
        /// <param name="distance"></param>
        /// <param name="coinValue"></param>
        void TimeUp(ref GameObject restartButton, ref float currentPathSpeed, ref float distance, ref int coinValue);

        /// <summary>
        /// 
        /// </summary>
        /// <param name="restartButton"></param>
        /// <param name="currentPathSpeed"></param>
        /// <param name="distance"></param>
        /// <param name="coinValue"></param>
        void GameOver(ref GameObject restartButton, ref float currentPathSpeed, ref float distance, ref int coinValue);

    }
}
