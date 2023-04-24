#include "text_output.h"

using std::cout;
using std::ofstream;
using std::string;
using std::ifstream;
using std::getline;

void output_to_file()
{
    cout<<"Create file object/variable\n";
    ofstream myfile;//represents a file

    cout<<"Open file for writing\n";
    myfile.open("example.dat");//open in text mode

    cout<<"Write to file... \n";
    cout<<"Write another line to file\n";
    myfile<<"1one\n";
    cout<<"Write another line to file\n";
    myfile<<"2two\n";
    cout<<"Write another line to file\n";
    myfile<<"3three\n";

    cout<<"Close the file\n";
    myfile.close();
}

void read_from_file()
{
    string line;//represents a line from a file
    cout<<"Create file object\n";
    ifstream infile("example.dat");

    cout<<"try to open the file\n";
    if(infile.is_open())
    {
        cout<<"Read from file\n";
        while(getline(infile, line))
        {
            //cout<<line<<"\n";
            for(char ch: line)
            {
               cout<<ch; 
            }
            cout<<"\n";
        }
        cout<<"Close the file object\n";
        infile.close();
    }
    else
    {
        cout<<"Cannot open the file...\n";
    }

}