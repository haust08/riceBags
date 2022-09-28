// Hailee Austin
// Date: 9/12/22
// Program Title: Ricebag Calculator
// Program Description: This program outputs the number of bags needed to store one metric ton of rice.

#include <iostream>
#include <string>


using namespace std;

// Named constants
const double METRIC_RICE = 2205;

int main()
{

	// Variable declaration
	double pounds;
	double bags;

	//Program title and description for the user
	cout << "Ricebag Calculator:" << endl;
	cout << "This program calculates the number of bags needed" << endl;
	cout << "to store one metric ton of rice." << endl;
	cout << endl;

	// User input
	cout << "Enter the amount of rice (in pounds) 1 rice bag can hold:" << endl;
	cin >> pounds;
	cout << endl;

	// Calculations
	bags = METRIC_RICE / pounds;

	// Output to the screen
	system("cls");

	cout << "The number of " << pounds << " " << "lb bags needed to store" << endl;
	cout << "one metric ton of rice is:" << endl;
	cout << bags << endl;
	cout << endl;

	cout << "If your total number of bags includes a decimal, an additional bag will be needed." << endl;
	cout << "(round the total up by one.)" << endl;
	cout << endl;

	return 0;
}

