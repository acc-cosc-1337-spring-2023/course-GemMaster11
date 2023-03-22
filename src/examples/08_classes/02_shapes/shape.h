//shape.h
#include<iostream>
#ifndef SHAPE_H
#define SHAPE_H

class Shape //is an abstract class
{
public:
    virtual void draw() = 0; //= 0; //pure virtual functions are made by setting the function to equal 0
    //if its an abstract class it cannot make a direct variable to it.
private:
};


#endif