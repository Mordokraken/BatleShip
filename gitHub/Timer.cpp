#include "Timer.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;


Timer::Timer()
{
	second = 0;
	minutes = 0;
	hour = 0;
	mDirect = true;
	entering = ' ';
	
	while (mDirect)
	{
		
		if (mDirect )
		{
			
			Sleep(1000);
			second++;
			system("cls");
			cout << "Second: " << second;
			
		}
		
	}
	
	
}


Timer::~Timer()
{
}
