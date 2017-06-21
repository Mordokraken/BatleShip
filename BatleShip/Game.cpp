#include "game.h"


using namespace std;


Game::Game()
{



	board = new Board();
	board->createBoard();

	ship = new Ships();
	ship->createShip();
 
	//system("cls");//cleaning scren



}


Game::~Game()
{
}
