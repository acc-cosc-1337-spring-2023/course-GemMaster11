#include<iostream>
using std::cout;

void use_static_var()
{
    static int num = 0; //without static the variable would disappear and the results would be one.
    num++;
    cout<<num<<"\n";
}