//write include statements
#include "dna.h"
#include <iostream>

//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int num1;
	int num2;
	int userNum;
	do
	{
		cout << "1. Factorial" << "\n" 
		<< "2. Greatest Common Divisor" << "\n"
		<< "3. Exit" << "\n"
		<< "Please select option 1, 2, or 3: ";
		cin >> userNum;

		switch(userNum)
		{
			case 1:
					cout << "Please enter a number that you want to find the factorial for: ";
					cin >> num1;

					cout << "The factorial of " << num1 << " = " << factorial(num1) << "\n";
					break;
			
			case 2:
					cout << "Please enter the first number that you want to find the greatest common divisor for: ";
					cin >> num1;

					cout << "Please enter the second number that you want to find the greatest common divisor for: ";
					cin >> num2;

					cout << "The greatest common divisor of " << num1 << " and " << num2 << " = " << gcd(num1,num2) <<"\n";
					break;
			
			case 3:
					cout << "Are you sure you want to exit? Press 3 again to confirm or press 1 to try again: ";
					cin >> num1;
					if (num1 == 1)
					{
						userNum = 0;
					}
		}

	}
	while(userNum !=3);
	
return 0;
}