//
//  Circle.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-06.
//  Copyright © 2020 Asif. All rights reserved.
//

#include "Circle.hpp"
#include "Shape.hpp"
#include "iostream"
#include "cmath"
using namespace std;


Circle::Circle(double x, double y, double rad, const char* name): Shape(x,y, name)
{
    radius = rad;
}
//Circle::Circle( const Circle& source): Shape(source)
//{
//    radius = source.radius;
//}
Circle& Circle:: operator= (const Circle& rhs)
{
    if(this != &rhs)
    {
        destroy();
        copy(rhs);
        radius = rhs.getRadius();
    }
    return *this;
}

double Circle::area()
{
    return M_PI * pow(radius,2);
}

double Circle::perimeter()
{
    return 2 * M_PI * radius;
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(double newRad)
{
    radius = newRad;
}
void Circle::display()
{
    cout<<"\nCircle Name: " << shapeName << endl;
    origin.display();
}
Circle::~Circle()
{
    cout<<"Called Circle Destrcutor: " << shapeName << endl;
}
