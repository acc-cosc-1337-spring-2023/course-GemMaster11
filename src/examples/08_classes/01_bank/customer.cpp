//customer.cpp
#include "customer.h"

using std::make_unique;
using std::unique_ptr;

Customer::Customer()
{
    accounts.push_back(make_unique<CheckingAccount>());
    accounts.push_back(make_unique<SavingsAccount>());
}