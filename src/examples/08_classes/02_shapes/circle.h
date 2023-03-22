//circle.h
#include "shape.h"

#ifndef CICRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
public:
    void draw()override{std::cout<<"Circle..."<<"\n";}


};


#endif