//
//  CornerCut.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-06.
//  Copyright © 2020 Asif. All rights reserved.
//

#include "CornerCut.hpp"
#include <iostream>
#include "cmath"
using namespace std;

CornerCut::CornerCut(double x, double y, double width, double length, double radius, const char* name): Circle(x, y, radius, name), Rectangle(x, y, width, length, name), Shape(x, y, name)
{
    if(radius > width)
    {
        cout<< "Error with CornerCut, radius must be less than or equal to width"<<endl;
        exit(0);
    }
}
//CornerCut::CornerCut( const CornerCut& source): Circle(source),Rectangle(source), Shape(source)
//{
//    
//}
CornerCut& CornerCut:: operator = (const CornerCut& rhs)
{
    if( this != &rhs)
    {
        destroy();
        copy(rhs);
        side_a = rhs.getSideA();
        side_b = rhs.getSideB();
        radius = rhs.getRadius();
    }
    return *this;
}
double CornerCut::area()
{
    return abs((Circle::area()/4) - Rectangle::area());
}
double CornerCut::perimeter()
{
    return abs(((2* Circle::getRadius()) - (Circle::perimeter()/4)) - Rectangle::perimeter());
}
void CornerCut::display()
{
    cout << "\nCornerCut Name: "<< shapeName << endl;
    origin.display();
    cout << "Width: " << getSideA() << endl;
    cout << "Length: " << getSideB() << endl;
    cout << "Radius of the cut: "<< getRadius()<< endl;
}
CornerCut::~CornerCut()
{
    cout << "Called CornerCut Destructor: " << shapeName << endl;
}
