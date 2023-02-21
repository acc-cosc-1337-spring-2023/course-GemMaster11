#include <iostream>

using std::cout;
using std::string;

int main()
{
    string lang = "C++";
    cout<<"Address of lang: "<<&lang<<"\n";
    cout<<lang[0]<<"\n";
    cout<<"Size is: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";

    //create strings examples
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
    cout<<s3<<"\n";

    string s4("Another character sequence", 12); // give it the first 12
    cout<<s4<<"\n";

    string s5(10, 'x'); //makes 10 x's
    cout<<s5<<"\n";

    string s6(10, 42);// 42 is the *, ascii 
    cout<<s6<<"\n";

    return 0;
}