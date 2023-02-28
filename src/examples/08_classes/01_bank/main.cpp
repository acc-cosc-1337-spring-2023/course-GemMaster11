#include <iostream>
#include "checking_account.h"

using std::cout;

int main()
{
	srand(time(NULL)); //allows random number to actually randomize if not present then has a set randomized number

	CheckingAccount account;//customer 1
	cout<<"Balance: "<<account.get_balance()<<"\n";

	CheckingAccount account1(100);//customer 2
	cout<<"Balance: "<<account1.get_balance()<<"\n";

	return 0;
}