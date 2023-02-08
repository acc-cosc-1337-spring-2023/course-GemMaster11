//include statements
#include<iostream>
#include<iomanip>
#include"hwexpressions.h"

//namespaces
using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;

int main()
{
	double meal_amount;
	cout<<"What was the cost of the meal? ";
	cin>>meal_amount; //user input into meal_amount

	double tax_amount = get_sales_tax_amount(meal_amount);

	double tip_rate;
	cout<<"What was the tip rate? ";
	cin>>tip_rate; // user inputs tip rate

	double tip_amount = get_tip_amount(meal_amount, tip_rate);

	double total = meal_amount + tip_amount + tax_amount;

	cout<<"Meal Amount: "<<meal_amount<<fixed<<setprecision(2)<<"\n"; //using fixed and setprecision to keep within two decimals 
	cout<<"Sales Tax: "<<tax_amount<<fixed<<setprecision(2)<<"\n";	  //in order to emulate cents
	cout<<"Tip Amount: "<<tip_amount<<fixed<<setprecision(2)<<"\n";
	cout<<"Total: "<<total<<fixed<<setprecision(2)<<"\n";
	

	return 0;
}
