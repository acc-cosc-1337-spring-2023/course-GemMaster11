#include "decisions.h"
#include <iostream>

using std::cout;
using std::cin;
using std::string;

//write include statements

int main() 
{
	auto option = 0;
	auto numGrade = 0;
	string result;

	cout<<"    MAIN MENU""\n";
	cout<<"1 - Letter grade using if""\n";
	cout<<"2 - Letter grade using switch""\n";
	cout<<"3 - Exit""\n";
	cin>>option;


	switch (option)
	{
	case 1:
		cout<<"What is your number grade from the last test? ";
		cin>>numGrade;

		result = get_letter_grade_using_if(numGrade);
		cout<<result<<"\n";
		break;
	case 2:
		cout<<"What is your number grade from the last test? ";
		cin>>numGrade;

		result = get_letter_grade_using_switch(numGrade);
		cout<<result<<"\n";
		break;
	
	default:
		cout<<"Exiting...";
		break;
	}

	return 0;
}