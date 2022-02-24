#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;

//write include statements
#include "../src/homework/03_decisions/decisions.h"

// define the main function
int main() 
{
	// declare the grade and the user option
	int grade, user_option;

	// display the menu header
	cout<<"************************************************\n";
	cout<<"\t\tMAIN MENU\n";
	cout<<"1- Letter grade using if \n2- Letter grade using switch \n3- Exit\n";
	cout<<"************************************************\n";

	// Prompt the user to enter the menu choice
	cout<<"Enter your choice: ";
	cin>>user_option;

	// This swith statement is to determine the proper function to run
	switch (user_option)
	{
		
		// Letter grade using if
		case 1:
			cout<<"Enter a grade number from 0 to 100: ";
			cin>>grade;

			if (grade >= 0 && grade <= 100)
				cout<<"The letter grade using if is: "<<get_letter_grade_using_if(grade);
			else
				cout<<"The number entered is out of range.";
			break;
		
		// Letter grade using switch 
		case 2:
			cout<<"Enter a grade number from 0 to 100: ";
			cin>>grade;

			if (grade >= 0 && grade <= 100)
				cout<<"The letter grade using scwitch is: "<<get_letter_grade_using_switch(grade);
			else
				cout<<"The number entered is out of range.";
			break;
		
		// Exit
		case 3:
			cout<<"The Program is terminated.";
			break;

		default:
			cout<<"Invalid option entered!";
			break;
	}

	// terminate the main function
	return 0;
} 