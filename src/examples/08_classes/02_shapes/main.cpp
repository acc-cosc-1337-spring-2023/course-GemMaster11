//main
#include <iostream>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	const int SIZE = 3;
	Circle circles[SIZE];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	Line lines[SIZE];

	for(auto line: lines)
	{
		line.draw();
	}

	Shape* shape = circles;
	shape->draw();

	shape = lines;
	shape->draw();


	/*unique_ptr<Shape> shape = make_unique<Line>();
	shape->draw();
	unique_ptr<Shape> shape1 = make_unique<Circle>();
	shape1->draw();

	vector<unique_ptr<Shape>> shapes;
	shapes.push_back(std::move(shape));
	shapes.push_back(std::move(shape1));

	for(auto& shape: shapes)
	{
		shape->draw();
	}


	/*Shape* shape = new Shape();
	shape->draw();
	delete shape;


	shape = new Line();
	shape->draw();
	delete shape; //if you dont call delete then you will have a memory leak

	shape = new Circle();
	shape->draw();
	delete shape;*/


	/*Shape shape;
	shape.draw();

	Line line;
	line.draw();

	Circle circle;
	circle.draw();

	Shape* shape_ptr;
	shape_ptr = &line;
	shape_ptr->draw();

	shape_ptr = &circle;
	shape_ptr->draw();*/

	return 0;
}