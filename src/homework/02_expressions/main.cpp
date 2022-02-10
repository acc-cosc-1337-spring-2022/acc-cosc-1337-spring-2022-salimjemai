//write include statements
#include "expressions.h"
#include<iostream>

//write namespace using statement for cout
using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, 
	tip_rate, 
	tip_amount, 
	tax_amount, 
	total;

	// prompt the user to enter the meal amount
	cout<<"Enter the meal price: ";
	cin>>meal_amount;

	// store the tax amount returned by our sales tax amount function
	tax_amount = get_sales_tax_amount(meal_amount);

	// Capture the tip rate from the user
	cout<<"Enter the tip rate: ";
	cin>>tip_rate;

	// Store the tip amount returned by te get tip amount fnction
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	// caluclate the total amount of the receipt 
	total = tip_amount + meal_amount + tax_amount;

	// display the total amount to the screen
	cout<<"----------------------------------------\n";
	cout<<"           Receipt Summary\n";
	cout<<"----------------------------------------\n";
	cout<<"Meal Amount: \t\t\t$"<<meal_amount<<"\n";
	cout<<"Sales Tax: \t\t\t$"<<tax_amount<<"\n";
	cout<<"Tip Amount: \t\t\t$"<<tip_amount<<"\n";
	cout<<"Total: \t\t\t\t$"<<total<<"\n";
	cout<<"----------------------------------------";

	return 0;
}
