//bank_account.h
//Bank_account.h
#include<stdlib.h>
#include<iostream>
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
friend void show_balance(BankAccount account); // friend functions can access private even if its a free function
friend std::ostream& operator<<(std::ostream& out, const BankAccount &account);


public: //anyone outside of class can use

    BankAccount() : BankAccount(1000) {get_balance_from_db();} //This is the default constructor C++ makes for you
    BankAccount(int b) : balance(b){/*empty code block*/} //this is a constructor
    virtual int get_balance() const{return balance;} //makes balance unable to be modified when returned but can be modified any time before
    void deposit(int amount);
    void withdraw(int amount);

private: //cannot be accessed outside of class
    int balance{0}; //initializes it as 0
    void get_balance_from_db();


};

#endif
