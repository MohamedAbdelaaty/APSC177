#include <iostream>				// Console input/output
#include <cmath>				// use of math functions like sine/cosine/tan etc
#include <iomanip>				// Input/output manipulator

using namespace std;			// use standard namespace by default

const double PI = acos(-1.0);	// constant variable to store PI

// program entry point
int main() {
	// step one: declare needed variables
	double angleInDegreesOne;		// variable to store the first user input for the first angle in degrees
	double angleInDegreesTwo;		// variable to store the second user input for the second angle in degrees
	double angleInRadOne;			// variable to store the conversion for the first angle in radians
	double angleInRadTwo;			// variable to store the conversion for the second angle in radians
	double sineOne;					// sine for the first angle in radians defined later
	double sineTwo;					// sine for the second angle in radians defined later
	double cosineOne;				// cosine for the first angle in radians defined later
	double cosineTwo;				// cosine for the second angle in radians defined later
	double sinhOne;					// sinh for the first angle in radians defined later
	double sinhTwo;					// sinh for the second angle in radians defined later
	double coshOne;					// cosh for the first angle in radians defined later
	double coshTwo;					// cosh for the second angle in radians defined later

	// step two: take user input
	cout << "Enter an angle between -360 and 360 degrees: ";
	cin >> angleInDegreesOne;
	cout << "Enter an angle between -360 and 360 degrees: ";
	cin >> angleInDegreesTwo;

	// step three: convert angles from degrees to radians
	angleInRadOne = (angleInDegreesOne * PI) / 180;
	angleInRadTwo = (angleInDegreesTwo * PI) / 180;

	// step four: calculate sine, cosine, sinh, cosh
	sineOne = sin(angleInRadOne);
	sineTwo = sin(angleInRadTwo);
	cosineOne = cos(angleInRadOne);
	cosineTwo = cos(angleInRadTwo);
	sinhOne = sinh(angleInRadOne);
	sinhTwo = sinh(angleInRadTwo);
	coshOne = cosh(angleInRadOne);
	coshTwo = cosh(angleInRadTwo);

	// step five: output to screen
	// first line
	cout << left;
	cout << setw(15);
	cout << "Angle (degrees)";
	cout << right;
	cout << setw(9) << "cos";
	cout << setw(9) << "sin";
	cout << setw(9) << "cosh";
	cout << setw(9) << "sinh";
	cout << endl;

	// second line
	cout << fixed;
	cout << left;
	cout << setprecision(1);
	cout << setw(15) << angleInDegreesOne;
	cout << right;
	cout << setprecision(2);
	cout << setw(9) << cosineOne;
	cout << setw(9) << sineOne;
	cout << setw(9) << coshOne;
	cout << setw(9) << sinhOne;
	cout << endl;

	// third line
	cout << left;
	cout << setprecision(1);
	cout << setw(15) << angleInDegreesTwo;
	cout << setprecision(2);
	cout << right;
	cout << setw(9) << cosineTwo;
	cout << setw(9) << sineTwo;
	cout << setw(9) << coshTwo;
	cout << setw(9) << sinhTwo;
	cout << endl;
	return 0;
}