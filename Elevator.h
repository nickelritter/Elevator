class Elevator
{
private:
	// variable declarations
	int CurrentFloor;
	bool GoingUp;
	bool GoingDown;

public:
	// Function prototypes
	Elevator(int CF, bool GU, bool GD);

	void goUp(int CurrentFloor, bool GoingUp);
	void goDown(int CurrentFloor, bool GoingDown);
};

