// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	myScreen.clear(' ');
	myScreen.set('*');
	myScreen.move(Direction::FORWARD);
	myScreen.set('*');
	myScreen.forward();
	myScreen.set('*');
	myScreen.forward();
	myScreen.set('*');
	myScreen.forward();
	myScreen.set('*');
	myScreen.forward();
	myScreen.set('*');
    myScreen.move(Direction::HOME);
    myScreen.move(Direction::DOWN);
    myScreen.set('*');
    myScreen.down();
    myScreen.set('*');
    myScreen.down();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.down();
    myScreen.set('*');
    myScreen.end();
    myScreen.set('*');
    myScreen.back();
    myScreen.set('*');
    myScreen.back();
    myScreen.set('*');
    myScreen.back();
    myScreen.set('*');
    myScreen.move(Direction::BACK);
    myScreen.set('*');
    myScreen.back();
    myScreen.set('*');
	myScreen.display();


	return 0;
}

