using UnityEngine;
using System.Collections;

//<summary>
//Sublcass for selecting random cell from container
//</summary>
public class RandomTreeMazeGenerator : TreeMazeGenerator {

	public RandomTreeMazeGenerator(int rows, int columns, int coin):base(rows,columns,coin){

		
	}
	
	protected override int GetCellInRange(int max)
	{
		return Random.Range (0, max+1);
	}
}
