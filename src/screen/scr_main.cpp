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

	//Exercise 4.5
	//outputting a square
	myScreen.reSize(7,7);
	myScreen.clear(' ');
	myScreen.create_square(2,2,4);
	myScreen.display();

	//Exercise 4.5
	// This function can be implemented using the existing interface.
    // internal representation is not necessary. Only knowledge of
    // what this class does is needed which does not require the
    // internal interface.

    // A function like this does not really form part of the responsibilities
    // of the Screen object.
    // This is because this function only uses the functionality of the
    // Screen object to attain its functionality. It does not add any
    // functionality of the screen object.
    // This function is like client code.



    // Exercise 4.6
    // This class does a lot of things.
    // Separation of concerns could be used to make the class more understandable.
    // Member functions that deal with displaying the screen could be implemented
    // on a layer of their own (Presentation layer).
    // Member functions that deal with placement and or movement of some
    // characters on the screen could be put on a class of their own (Application/logic layer).
    //2D array could be used to output the screen.

    // Changing the class' interface means changing the behavior and responsibility of the
    // class. This may lead to some other issues as more of the member functions will now
    // need to change as well which can result in a lot of bugs especially for long code.

    // The implementation can be easily changed since it only uses the functionality of the
    // existing class and this is only adding some functionality of the class.


	return 0;
}

