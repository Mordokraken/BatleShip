#include "Board.h"
#include "Timer.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;


int const HIGHT_BOARD = 10;
int const WIDTH_BOARD = 10;
int const QUANTITY_CELLS = 100;

int  LIFE_USER= 20;
int  LIFE_ENEMY = 20;

int posXEnemy = rand() % 10;
int posYEnemy = rand() % 10;

char clearBoard[10][10];


Board::Board()
{
	srand(static_cast<unsigned int>(time(0)));
	mDirection = true;
	
	

	initBoard(clearBoard);

}

int Board::scoreEnemy()
{
	--LIFE_ENEMY;

	return LIFE_ENEMY;

}

int Board::scoreUser()
{
	--LIFE_USER;

	return LIFE_USER;

}


char Board::initBoard(char clearBoard[10][10])
{

	//init game board
	for (int i = 0; i <WIDTH_BOARD; i++)

	{

		for (int j = 0; j <HIGHT_BOARD; j++)
		{
			clearBoard[j][i] = ' ';

		}

	}

	return  clearBoard[10][10];
}


void Board::drawBoard(char boardUser[10][10], char boardEnemy[10][10])

{
	
	system("cls");
	
	

	cout << ' ' << '|';
	for (int i = 0; i <= 9; i++)
	{
		cout << i;

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
			cout << boardUser[i][j];

		}
		cout << '|' << i << '|';
		for (int j = 0; j < HIGHT_BOARD; j++)
		{
			cout << boardEnemy[i][j];
		}

		cout << '|' << i << '|';

		cout << "\n";
	}

	for (int i = 0; i < 28; i++)
	{
		cout << "#";
	}
	
	//cout << "is not timer;---";
	
	cout << "\n  Players ships  Enemies ships \n";
	cout << "    " << LIFE_USER << "              " << LIFE_ENEMY << endl;
	cout << "\n\n\n" ;
	



}
void Board::enemyShotGun(char boardUser[10][10])

{
	do
	{
		
		if (mDirection == false)

		{
			

			if (boardUser[posXEnemy][posYEnemy] != '#' && boardUser[posXEnemy][posYEnemy] != 'x'&& boardUser[posXEnemy][posYEnemy] != 'O')
			{
				mShip->shotUser(posXEnemy, posYEnemy, boardUser);
				drawBoard(boardUser, clearBoard);
				mDirection = true;

				cout << "miss :(" << endl;
				cout << "x = " << posXEnemy << "y = " << posYEnemy << endl;
				Sleep(2000);

			}
			else
			{
				
				scoreUser();
				mShip->shotEnemies(posXEnemy, posYEnemy, boardUser);
				drawBoard(boardUser, clearBoard);
				mDirection = false;
				posXEnemy = (posXEnemy++)%10;
				Sleep(2000);
				cout << "Nice shot!!!!!" << endl;
				cout << "x = " << posXEnemy << "y = " << posYEnemy << endl;
				Sleep(2000);
			}
		}
	
		posXEnemy++;
		posYEnemy++;
		if (posXEnemy == 9 || posYEnemy == 9)
		{
			--posXEnemy;
		}
		



	} while (mDirection!=true);



}
void Board::userShotGun(char boardUser[10][10], char boardEnemy[10][10])
{
	do
	{
		if (mDirection)
		{

			cout << "Shot first  " << " Y coordinate\n";
			cin >> posX;
			cout << "Shot the two " << " X coordinate\n";
			cin >> posY;
			if (boardEnemy[posX][posY] != '#')
			{
				mShip->shotUser(posX, posY, clearBoard);
				drawBoard(boardUser, clearBoard);
				mDirection = false;

			}
			else
			{
				scoreEnemy();
				mShip->shotEnemies(posX, posY, clearBoard);
				drawBoard(boardUser, clearBoard);
				mDirection = true;

			}


		}
	} while (mDirection);


}


