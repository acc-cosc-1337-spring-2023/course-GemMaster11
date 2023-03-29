//atm.cpp
#include"atm.h"

using std::cin; 
using std::cout;
using std::vector;

vector<Customer> customers{Customer(), Customer(), Customer(), Customer(), Customer()};


void display_menu()
{
    cout<<"ACC COSC Bank \n\n";
    cout<<"1 - Deposit \n";
    cout<<"2 - Withdraw \n";
    cout<<"3 - Display Balance \n";
    cout<<"4 - Exit \n";
}

void run_menu(std::vector<std::unique_ptr<BankAccount>> &accounts)
{
    auto option = 0;
    auto choice = 0;

    auto customer = customers[0];

    cout<<"Checking(1) or savings(2)? ";
    cin>>choice;

    std::unique_ptr<BankAccount> &account = customer.get_account(choice - 1);

    do
    {
        display_menu();
        cout<<"Enter menu option: \n";
        cin>>option;
        handle_menu_option(option, account);
    } 
    while (option != 4);
    

}

void handle_menu_option(int option, BankAccount* account)
{
    auto amount = 0;

    switch (option)
    {
    case 1:
        cout<<"Enter deposity amount: \n";
        cin>>amount;
        account->deposit(amount);

        break;
    case 2:
        cout<<"Enter withdraw amount: \n";
        cin>>amount;
        account->withdraw(amount);
        
        break;
    case 3:
        cout<<"Balance: ";
        cout<<account->get_balance()<<"\n";
        break;
    case 4:
        cout<<"Exiting...";
        break;
    
    default:
        cout<<"Invalid Option... ";
        break;
    }
}