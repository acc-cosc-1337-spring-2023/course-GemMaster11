#include<iostream>
#include<memory>

using std::unique_ptr;
using std::make_unique;
using std::cout;
using std::shared_ptr;
using std::make_shared;

int main() 
{
	int num = 5;
	int* num_ptr = &num; //points to the address of num

	//string vector -- ptr variable new
	//legacy pointer
	//very prone to bugs
	int* num_dyn = new int(10); //creates the value 10 on the heap
	cout<<"legacy pointer: "<<*num_dyn<<"\n";
	//use the num_dyn variable
	delete num_dyn;//removes the data from the heap
	cout<<"legacy pointer: "<<*num_dyn<<"\n";

	//SMART POINTERS
	unique_ptr<int> num_up = make_unique<int>(100);
	cout<<"Unique pointer: "<<*num_up<<"\n";
	//do not have to call the delete keyword to remove data from the heap

	//SHARED POINTERS
	shared_ptr<int> num_sp = make_shared<int>(200);
	cout<<"Shared pointer 1: "<<*num_sp<<"\n";
	shared_ptr<int> num_sp2 = num_sp;
	cout<<"Shared pointer 2: "<<*num_sp2<<"\n";
	shared_ptr<int> num_sp3 = num_sp;
	cout<<"Shared pointer 3: "<<*num_sp3<<"\n";

	//WEAK POINTER (NO REFERENCE COUNT IS KEPT)(SHARED POINTER KIND OF)
	std::weak_ptr<int> gw;
	auto sp = std::make_shared<int>(42);
	gw = sp;
	cout<<*gw.lock()<<"\n"; //a lock on the data.
	cout<<"Weak pointer: "<<gw.use_count()<<"\n";


	return 0;
}