//
//  Point.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-03.
//  Copyright © 2020 Asif. All rights reserved.
//

/* This class is supposed to represent a point in a Cartesian plane. It should have three data
members: x, and y coordinates and an automatically created id number. The first
object’s id number should be 1001, second one should 1002, and so on. Point should
have at least the following member functions:
- display - that displays x, and y coordinates of the point in the following format:
X-coordinate:
Y-coordinate:
- A constructor that initializes its data members.
Note: You are not supposed to define a default constructor in this class. Automatic
calls to the default constructor will hide some of the important aspects of this
assignment (marks will be deducted if you define a default constructor this class).
- Access functions get and set, for all data member as needed.
- Function counter()that returns the number of objects of class Point.
- Two distance functions that return the distance between two points. One of the
two must be a static function.
*/

#include "Point.hpp"
#include <stdlib.h>
#include <iostream>
#include "cmath"
using namespace std;

int Point:: ClassID =1000;

Point::Point(double X, double Y){
    //********* double check
    setX(X);
    setY(Y);
    setId(++ClassID);
}

void Point::display()
{
    cout<< "X-coordinate: "<< getX()<< endl;
    cout <<"Y-coordinate: "<< getY() << endl;
}

void Point::setX(double X) {
    x = X;
    
}

void Point::setY(double Y) {
    y = Y;
}

void Point::setId(int ID) {
    id = ID;
}

const double Point::getX() const {
    return x;
}

const double Point::getY() const {
    return y;
}

const int Point::getId() const{
    return id;
}

double Point::distance(const Point&p1, const Point&p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2));
}

double Point::distance(const Point& p1)
{
    return sqrt(pow(p1.x -x, 2)+ pow(p1.y - y, 2));
}
Point &Point::operator =(const Point&rhs)
{
    if(this != &rhs)
    {
        destroy();
        copy(rhs);
    }
    return *this;
}

void Point::copy(const Point&rhs)
{
    x = rhs.x;
    y = rhs.y;
    id = rhs.id;
}

Point::~Point() {
    destroy();
}

int Point::counter()
{
    return ClassID - 1000;
}

Point::Point(const Point& source)
{
    copy(source);
}

void Point::destroy(){
    cout<< "destroy of Point" << endl;
}

