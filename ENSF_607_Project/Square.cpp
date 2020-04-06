//
//  Square.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-05.
//  Copyright © 2020 Asif. All rights reserved.
//

#include "Square.hpp"
#include "iostream"
using namespace std;

Square::Square(double x, double y, double theSide, const char* name): Shape(x, y, name)
{
    side_a = theSide;
    
}

Square::Square(const Square& source): Shape(source) // double check if shape(source) is correct
{
    side_a = source.side_a;
}

Square& Square:: operator= (const Square& rhs) {
    if(this != &rhs)
    {
        destroy();
        copy(rhs);
        side_a = rhs.getSideA();
    }
    return *this;
}

Square::~Square() {
    cout << "Called Square Destructor" << endl;
    
}

double Square::area() {
    return side_a*side_a;
}

double Square::perimeter() {
    return (4* side_a);
}

double Square::getSideA() const
{
    return side_a;
}

void Square::setSideA(double newSide) {
    side_a = newSide;
}

void Square::display() {
    cout << "Square Name: " << shapeName << endl;
    origin.display();
}



