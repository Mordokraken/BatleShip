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

	cout << "Welcome <BatleShip> Game\n\n\n";

	//system("cls");

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
	
	mBoard = new Board();
	char gameBoard1[10][10];
	char gameEnemy[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			gameBoard1[i][j] = {' '};
		}
	}

	gameBoard1[1][1] = { '#' }; gameBoard1[1][4] = { '#' }; gameBoard1[1][7] = { '#' }; gameBoard1[2][1] = { '#' };
	gameBoard1[2][7] = { '#' }; gameBoard1[3][1] = { '#' }; gameBoard1[3][3] = { '#' }; gameBoard1[3][4] = { '#' };
	gameBoard1[4][1] = { '#' }; gameBoard1[4][8] = { '#' }; gameBoard1[5][5] = { '#' }; gameBoard1[5][6] = { '#' };
	gameBoard1[6][1] = { '#' }; gameBoard1[6][2] = { '#' }; gameBoard1[6][3] = { '#' }; gameBoard1[7][5] = { '#' };
	gameBoard1[7][7] = { '#' }; gameBoard1[8][1] = { '#' }; gameBoard1[8][2] = { '#' }; gameBoard1[8][3] = { '#' };

	mBoard->initBoard(gameEnemy);
	mBoard->drawBoard(gameBoard1, gameEnemy);
	mBoard->batlesBoard(gameBoard1, gameEnemy);


	
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
