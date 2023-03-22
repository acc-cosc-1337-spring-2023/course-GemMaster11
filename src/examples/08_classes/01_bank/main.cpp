#include <iostream>
#include<memory>
#include<time.h>
#include "checking_account.h"
#include "atm.h"
#include "savings_account.h"

using std::cout;
using std::unique_ptr;
using std::make_unique;
using std::cin;
using std::vector;

int main()
{
	srand(time(NULL)); //allows random number to actually randomize if not present then has a set randomized number
	vector<unique_ptr<BankAccount>> accounts;
	unique_ptr<BankAccount> savings = make_unique<SavingsAccount>();
	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>();//cust 1
	accounts.push_back(move(checking));
	accounts.push_back(move(savings));

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

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