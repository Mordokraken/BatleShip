#include "Board.h"
#include "Enemy.h"
#include "Ships.h"

#include <iostream>
#include <conio.h>
#include <string>

class Game
{
private:


	Board* mBoard;
	Enemy* mEnemy;


	std::string userName;

	void gameInit();
	void gameMenu();
	void gameStart();
	void gameRestart();
	void gameExit();



public:
	void setBoard(const Board& board);
	Board& getBoard() const;






	Game();
	~Game();
};
