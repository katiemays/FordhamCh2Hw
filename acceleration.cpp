// Katie Mays
// Sept. 14, 2017
// physics inputs with double variables

#include <iostream>
using namespace std;

int main()
{
	// variables
	double velocity0, velocity1, time, acceleration;
	
	// input
	cout << "Enter the initial  velocity, v0: ";
	cin  >> velocity0;

	cout << "   Enter the final velocity, v1: ";
	cin  >> velocity1;

	cout << "      Enter the time elapsed, t: ";
	cin  >> time;

	// processing
	acceleration = (velocity1 - velocity0)/time;

	// output
	cout << "The average acceleration is " << acceleration << " m/s/s." << endl;
 
	return 0;
}
