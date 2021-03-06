#include "Board.h"
#include "Ships.h"
#include "Map.h"


#include <iostream>
#include <conio.h>
#include <string>

class Game
{
private:


	Board* mBoard;
	Map* mMap;


	std::string userName;

	void gameInit();
	void gameMenu();
	void gameStart();
	//void gameRestart();
	void gameExit();



public:
	void setBoard(const Board& board);
	Board& getBoard() const;

	Game();
};
