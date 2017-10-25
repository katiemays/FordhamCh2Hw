// Katie Mays
// October 5, 2017
// HW #04: grade calculation

#include <iostream>
using namespace std;
int main ()
{
	// variables
	double n, o = 1, earned, possible;
	double tEarned = 0, tPossible = 0;
	double grade;	
	
	// input
	cout << "How many exercises to input? ";
	cin  >> n;

	while (n > 0)
	{
		cout << "Score recieved on exercise " << o << ": ";
		cin  >> earned;
		tEarned = tEarned + earned;

		cout << "Total points possible for exercise " << o << ": ";
		cin  >> possible;	
		tPossible = tPossible + possible;

		cout << "\t" << endl;

		n--;
		o++;
	}
	// processing
	grade = tEarned / tPossible;

	// output
	cout << "Your total is " << tEarned << " out of " << tPossible << ", or " << grade * 100 << "%." << endl;
 
	return 0;
}
