#include <iostream>
#include <iomanip>
#include "Elevator.h"
using namespace std;

// Constructor Function
Elevator::Elevator(int CF, bool GU, bool GD)
{
	CurrentFloor = CF;
	GoingUp = GU;
	GoingDown = GD;
}

// fucntion for going up
void Elevator::goUp(int CurrentFloor, bool GoingUp)
{
	// top floor, going up
	if (CurrentFloor == 3 && GoingUp == true)
	{
		cout << "This is not a Willy Wonka elevator." << endl;

		// subtract 1 from CurrentFloor to also display next if statement output.
		CurrentFloor--;
	}

	// going up
	if (CurrentFloor < 3 && CurrentFloor >= 1 && GoingUp == true)
	{
		CurrentFloor++;
		cout << "You are on floor " << CurrentFloor << endl;
	}

	GoingUp = false; //reset GoingUp
}

// function for going down
void Elevator::goDown(int CurrentFloor, bool GoingDown)
{
	// ground floor, going down
	if (CurrentFloor == 1 && GoingDown == true)
	{
		cout << "You are on the ground floor" << endl;
	}

	// going down
	if (CurrentFloor <= 3 && CurrentFloor > 1 && GoingDown == true)
	{
		CurrentFloor--;
		cout << "You are on floor " << CurrentFloor << endl;
	}

	GoingDown = false; //reset GoingDown
}
