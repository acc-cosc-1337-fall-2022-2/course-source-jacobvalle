#include "func.h"
#include<string>
#include <iostream>

using namespace std; using std::string; using std::cout;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	string user_exit = " ";
	do{
		string user_DNA_string;
		int user_choice;

		double GGC_choice;
		string GRC_choice;
		string GDC_choice;

		cout << "Enter the DNA string: ";
		cin >> user_DNA_string;

		cout << "Menu\n";
		cout << "1. Get GC Contect\n";
		cout << "2. Get DNA Complement\n";
		cout << "3. Exit\n";
		cin >> user_choice;

	
		switch(user_choice)
		{
	
		case 1:
				GGC_choice = get_gc_content(user_DNA_string);
				cout << "DNA GC is: " << GGC_choice;
				break;

		case 2:
				GRC_choice = get_dna_complement(user_DNA_string);
				cout << "DNA complement is: " << GRC_choice;
				break;

		case 3:
				cout << "Are you sure you want to exit? 'y' for yes or 'n' for no:";
				cin >> user_exit;
				break;

		default:
				cout << "Please choose a correct option.";
				break;
		}
	}
	while (user_exit != "y");
		
	return 0;

}