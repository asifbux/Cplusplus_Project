//
//  Shape.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-05.
//  Copyright © 2020 Asif. All rights reserved.
//

#include "Shape.hpp"
#include "iostream"
using namespace std;

Shape::Shape(double x, double y, const char* name): origin(x,y)
{
    shapeName = new char [sizeof(name) +1];
    strcpy(shapeName, name);
}

Shape::Shape(const Shape& source): origin(source.origin.getX(), source.origin.getY()) {
    copy(source);
}

void Shape::copy(const Shape& rhs)
{
    origin = rhs.origin;
    shapeName = new char [sizeof(rhs.shapeName) +1];
    strcpy(shapeName, rhs.getName());
    
}

const Point& Shape::getOrigin() const
{
    return origin;
}

const char* Shape::getName() const
{
    return shapeName;
}

void Shape::display()
{
    cout<< "\nShape Name: " << shapeName << endl;
    origin.display();
}

double Shape::distance(Shape& other)
{
    return origin.distance(other.origin);
     
}
double Shape::distance(Shape &the_shape, Shape &other)
{
    // static member thats why this way
    return Point::distance(the_shape.origin, other.origin);
}

void Shape::move(double dx, double dy)
{
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
    
}

void Shape::destroy()
{
    delete [] shapeName;
}

Shape::~Shape()
{
    destroy();
}
