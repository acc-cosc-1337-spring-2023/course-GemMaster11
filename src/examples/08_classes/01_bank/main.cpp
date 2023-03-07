#include <iostream>
#include<time.h>
#include "checking_account.h"
#include "atm.h"
#include "savings_account.h"

using std::cout;
using std::cin;

int main()
{
	


	srand(time(NULL)); //allows random number to actually randomize if not present then has a set randomized number
	SavingsAccount savings;

	CheckingAccount account;//cust 1
	auto choice = 's';

	cout<<"Use checking or savings?";
	cin>>choice;

	if(choice == 'c')
	{
		cout<<account.get_balance()<<"\n";
		cout<<account;
		show_balance(account); // uses the friend free function
		run_menu(account);
	}
	else
	{
		cout<<savings.get_balance()<<"\n";
		cout<<savings;
		show_balance(savings); // uses the friend free function
		run_menu(savings);
	}

	run_menu(account);	

	cout<<account.get_balance()<<"\n";

	return 0;
}