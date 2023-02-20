//add include statements
#include "dna.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
//add function(s) code here

int factorial(int num)
{
    int sum = 1;

   while(num > 0)
   {
    sum = sum * num;
    num--;
    //cout<<sum<<"\n"; used for reading output and debugging

   } 

   return sum;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        auto swap = 0;

        if (num1 < num2)
        {
            swap = num1;
            num1 = num2;
            num2 = swap;
        }
        else if (num1 > num2)
        {
            num1 = num1 - num2;
        }


    }
    return num1;
}