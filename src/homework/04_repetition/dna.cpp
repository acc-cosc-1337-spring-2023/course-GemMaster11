//add include statements
#include "dna.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
//add function(s) code here

int factorial(int num)
{
    int sum = 1;

   while(num > 0)
   {
    sum = sum * num;
    num--;
    //cout<<sum<<"\n"; used for reading output and debugging

   } 

   return sum;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        auto swap = 0;

        if (num1 < num2)
        {
            swap = num1;
            num1 = num2;
            num2 = swap;
        }
        else if (num1 > num2)
        {
            num1 = num1 - num2;
        }


    }
    return num1;
}

void menu()
{
    auto contCode = 'c'; // declaration for continuation
	auto exitCode = 'c'; // declaration for exit confirmation
	auto choice = 'c'; // declaration for number selection
	auto num1 = 0; // declaration for gcd and factorial function
	auto num2 = 0; // declaration for gcd function

    do
    {
		exitCode = 'c'; //in order to prevent the menu from looping after saying no and then choosing a menu option

        cout<<"1 - Factorial \n";
        cout<<"2 - Greatest Common Divisor \n";
        cout<<"3 - Exit \n";
        cin>>choice;

		if (choice == '1')
		{
			cout<<"Number for Factorial: ";
            cin>>num1;
            int result = factorial(num1);
			cout<<"--------------------------\n"; //In order to make results look cleaner to look at
			cout<<"The factorial of "<<num1<<" is: "<<result<<"\n\n";

			cout<<"Return to menu? (y/n) ";
			cin>>contCode;

			if (contCode == 'n' || contCode == 'N')
			{
				cout<<"Exiting...";
			}
			else if (contCode == 'y' || contCode == 'Y')
			{
				exitCode = 'n';
			}
		}
		else if (choice == '2')
		{
			cout<<"First number for Greatest Common Divisor: ";
            cin>>num1;
            
            cout<<"Second number for Greatest Common Divisor: ";
            cin>>num2;

            int result = gcd(num1, num2);
			cout<<"--------------------------\n";
			cout<<"The greatest common divisor of "<<num1<<" and "<<num2<<" is: "<<result<<"\n\n";

			cout<<"Return to menu? (y/n) ";
			cin>>contCode;

			if (contCode == 'n' || contCode == 'N')
			{
				cout<<"Exiting...";
			}
			else if (contCode == 'y' || contCode == 'Y')
			{
				exitCode = 'n';
			}
		}
		else if (choice == '3')
		{
			cout<<"Are you sure? (y/n) ";
			cin>>exitCode;
			if (exitCode == 'y' || exitCode == 'Y')
			{
				cout<<"Exiting...";
			}
		}

    } while (exitCode == 'n' || exitCode == 'N');
}