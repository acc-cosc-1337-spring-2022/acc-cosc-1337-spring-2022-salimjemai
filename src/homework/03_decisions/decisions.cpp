
//write include statement for decisions header
#include "../src/homework/03_decisions/decisions.h"
#include<iostream>

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	return credit_points / credit_hours;
}

// define the get_letter_grade_using_if function
std::string get_letter_grade_using_if (int grade)
{
	// declare the letter_grade variable
	std::string letter_grade;

	// This if block is determine the grade according to the grade number supplied by the user
	if(grade >= 90 && grade <= 100)
		letter_grade = "A";
	else if (grade >= 80 && grade <= 89)
		letter_grade = "B";
	else if (grade >= 70 && grade <= 79)
		letter_grade = "C";
	else if (grade >= 60 && grade <= 69)
		letter_grade = "D";
	else if (grade >= 0 && grade <= 59)
		letter_grade = "F";
	else
		letter_grade = "The grade number entered is out of range.";

	return letter_grade;
}

// Define the get_letter_grade_using_switch function
std::string get_letter_grade_using_switch (int grade)
{
	std::string letter_grade;

	switch (grade)
	{
		case 90 ... 100:
			letter_grade = "A";
			break;
		case 80 ... 89:
			letter_grade = "B";
			break;
		case 70 ... 79:
			letter_grade = "C";
			break;
		case 60 ... 69:
			letter_grade = "D";
			break;
		case 0 ... 59:
			letter_grade = "F";
			break;
		default:
			letter_grade = "The grade number entered is out of range.\n";
			break;
	}

	return letter_grade;
}