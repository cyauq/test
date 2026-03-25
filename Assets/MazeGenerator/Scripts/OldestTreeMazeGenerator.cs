using UnityEngine;
using System.Collections;

//<summary>
//Subclass for selecting oldest cell from container
//</summary>
public class OldestTreeMazeGenerator : TreeMazeGenerator {

	public OldestTreeMazeGenerator(int rows, int columns, int coin):base(rows,columns,coin){

		
	}
	
	protected override int GetCellInRange(int max)
	{
		return 0;
	}
}
