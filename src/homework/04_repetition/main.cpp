//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
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
	return 0;
}
