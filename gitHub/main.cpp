#include <conio.h>
#include "Game.h"

int main()
{
	Game* game = new Game();

	delete(game);

	_getch();
	return 0;
}