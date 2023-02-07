#include<iostream>

using std::cout;

int main()
{
    auto num = 5;
    auto num1 = 5.5;

    cout<<"Size in bytes: "<<sizeof(num)<<"\n"; //tells how big the int is
    cout<<"Size in bytes double: "<<sizeof(num1)<<"\n"; //tells how big the double is

    num = 2147483647; //2^31-1 max int value, will overflow if goes over.
    cout<<"Max value is: "<<num<<"\n";
    num += 1;
    cout<<"num is: "<<num<<"\n"; //result if overflows

    return 0;
}