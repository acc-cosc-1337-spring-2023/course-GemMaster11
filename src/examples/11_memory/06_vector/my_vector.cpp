#include "my_vector.h"

using std::cout;
//

Vector::Vector(int s)
    : capacity{s}, elements{new int[s]}
{
    cout<<"New memory created at "<<elements<<"\n";
}

Vector::~Vector()
{
    cout<<"delete memory at" <<elements<<"\n";
    delete[] elements;
}

Vector::Vector(const Vector& v)
 : size{v.size}, capacity{v.capacity}, elements{new int[v.size]}
{
    cout<<"Copy constructor - created memory at "<<elements<< "\n";
    for(auto i=0; i<v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}

//Free function
void use_vector()
{
    /*Vector* v = new Vector(3);
    delete v; this is required to delete the memory*/

    Vector v(3);
    Vector v1 = v;
}