#include "game.h"


using namespace std;


Game::Game()
{
	char ansver;
	gameMenu();

	cout << "Contiue y/n \n";
	cin >> ansver;
	if (ansver== 'y' || ansver == 'Y' )
	{
		gameStart();
	}
	else
	{
		gameExit();
	}
	

	

}

void Game::gameInit()
{

}
void Game::gameMenu()
{
	userName;

	cout << "Welcome <BatleShip> Game\n";
	cout << "Enter your name\n";
	cin >> userName;

	cout << "Hi  " << userName << endl;
	cout << "You have 1 4-deck ship  ####\n";
	cout << "         2 3-deck ships ###\n";
	cout << "         3 2-deck ships ##\n";
	cout << "and      4 1-deck ships #\n";

	cout << "\nEnter the " << "position in the format < 1 1> , X Y > 0 && X Y < 10\n";
	cout << "End press <Enter>\n";

}

void Game::gameStart()
{
	
	system("cls");

	mBoard = new Board();
	
}

void Game::gameRestart()
{


}

void Game::gameExit()
{
	cout << "Thanks for the game\n";
	
}


Game::~Game()
{
}
