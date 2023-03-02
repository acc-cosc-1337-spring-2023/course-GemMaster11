#include <iostream>
#include<time.h>
#include "checking_account.h"
#include "atm.h"

using std::cout;

int main()
{
	


	srand(time(NULL)); //allows random number to actually randomize if not present then has a set randomized number

	CheckingAccount account;//cust 1
	cout<<account.get_balance()<<"\n";
	cout<<account;
	show_balance(account); // uses the friend free function

	//run_menu(account);	

	cout<<account.get_balance()<<"\n";
	return 0;
}