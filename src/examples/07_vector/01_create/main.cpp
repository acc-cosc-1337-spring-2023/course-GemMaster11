#include <vector> //vectors are lists
#include<iostream>

using std::cout;
using std::vector;

int main()
{
    vector<int> nums; //creates an empty vector/list
    cout<<nums.size()<<"\n"; 
    cout<<nums.capacity()<<"\n\n"; //empty vectors don't give initial capacity

    nums.push_back(4); //adds 4 to the end of the vector
    cout<<nums.size()<<"\n"; 
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(10); //adds 10 to the end of the vector
    cout<<nums.size()<<"\n"; 
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(11); //adds 11 to the end of the vector
    cout<<nums.size()<<"\n"; 
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(5); //adds 5 to the end of the vector
    cout<<nums.size()<<"\n"; 
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(50); //adds 50 to the end of the vector
    cout<<nums.size()<<"\n"; 
    cout<<nums.capacity()<<"\n\n"; //capacity doubled

    vector<char> letters {'a', 'b', 'c'};
    cout<<letters.size()<<"\n";
    cout<<letters.capacity()<<"\n\n"; 

    letters.push_back('d'); 
    cout<<letters.size()<<"\n"; 
    cout<<letters.capacity()<<"\n\n"; 

    //create vector examples
    vector<char> all_As(10, 'a');
    
    for(auto ch: all_As)
    {
        cout<<ch;
    }

    cout<<"\n\n";


    return 0;
}