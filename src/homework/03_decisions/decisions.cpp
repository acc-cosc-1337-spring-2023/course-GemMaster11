#include "decisions.h"
#include <string>
#include<iostream>

using std::string;
using std::cout;

//write include statement for decisions header


//Write code for function(s) code here
string get_letter_grade_using_if(int num)
{
    string result;

    if(num >= 90 && num <= 100)
    {
        result = "Your letter grade is: A";
    }
    else if (num >= 80 && num <= 89)
    {
        result = "Your letter grade is: B";
    }
    else if (num >= 70 && num <= 79)
    {
        result = "Your letter grade is: C";
    }
    else if (num >= 60 && num <= 69)
    {
        result = "Your letter grade is: D";
    }
    else if (num >= 0 && num <= 59)
    {
        result = "Your letter grade is: F";
    }

    return result;
}

string get_letter_grade_using_switch(int num)
{
    string result;    

    switch (num)
    {
    case 0 ... 59 :
        result = "Your letter grade is: F";
        break;
    case 60 ... 69 :
        result = "Your letter grade is: D";
        break;
    case 70 ... 79 :
        result = "Your letter grade is: C";
        break;
    case 80 ... 89 :
        result ="Your letter grade is: B";
        break;
    case 90 ... 100 :
        result = "Your letter grade is: A";
        break;
    default:
        result = "Invalid grade number";
        break;
    }
    
    return result;

}