#pragma once
#include "Ships.h"
#include "Enemy.h"


class Board
{
private:
	Ships* mShip;
	Enemy* mEnemy;

	int const HIGHT_BOARD = 10;
	int const WIDTH_BOARD = 10;
	int const QUANTITY_CELLS = 100;

	int posX;
	int posY;
	int lifeEnemy;
	int lifeUser;

	char BoardUser[10][10];
	char BoardEnemy[10][10];
	char BoardEnemyUnit[10][10];

	void initBoard();
	void fillingBoard();

public:
	Board();
	void drawBoard();
	void batlesBoard();


	~Board();
};

