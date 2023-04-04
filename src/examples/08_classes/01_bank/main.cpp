#include<time.h>
#include<vector>
#include "atm.h"
#include "customer.h"
#include "atm_data.h"

using std::vector;

int main()
{
	srand(time(NULL));

	std::vector<Customer> customers;
	customers.push_back(Customer());
    customers.push_back(Customer());
    customers.push_back(Customer());
	customers.push_back(Customer());
    customers.push_back(Customer());

	ATMData data;
	data.save_customers(customers);

	run_menu(customers);

	return 0;
}