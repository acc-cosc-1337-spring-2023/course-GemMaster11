#include <iostream>
#include <string>

using std::cout;
using std::string;

//stack addresses will decrement while heap addresses will increment, they also use hexadecimal codes

int main()
{
    string lang = "C++"; //stack memory used and heap memory used, "C++" IS STORED IN HEAP
    int num =5;


    cout<<"Address of lang: "<<&lang<<"\n";
    cout<<"Address of num: "<<&num<<"\n";
    cout<<lang[0]<<"\n";
    cout<<"Address of character at 0 index: "<<static_cast<void *>(&lang[0])<<"\n";
    cout<<"Address of character at 0 index: "<<static_cast<void *>(&lang[1])<<"\n"; //static_cast converts one data type to another
    cout<<"Address of character at 0 index: "<<static_cast<void *>(&lang[2])<<"\n";
    cout<<"Size is: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";

    /*create strings examples
    string s0("initial string");
    cout<<s0<<"\n";

    string s1; //empty string
    cout<<"Capacity: "<<s1.capacity()<<"\n";
    s1.append("C++ is great f");
    cout<<"Capacity: "<<s1.capacity()<<"\n";
    s1.append("or");
    cout<<"Capacity: "<<s1.capacity()<<"\n"; //takes to a bigger memory block

    string s2(s0);
    cout<<s2<<"\n";

    string s3(s0, 8, 3);// start at 8 and give it 3 characters
    cout<<s3<<"\n";*/

    string s4("Another character sequence", 12); // give it the first 12
    cout<<s4<<"\n";

    /*string s5(10, 'x'); //makes 10 x's
    cout<<s5<<"\n";

    string s6(10, 42);// 42 is the *, ascii 
    cout<<s6<<"\n"; */

    return 0;
}