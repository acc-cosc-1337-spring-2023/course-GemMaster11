#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax_amount(double meal_amount)
{
	auto result = tax_rate * meal_amount;
	return result;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	auto result = tip_rate * meal_amount;
	return result;
}



