#pragma once
#include "Ships.h"
#include "Enemy.h"
#include "Map.h"


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

	bool mDirection;

	char boardUser[10][10];
	char boardEnemy[10][10];
	char boardEnemyUnit[10][10];

	char initBoard(char clearBoard[10][10]);
	int scoreEnemy();
	int scoreUser();

public:

	Board();

	void drawBoard(char boardUser[10][10], char boardEnemy[10][10]);
	void batlesBoard(char boardUser[10][10], char boardEnemy[10][10]);
	
	void enemyShotGun(char boardUser[10][10]);
	void userShotGun(char boardEnemy[10][10]);

	~Board();
};

