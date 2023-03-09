#include<iostream>
using std::cout;

int main()
{
    auto num = 10;
    int &num_ref = num; //num_ref is a reference variable; holds the stack address of num

    cout<<"Num is: "<<num<<"\n"; //reveals variable value
    cout<<"Stack address of num: "<<&num<<"\n\n"; //reveals where num is stored on the stack, the & shows the location of the variable in the stack & is a memory operator

    cout<<"Num via num_ref is: "<<num_ref<<"\n";
    cout<<"Stack address of num_ref is: "<<&num_ref<<"\n\n"; 

    num_ref = 20; //once changed, it still remains in the same location
    
    cout<<"Num is: "<<num<<"\n";
    cout<<"Num via num_ref is: "<<num_ref<<"\n";

    return 0;
}