//write include statements
#include "if_else_if.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	auto year = 0;

	cout<<"What year were you born? ";
	cin>>year;

	auto result = get_generation(year);

	cout<<"Your generation is: "<<result<<"\n";
	
	return 0;
}