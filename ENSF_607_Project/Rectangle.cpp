//
//  Rectangle.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-05.
//  Copyright © 2020 Asif. All rights reserved.
//

#include "Rectangle.hpp"
#include "iostream"
using namespace std;


Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char* name): Square(x, y, side_a, name), Shape(x, y, name)
{
    this->side_b = side_b;
}
Rectangle::Rectangle// double check
 (const Rectangle& rhs): Square(rhs), Shape(rhs)
{
    
}
Rectangle::~Rectangle()
{
    // double check
    cout << "Called Rectangle destructor" <<shapeName << endl;
}
double Rectangle::area(){
    return side_b* side_a;
}
double Rectangle::perimeter()
{
    return (2 * side_b) + (2 * side_a);
    
}
double Rectangle:: getSideB() const
{
    return side_b;
}
void Rectangle::setSideB(double newSideB) {
    side_b = newSideB;
}
void Rectangle::display() {
    cout << "\nRectangle Name: " << shapeName << endl;
    origin.display();
}

