#include "Board.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;


int const HIGHT_BOARD = 10;
int const WIDTH_BOARD = 10;
Board::Board()
{

}

void Board ::createBoard()

{
	char BoardUser[HIGHT_BOARD][WIDTH_BOARD];
	char BoardEnemy[HIGHT_BOARD][WIDTH_BOARD];
	
	

	//print alphabet
	cout << ' ' << '|';
	for (char i = 'A'; i <= 'J'; i++)
	{
		cout  << i;

	}
	cout << '|' << ' ' << '|';
	for (char i = 'A'; i <= 'J'; i++)
	{
		cout << i;

	}
	cout << '|' << endl;

	for (int i = 0; i < 45; i++)
	{
		cout << "#";
	}

	cout << "\n";
	for (int i = 0; i <WIDTH_BOARD; i++)

	{
		
		for (int j = 0; j <HIGHT_BOARD; j++)
		{
			BoardUser[j][i] = '-';
			BoardEnemy[j][i] = '-';
		}
		
	}

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

	for (int i = 0; i < 45; i++)
	{
		cout << "#";
	}

	cout << "\n  Players ships  Enemies ships \n";
}

Board::~Board()
{
}
