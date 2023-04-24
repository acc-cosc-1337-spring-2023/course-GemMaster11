#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	auto num = 5;
	int &num_ref = num;

	cout<<num_ref<<"\n";
	cout<<"address of reference "<<&num_ref<<"\n";
	cout<<"address of num "<<&num<<"\n";

	//Pointers
	int *num_ptr = &num; //stores address of num
	cout<<"Address of num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Value of num: "<<num<<"\n";

	*num_ptr = 10;
	cout<<"Value of num: "<<num<<"\n";
	int *ptr_num1 = &num;
	cout<<"Address ptr1 points to: "<<ptr_num1<<"\n";

	auto num1 = 10;
	num_ptr = &num1; //reassigns pointer to another variable's address
	cout<<"Address of num1: "<<&num1<<"\n"; //pointer can change which variable it points to unlike references.
	cout<<"Address of num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value at address that num_ptr points to: "<<*num_ptr<<"\n";


	return 0;
}