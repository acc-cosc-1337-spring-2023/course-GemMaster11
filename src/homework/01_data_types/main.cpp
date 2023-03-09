//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num1 = 4;

	cout<<"Enter num1: ";
    cin>>num1;

	int result = multiply_numbers(num1);
	cout<<"Multiplied by 5 = "<<result<<"\n";

	return 0;
}
