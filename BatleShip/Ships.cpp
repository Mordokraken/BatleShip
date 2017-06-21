#include "Ships.h"

using namespace std;

Ships::Ships()
{
	userName;

	cout << "Welcome <BatleShip> Game\n";
	cout << "Enter your name\n";
	cin >> userName;
	if (cin)
	{
		system("cls");
	}
	cout << "Hi  " << userName << endl;
	cout << "You have 1 4-deck ship  ####\n";
	cout << "         2 3-deck ships ###\n";
	cout << "         3 2-deck ships ##\n";
	cout << "and      4 1-deck ships #\n";




}

void Ships::createShip()
{
	posX;
	posY;

	cout << "Enter the " << "position in the format <A 1> \n";


}
Ships::~Ships()
{
}
