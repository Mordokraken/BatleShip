#pragma once

#include<iostream>
#include<conio.h>



class Ships
{

public:


	void createShip(int posX, int posY, char enemiesBoard[10][10]);
	void shotUser(int posX, int posY, char enemiesBoard[10][10 ]);
	void shotEnemies(int posX, int posY, char enemiesBoard[10][10]);

	Ships();
	~Ships();
};

