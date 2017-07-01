#pragma once
#include <iostream>
using namespace std;

class Map
{
private:

	char playerMap[5][10][10];
	char enemyMap[5][10][10];

	int randNumb;
	int mapGeneration;
	
	int randNumber();
public:

	Map();
	
};

