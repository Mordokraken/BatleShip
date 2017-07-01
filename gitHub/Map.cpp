#include "Map.h"


Map::Map()
{
	randNumb = 0;
	mapGeneration = 6;

	playerMap[mapGeneration][10][10];
	enemyMap[mapGeneration][10][10];

	 for (int i = 0; i < 10; i++)
	 {
		 for (int j = 0; j < 10; j++)
		 {
			 for (int k = 0; k < mapGeneration; k++)
			 {
				 playerMap[k][i][j] = { ' ' };
			 }
			 
		 }
	 }
	 playerMap[0][0][8] = { '#' }; playerMap[0][2][3] = { '#' }; playerMap[0][2][4] = { '#' }; playerMap[0][2][5] = { '#' };
	 playerMap[0][2][6] = { '#' }; playerMap[0][2][9] = { '#' }; playerMap[0][3][0] = { '#' }; playerMap[0][3][1] = { '#' };
	 playerMap[0][4][6] = { '#' }; playerMap[0][4][7] = { '#' }; playerMap[0][4][8] = { '#' }; playerMap[0][5][4] = { '#' };
	 playerMap[0][9][9] = { '#' }; playerMap[0][6][4] = { '#' }; playerMap[0][7][7] = { '#' }; playerMap[0][8][1] = { '#' };
	 playerMap[0][8][9] = { '#' }; playerMap[0][9][3] = { '#' }; playerMap[0][9][4] = { '#' }; playerMap[0][9][5] = { '#' };

	 playerMap[1][1][1] = { '#' }; playerMap[1][1][4] = { '#' }; playerMap[1][1][7] = { '#' }; playerMap[1][2][1] = { '#' };
	 playerMap[1][2][7] = { '#' }; playerMap[1][3][1] = { '#' }; playerMap[1][3][3] = { '#' }; playerMap[1][3][4] = { '#' };
	 playerMap[1][4][1] = { '#' }; playerMap[1][4][8] = { '#' }; playerMap[1][5][5] = { '#' }; playerMap[1][5][6] = { '#' };
	 playerMap[1][6][1] = { '#' }; playerMap[1][6][2] = { '#' }; playerMap[1][6][3] = { '#' }; playerMap[1][7][5] = { '#' };
	 playerMap[1][7][7] = { '#' }; playerMap[1][8][1] = { '#' }; playerMap[1][8][2] = { '#' }; playerMap[1][8][3] = { '#' };

	 playerMap[2][1][0] = { '#' }; playerMap[2][1][1] = { '#' }; playerMap[2][1][2] = { '#' }; playerMap[2][1][3] = { '#' };
	 playerMap[2][1][6] = { '#' }; playerMap[2][3][1] = { '#' }; playerMap[2][3][3] = { '#' }; playerMap[2][3][5] = { '#' };
	 playerMap[2][4][1] = { '#' }; playerMap[2][4][3] = { '#' }; playerMap[2][4][5] = { '#' }; playerMap[2][4][7] = { '#' };
	 playerMap[2][6][5] = { '#' }; playerMap[2][7][1] = { '#' }; playerMap[2][7][2] = { '#' }; playerMap[2][7][3] = { '#' };
	 playerMap[2][7][7] = { '#' }; playerMap[2][1][8] = { '#' }; playerMap[2][3][7] = { '#' }; playerMap[2][5][1] = { '#' };

	 playerMap[3][1][2] = { '#' }; playerMap[3][1][8] = { '#' }; playerMap[3][3][0] = { '#' }; playerMap[3][3][5] = { '#' };
	 playerMap[3][4][9] = { '#' }; playerMap[3][5][9] = { '#' }; playerMap[3][7][1] = { '#' }; playerMap[3][7][2] = { '#' };
	 playerMap[3][7][4] = { '#' }; playerMap[3][7][5] = { '#' }; playerMap[3][7][7] = { '#' }; playerMap[3][7][8] = { '#' };
	 playerMap[3][7][9] = { '#' }; playerMap[3][9][2] = { '#' }; playerMap[3][9][3] = { '#' }; playerMap[3][9][4] = { '#' };
	 playerMap[3][9][6] = { '#' }; playerMap[3][9][7] = { '#' }; playerMap[3][9][8] = { '#' }; playerMap[3][9][9] = { '#' };

	 //playerMap[][][] = { '#' }; playerMap[][][] = { '#' }; playerMap[][][] = { '#' }; playerMap[][][] = { '#' };

	 playerMap[4][0][2] = { '#' }; playerMap[4][0][8] = { '#' }; playerMap[4][0][9] = { '#' }; playerMap[4][1][0] = { '#' };
	 playerMap[4][1][4] = { '#' }; playerMap[4][2][4] = { '#' }; playerMap[4][3][2] = { '#' }; playerMap[4][3][4] = { '#' };
	 playerMap[4][3][7] = { '#' }; playerMap[4][4][2] = { '#' }; playerMap[4][4][9] = { '#' }; playerMap[4][5][2] = { '#' };
	 playerMap[4][5][5] = { '#' }; playerMap[4][5][6] = { '#' }; playerMap[4][5][9] = { '#' }; playerMap[4][6][2] = { '#' };
	 playerMap[4][6][9] = { '#' }; playerMap[4][8][3] = { '#' }; playerMap[4][8][8] = { '#' }; playerMap[4][9][3] = { '#' };

	 playerMap[5][0][0] = { '#' }; playerMap[5][0][4] = { '#' }; playerMap[5][0][5] = { '#' }; playerMap[5][0][6] = { '#' };
	 playerMap[5][1][0] = { '#' }; playerMap[5][1][8] = { '#' }; playerMap[5][2][3] = { '#' }; playerMap[5][3][5] = { '#' };
	 playerMap[5][4][5] = { '#' }; playerMap[5][5][1] = { '#' }; playerMap[5][5][2] = { '#' }; playerMap[5][5][3] = { '#' };
	 playerMap[5][6][8] = { '#' }; playerMap[5][6][9] = { '#' }; playerMap[5][7][0] = { '#' }; playerMap[5][7][3] = { '#' };
	 playerMap[5][7][4] = { '#' }; playerMap[5][7][5] = { '#' }; playerMap[5][7][6] = { '#' }; playerMap[5][9][1] = { '#' };

}
int Map::randNumber()
{
	randNumb = rand() % 3 + 1;

	return randNumb;
}

