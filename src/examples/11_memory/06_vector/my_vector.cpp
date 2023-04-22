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

Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(auto i=0; i<v.size; i++)
    {
        temp[i]=v.elements[i];
    }

    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;

    cout<<"copy assignment - create memory at "<<elements<<"\n";
    size = v.size;

    return *this;//returns a reference to itself
}

Vector::Vector(Vector&& v)
 : size{v.size}, elements{v.elements}
{
    cout<<"Move constructor switched pointer "<<elements<<"\n";
    v.elements = nullptr;
    v.size = 0;
}

//Free function
void use_vector()
{
    /*Vector* v = new Vector(3);
    delete v; this is required to delete the memory*/

    Vector v(3);
    Vector v1 = v;
}