#include "Board.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;


int const HIGHT_BOARD = 10;
int const WIDTH_BOARD = 10;
int const QUANTITY_CELLS = 100;

Board::Board()
{
	/*
	
	
	BoardUser[HIGHT_BOARD][WIDTH_BOARD];
	BoardEnemy[HIGHT_BOARD][WIDTH_BOARD];
	BoardEnemyUnit[HIGHT_BOARD][WIDTH_BOARD];

	mShip = new Ships();
	mEnemy = new Enemy();

	//mEnemy->enemyShot(BoardUser);

	 posX = 0;
	 posY = 0;

	 lifeUser = 20;
	 lifeEnemy = 20;

	

	 batlesBoard();


	 drawBoard(BoardUser, BoardEnemy);
	 */
}

void Board::drawBoard(char BoardUser[10][10], char BoardEnemy[10][10])

{
	
	system("cls");

	cout << ' ' << '|';
	for (int i = 0; i <= 9; i++)
	{
		cout  << i;

	}
	cout << '|' << ' ' << '|';
	for (int i = 0; i <= 9; i++)
	{
		cout << i;

	}
	cout << '|' << endl;

	for (int i = 0; i < 28; i++)
	{
		cout << "#";
	}

	cout << "\n";
		//print the userboard and a gameboard
	for (int i = 0; i <WIDTH_BOARD; i++)
	{
		cout << i << "|";
		for (int j = 0; j <HIGHT_BOARD; j++)
		{
			cout << BoardUser[i][j];

		}
		cout << '|' << i << '|';
		for (int j = 0; j < HIGHT_BOARD; j++)
		{
			cout << BoardEnemy[i][j];
		}

		cout << '|' << i << '|';

		cout << "\n";
	}

	for (int i = 0; i < 28; i++)
	{
		cout << "#";
	}

	cout << "\n  Players ships  Enemies ships \n";
	cout <<"    "<<lifeUser<< "              "<< lifeEnemy << endl;
	cout << "\n\n\n";
	
}


void Board::initBoard(char BoardUser[10][10])
{

	//init game board
	for (int i = 0; i <WIDTH_BOARD; i++)

	{

		for (int j = 0; j <HIGHT_BOARD; j++)
		{
			BoardUser[j][i] = ' ';
			BoardEnemy[j][i] = ' ';
			BoardEnemyUnit[j][i] = ' ';
		}

	}


}

void Board::fillingBoard()
{
	//Drow 1 4-deck ship  ####
	

	for (int i = 0; i < 1; i++)
	{
		
		for (int  i = 0; i < 4; i++)
		{
			cout << "Drow 1 4-deck ship  ####\n";

			cout << "Enter first " << i << "Y coordinate\n";

			cin >> posX;						
			if (posX > 0 && posX < HIGHT_BOARD)
			{
				cout << "enter the two " << i << "X coordinate\n";
				cin >> posY;
				if (posY > 0 && posY < HIGHT_BOARD)
				{
					if (BoardUser[posX][posY] != '#')
					{
						mShip->createShip(posX, posY, BoardUser);
						drawBoard(BoardUser, BoardEnemy);
					}
					else
					{
						continue;
					}

				}

			}
			else
			{
				cout << "Error input \n";
				cout << "Enter data still time\n";
				continue;
			}

		}


	}


	for (int i = 0; i < 2; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "Drow 2 3-deck ship  ###\n";

			cout << "Enter first " << i << "Y coordinate\n";
			cin >> posX;
			if (posX > 0 && posX < HIGHT_BOARD)
			{
				cout << "enter the two " << i << "X coordinate\n";
				cin >> posY;
				if (posY > 0 && posY < HIGHT_BOARD)
				{
					if (BoardUser[posX][posY] != '#')
					{
						mShip->createShip(posX, posY, BoardUser);
						drawBoard(BoardUser, BoardEnemy);
					}
					else
					{
						continue;
					}
				}

			}
			else
			{
				cout << "Error input \n";
				cout << "Enter data still time\n";
				continue;
			}
		}


	}

	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << "Drow 3 2-deck ship  ##\n";
			cout << "Enter first " << i << "Y coordinate\n";

			cin >> posX;
			if (posX > 0 && posX < HIGHT_BOARD)
			{
				cout << "enter the two " << i << "X coordinate\n";
				cin >> posY;
				if (posY > 0 && posY < HIGHT_BOARD)
				{
					if (BoardUser[posX][posY] != '#')
					{
						mShip->createShip(posX, posY, BoardUser);
						drawBoard(BoardUser, BoardEnemy);
					}
					else
					{
						continue;
					}
				}

			}
			else
			{
				cout << "Error input \n";
				cout << "Enter data still time\n";
				continue;
			}
		}


	}

	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 1; i++)
		{
			cout << "Drow 4 1-deck ship  #\n";
			cout << "Enter first " << i << " Y coordinate\n";

			cin >> posX;
			if (posX > 0 && posX < HIGHT_BOARD)
			{
				cout << "enter the two " << i << "X coordinate\n";
				cin >> posY;
				if (posY > 0 && posY < HIGHT_BOARD)
				{
					if (BoardUser[posX][posY] != '#')
					{
						mShip->createShip(posX, posY, BoardUser);
						drawBoard(BoardUser, BoardEnemy);
					}
					else
					{
						continue;
					}
				}

			}
			else
			{
				cout << "Error input \n";
				cout << "Enter data still time\n";
				continue;
			}
		}


	}

}

void Board::batlesBoard(char BoardUser[10][10], char BoardEnemy[10][10])
{
	for (int  i = 0; i < QUANTITY_CELLS; i++)
	{
		for (int i = 0; i < 1; i++)
		{
			cout << "Shot first  " << i << " Y coordinate\n";
			cin >> posX;
			cout << "Shot the two " << i << " X coordinate\n";
			cin >> posY;
			if (BoardEnemyUnit[posX][posY]!='#' )
			{
				mShip->shotUser(posX, posY, BoardEnemy);
				drawBoard(BoardUser, BoardEnemy);
			}
			else
			{
				lifeEnemy--;
				mShip->shotEnemies(posX, posY, BoardEnemy);
				drawBoard(BoardUser, BoardEnemy);
			}

		}
	}



}
Board::~Board()
{
}
