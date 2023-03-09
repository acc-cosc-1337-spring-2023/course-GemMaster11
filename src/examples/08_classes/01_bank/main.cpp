#include <iostream>
#include<time.h>
#include "checking_account.h"
#include "atm.h"
#include "savings_account.h"

using std::cout;
using std::cin;
using std::vector;

int main()
{
	srand(time(NULL)); //allows random number to actually randomize if not present then has a set randomized number
	vector<BankAccount*> accounts;
	SavingsAccount savings;
	CheckingAccount account;//cust 1

	run_menu(accounts);
	

	auto choice = 's';
/*
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
*/

/*
	BankAccount *bank_account; //Doesn't point to a variable, only declares it

	show_balance(savings);
	cout<<savings.get_balance()<<"\n";

	bank_account = &savings;
	cout<<bank_account->get_balance()<<"\n"; //must use arrow -> operator*/
	return 0;
}