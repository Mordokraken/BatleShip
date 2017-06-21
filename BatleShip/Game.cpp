#include "game.h"


using namespace std;


Game::Game()
{

	//ships = new Ships();
	//ships->createShip();

	system("cls");//cleaning scren

    board = new Board();
    board->createBoard();
 


}


Game::~Game()
{
}
