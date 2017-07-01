#pragma once
#include "Ships.h"
#include <iostream>


class Enemy : public Ships
{
private:
	void batleScene();
	int random();
	
public:
	void enemyShot(char boardUser[10][10]);

	Enemy();
	~Enemy();
};

