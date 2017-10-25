// Katie Mays
// September 28, 2017
// Lab #3: bookstore reciept using "string" data type

#include <iostream>
using namespace std;

int main ()
{
	// variables
	string name;
	int ncervantes, nhomer, nshakespeare;
	double pc, ph, ps, order, tax, money, total;

	pc  = 41.25;
	ph  = 15.85;
	ps  = 30.50;
	tax =  0.10;
	
	// init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);	

	// input
	cout << "\t" << endl;
	cout << "WELCOME TO THE BRONX BOOKSTORE!" << endl;
	cout << "\t" << endl;
	cout << "Please enter your first name:   ";
	cin  >> name;
	
	cout << "Number of books by Cervantes:   ";
	cin  >> ncervantes;

	cout << "Number of books by Homer:       ";
	cin  >> nhomer;

	cout << "Number of books by Shakespeare: ";
	cin  >> nshakespeare;
	
	// processing and output
	order = ncervantes*pc + nhomer*ph + nshakespeare*ps;
	total = order*tax + order;

	cout << "\t" << endl;
	cout << "Total cost for your order is:   $" << total << endl;
	
	cout << "Change from:                    $";
	cin  >> money;

	cout << "----------"						      << endl;	
	cout << "Customer: " << name << endl;
	cout << "----------"						      << endl;	
	cout << "Item\t\tNumber\t\tPrice"				      << endl; 
	cout << "Cervantes\t"   << ncervantes   << "\t\t$" << ncervantes*pc   << endl;
	cout << "Homer\t\t"     << nhomer       << "\t\t$" << nhomer*ph       << endl;
	cout << "Shakespeare\t" << nshakespeare << "\t\t$" << nshakespeare*ps << endl;
	cout << "----------"						      << endl;	
	cout << "Tax\t\t\t\t$" << tax*order << endl;
	cout << "----------"						      << endl;	
	cout << "Total\t\t\t\t$"  << total << endl;
	cout << "User pay\t\t\t$" << money << endl;
	cout << "----------"						      << endl;
	cout << "Change\t\t\t\t$" << money-total << endl;
	

	return 0;
}
