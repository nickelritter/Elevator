/* File: W10E2.cpp
*  Programmer: Steven Heid
*  Date: 7December2019
*  Course: COP 2931
*
*  Purpose:
*	2.	Define a class for an elevator that only services three floors.
*   Your class must store variables for CurrentFloor (int), GoingUp (bool), and GoingDown (bool).
*   Write a default constructor function for the class and two member functions: goUp() and goDown().
*   Write an elevator test program.
*   Have the program execute the following steps using the methods in the class:
*
*	-Start on the first floor.
*	-Go to the second floor (don’t forget to update the Boolean variable GoingUp).
*	-Go to the third floor
*	-Go to the fourth floor (or at least try to)
*	-Go back to the second floor
*	-Go back to the first floor
*/

#include <iostream>
#include <iomanip>
#include "Elevator.h"
using namespace std;


int main()
{
	int currentFloor = 1;
	int input = 0;
	Elevator Elevator(currentFloor, false, false);

	cout << "Welcome to the C++ elevator. I service 3 floors.\nYou are currently on the ground floor." << endl;

	while (input == 0 || 1) // repeats for each floor
	{
		cout << "Controls are:\nGo Up[1] \nGo Down[0] \nLeave[42]" << endl; // elevator controls
		cin >> input;

		//going up
		if (input == 1)
		{
			// top floor, does not increase current floor level
			if (currentFloor == 3)
			{
				Elevator.goUp(currentFloor, true);
			}

			// otherwise, increases floor level
			else {
				Elevator.goUp(currentFloor, true);
				currentFloor++;
			}

		}

		//going down
		if (input == 0)
		{
			//ground floor, does not decrease floor level
			if (currentFloor == 1)
			{
				Elevator.goDown(currentFloor, true);
			}

			// otherwise, decreases floor level
			else {
				Elevator.goDown(currentFloor, true);
				currentFloor--;
			}

		}

		// exit statement
		if (input == 42)
		{
			cout << "Thanks for riding. Bye." << endl;
			break;
		}
	}

	system("pause");
}
