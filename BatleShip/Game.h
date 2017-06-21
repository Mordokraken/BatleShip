#include "Board.h"
#include "Enemy.h"
#include "Score.h"
#include "Ships.h"

#include <iostream>
#include <conio.h>

class Game
{
public:
	Board* board;
	Enemy* enemy;
	Score* score;
	Ships* ship;


	Game();
	~Game();
};
