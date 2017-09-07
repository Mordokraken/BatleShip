#pragma once
#include <iostream>
#include "Board.h"


using namespace std;

class Map 
{
private:

	//Board* mBoard;

	char playerMap[5][10][10];
	char enemyMap[10][10];
	char clearMap[10][10];
	char bufferMap[10][10];

	int randNumb;
	int mapGeneration;

	char  mapCreate(char bufMap[10][10], char playMap[5][10][10], int rNumb);
	int randNumber(int randNumb);
	void mapInit();
public:

	Map();
	
};

