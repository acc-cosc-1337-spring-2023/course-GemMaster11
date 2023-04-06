//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout;
using std::string;

void use_stack_array()
{
    const auto SIZE = 3;
    int numbers[SIZE]{5, 8}; //this is an array, SIZE gives us the amount of memory blocks on the stack, the {} initializes the elements to 0

    for(int i=0; i<SIZE; i++)
    {
        cout<<numbers[i]<<"\n";
    }
}

void array_months()
{
    const auto SIZE = 3;
    int month_numbers[SIZE]{1, 2, 3};
    string month_names[SIZE]{"Jan", "Feb", "Mar"};

    //month_names[0] = "January"; possible to overwrite an element in an array

    for(int i=0; i<SIZE; i++)
    {
        cout<<month_numbers[i]<<" "<<month_names[i]<<"\n";
    }
}

void arrays_and_pointers()
{
    const auto SIZE = 3;
    int numbers[SIZE]{1, 2, 3};

    cout<<numbers<<"\n";//this displays the address of the first element
    cout<<*numbers<<"\n"; //displays the first element

    int* ptr = numbers;
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr++; //will offset 4 bytes
    cout<<ptr<<" "<<*ptr<<"\n"; //this displays two/next element because ptr was incremented

    *ptr++;
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr--;
    cout<<ptr<<" "<<*ptr<<"\n"; //makes the ptr go back an element

    *ptr--;
    cout<<ptr<<" "<<*ptr<<"\n";
}

void display_array(int* nums)
{
    for(auto i=0; nums[i] != -1; i++)//sentinel values
    {
        cout<<nums[i]<<"\n";
    }
    cout<<"\n";
}

void display_array(int* nums, const int SIZE)
{
    for(auto i=0; i<SIZE; i++)//sentinel values
    {
        cout<<nums[i]<<"\n";
    }
}