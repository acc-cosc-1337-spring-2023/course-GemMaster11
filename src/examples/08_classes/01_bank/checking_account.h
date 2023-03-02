//checking_account.h
#include<stdlib.h>
#include<iostream>
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount
{
friend void show_balance(CheckingAccount account); // friend functions can access private even if its a free function
friend std::ostream& operator<<(std::ostream& out, const CheckingAccount &account);


public: //anyone outside of class can use

    CheckingAccount(){get_balance_from_db();} //This is the default constructor C++ makes for you
    CheckingAccount(int b) : balance(b){/*empty code block*/} //this is a constructor
    int get_balance() const{return balance;} //makes balance unable to be modified when returned but can be modified any time before
    void deposit(int amount);
    void withdraw(int amount);

private: //cannot be accessed outside of class
    int balance{0}; //initializes it as 0
    void get_balance_from_db();


};

#endif
