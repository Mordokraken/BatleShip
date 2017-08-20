#include "Board.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;


int const HIGHT_BOARD = 10;
int const WIDTH_BOARD = 10;
int const QUANTITY_CELLS = 100;

int  LIFE_USER= 20;
int  LIFE_ENEMY = 20;

char clearBoard[10][10];

Board::Board()
{

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



void Board::batlesBoard(char boardUser[10][10], char boardEnemy[10][10])
{



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

	cout << "\n  Players ships  Enemies ships \n";
	cout << "    " << LIFE_USER << "              " << LIFE_ENEMY << endl;
	cout << "\n\n\n";



}
void Board::enemyShotGun(char boardUser[10][10])//метод ,- ход искуственного интелекта
{
	do
	{
		int posXEnemy = 0;
		int posYEnemy = 0;
		if (mDirection)
		{
			cout << "\n WORLLDD!!!! IS MY!!!!!!!!!!!!!!!!\n" << endl;
			cout << "mDirection == true" << endl;

		}
		else
		{
			cout << "mDirection == false" << endl;
		}
		
		if (mDirection == false)//м≥н€Їмо мƒфрект

		{
			

			if (boardUser[posXEnemy][posYEnemy] != '#')
			{
				mShip->shotUser(posXEnemy, posYEnemy, boardUser);
				drawBoard(boardUser, clearBoard);
				mDirection = true;
				posXEnemy++;
				posYEnemy++;
				cout << "miss^((((" << endl;
				cout << "x = " << posXEnemy << "y = " << posYEnemy << endl;

			}
			else
			{
				scoreUser();
				mShip->shotEnemies(posXEnemy, posYEnemy, boardUser);
				drawBoard(boardUser, clearBoard);
				mDirection = false;
				posXEnemy++;
				cout << "Nice shot!!!!!" << endl;
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
void Board::userShotGun(char boardEnemy[10][10])
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
				drawBoard(boardEnemy, clearBoard);
				mDirection = false;

			}
			else
			{
				scoreEnemy();
				mShip->shotEnemies(posX, posY, clearBoard);
				drawBoard(boardEnemy, clearBoard);
				mDirection = true;

			}


		}
	} while (mDirection);


}



Board::~Board()
{
}
