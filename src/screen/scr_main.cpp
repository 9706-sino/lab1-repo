// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	myScreen.clear('#');
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
    myScreen.home();
    myScreen.down();
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
    myScreen.back();
    myScreen.set('*');
    myScreen.back();
    myScreen.set('*');
	myScreen.display();


	return 0;
}

