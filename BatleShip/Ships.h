#pragma once

#include<iostream>
#include<conio.h>
#include <string>


class Ships
{
public:
	std::string userName;
	char posX;
	int posY;

	void createShip();
	Ships();
	~Ships();
};

