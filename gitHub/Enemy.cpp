#include "Enemy.h"


Enemy::Enemy()
{

}
void Enemy::batleScene()
{


}
int Enemy::random()
{
	int randScene = 0;
	randScene = rand() % 3;
	return randScene;
}
void Enemy::enemyShot(char boardUser[10][10])
{
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; i < 10; i++)
		{
			shotUser(i, j, boardUser);
			if (boardUser[i][j]!=' ' )
			{
				shotEnemies(i, j, boardUser);
				shotUser(i,j+1, boardUser);
			}

		}

	}
	for (int i = 10; i < 0; i--)
	{
		for (int j = 10; i < 0; i--)
		{
			shotUser(i, j, boardUser);
			if (boardUser[i][j] != ' ')
			{
				shotEnemies(i, j, boardUser);
				shotUser(i, j + 1, boardUser);
			}

		}

	}

	for (int i = random(); i < 10; i++)
	{
		for (int j = 0; i < 10; i++)
		{
			shotUser(i, j, boardUser);
			if (boardUser[i][j] != ' ')
			{
				shotEnemies(i, j, boardUser);
				shotUser(i, j + 1, boardUser);
			}

		}

	}
}
Enemy::~Enemy()
{
}
