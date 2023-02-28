//add include statements
#include "func.h"
#include <iostream>

using std::cout;
using std::cin;
using std::string;

//add function code here

void menu()
{
    auto contCode = 'c'; // declaration for continuation
	auto exitCode = 'c'; // declaration for exit confirmation
	auto choice = 'c'; // declaration for number selection
	string dna; 

    do
    {
		exitCode = 'c'; //in order to prevent the menu from looping after saying no and then choosing a menu option

        cout<<"1 - Get GC Content \n";
        cout<<"2 - Get DNA Complement \n";
        cout<<"3 - Exit \n";
        cin>>choice;

		if (choice == '1')
		{
            
			cout<<"Input DNA Strand \n";
            cout<<"ex. ATCGATCG (Only use letters A, T, C, or G)\n";
            cin>>dna;
            auto result = get_gc_content(dna);
			cout<<"--------------------------\n"; //In order to make results look cleaner to look at
			cout<<"The GC Content of "<<dna<<" is: "<<result<<"\n\n";

			cout<<"Return to menu? (y/n) ";
			cin>>contCode;

			if (contCode == 'n' || contCode == 'N')
			{
				cout<<"Exiting...";
			}
			else if (contCode == 'y' || contCode == 'Y')
			{
				exitCode = 'n';
			}
		}
		else if (choice == '2')
		{
			cout<<"Input DNA Strand \n";
            cout<<"ex. ATCGATCG (Only use letters A, T, C, or G)\n";
            cin>>dna;

            auto result = get_dna_complement(dna);
			cout<<"--------------------------\n";
			cout<<"The complement of "<<dna<<" is: "<<result<<"\n\n";

			cout<<"Return to menu? (y/n) ";
			cin>>contCode;

			if (contCode == 'n' || contCode == 'N')
			{
				cout<<"Exiting...";
			}
			else if (contCode == 'y' || contCode == 'Y')
			{
				exitCode = 'n';
			}
		}
		else if (choice == '3')
		{
			cout<<"Are you sure? (y/n) ";
			cin>>exitCode;
			if (exitCode == 'y' || exitCode == 'Y')
			{
				cout<<"Exiting...";
			}
		}

    } while (exitCode == 'n' || exitCode == 'N');
}

double get_gc_content(const string &dna)
{
    double counter = 0;
    string strand = &dna[counter];
    for(auto i = 0; i < strand.length(); i++)
    {
        auto check = strand[i];
        if (check == 'c' || check =='C' || check == 'g' || check == 'G')
        {
            counter++;
        }

    }

    double result = counter/strand.length();

    return result;
}

string get_dna_complement(string dna)
{
    string invalid = "Invalid";
    dna = reverse_string(dna);

    for(auto i = 0; i < dna.length(); i++)
    {
        auto check = dna[i];
        if (check == 'c' || check =='C')
        {
            dna[i] = 'G';
        }
        else if (check == 'g' || check =='G')
        {
            dna[i] = 'C';
        }
        else if (check == 'a' || check =='A')
        {
            dna[i] = 'T';
        }
        else if (check == 't' || check =='T')
        {
            dna[i] = 'A';
        }
        else if (check != 'c' || check != 'C' || check != 'g' || check != 'G' || check != 'a' || check != 'A' || check != 't' || check != 'T')
        {
            cout<<"\n";
            cout<<"Invalid Strand \n\n";
            dna = "Invalid";
            break;
        }

    }
    
    return dna;

}

string reverse_string(string dna)
{
    string reversed = dna;
    int start = 0;

    for(int i = dna.length() - 1; i >= 0; i--)
    {
        reversed[start] = dna[i];
        start++;
    }
    return reversed;
}
