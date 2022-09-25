//write include statements
#include <iostream>
#include <string>
#include "decisions.h"

using std::string; using std::cout; using std::cin;

int main() 
{
	string letter_grade;
	int choice;
	int grade;

	cout<< "Enter 1 to get your letter grade using if \n"
		<< "Enter 2 to get your letter grade using switch\n"
		<< "Enter 3 to exit: ";
	cin >> choice;

	switch (choice)
	{
		case 1: 
		cout << "Please enter your grade from 0 to 100: \n";
		cin >> grade;
		letter_grade = get_letter_grade_using_if(grade);

		if (grade > 0 && grade <= 100)
		{
			letter_grade = get_letter_grade_using_if(grade);
			cout << letter_grade << "\n";
		}
		
		else
		{
			cout<< "That is an invalid grade. Run the program \n"
				<< "again and aenter a value in the range of \n"
				<< " 0 through 100. \n";
		}
		
		break;

		case 2: 
		cout << "Please enter your grade from 0 to 100: \n";
		cin >> grade;
		letter_grade = get_letter_grade_using_switch(grade);

		if (grade > 0 && grade <= 100)
		{
			letter_grade = get_letter_grade_using_switch(grade);
			cout << letter_grade << "\n";
		}
		else
		{
			cout<< "That is an invalid grade. Run the program \n"
				<< "again and aenter a value in the range of \n"
				<< " 0 through 100. \n";
		}
		break;
	}
	return 0;
}