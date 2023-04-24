#include "my_vector.h"

using std::cout;
//

Vector::Vector(int s)
    : capacity{s}, elements{new int[s]}
{
    cout<<"New memory created at "<<elements<<"\n";
}

Vector& Vector::operator=(Vector&& v)
{
    cout<<"Move assignment delete memory "<<elements<<"\n";
    delete[] elements;

    elements = v.elements;
    cout<<"Move assignment switch pointers "<<elements<<"\n";

    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

void Vector::Reserve(int new_size)
{
    if(new_size >= capacity)
    {
        return;
    }

    int* temp = new int[new_size];

    for(auto i=0; i<size; i++)
    {
        temp[i] = elements[i];
    }

    cout<<"Delete old memory"<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}
void Vector::PushBack(int value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;

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

Vector get_vector()
{
    Vector v1(3);
    return v1;
}