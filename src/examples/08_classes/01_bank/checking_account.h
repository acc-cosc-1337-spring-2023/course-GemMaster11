//checking_account.h
#include<stdlib.h>


class CheckingAccount
{
public: //anyone outside of class can use

    CheckingAccount(){get_balance_from_db();} //This is the default constructor C++ makes for you
    CheckingAccount(int b) : balance(b){/*empty code block*/} //this is a constructor
    int get_balance(){return balance;}

private: //cannot be accessed outside of class
    int balance{0}; //initializes it as 0
    void get_balance_from_db();


};

