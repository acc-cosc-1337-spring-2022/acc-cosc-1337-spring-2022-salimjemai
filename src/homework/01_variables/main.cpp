//write include statements
#include "variables.h"
#include<iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	int num;
	cout<<"Enter an integer: "<<"\n";
	cin>>num;

	int result;
	result = multiply_numbers(num);
	cout<<"The result returned value from multiply_numbers function with \"num = "<<num<<"\" is: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"The result variable value from multiply_numbers function with \"num1 = 4\" is: "<<result<<"\n";

	return 0;
}
