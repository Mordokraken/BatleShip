#include "Ships.h"

using namespace std;

Ships::Ships()
{



}

void Ships::createShip(int posX, int posY, char enemiesBoard[10][10])
{
	enemiesBoard[posX][posY] = '#';

}

void Ships::shotUser(int posX, int posY,char enemiesBoard[10][10])
{
	enemiesBoard[posX][posY] = 'x';

   
}
void Ships::shotEnemies(int posX, int posY, char enemiesBoard[10][10])
{
	enemiesBoard[posX][posY] = 'O';

}
Ships::~Ships()
{
}
