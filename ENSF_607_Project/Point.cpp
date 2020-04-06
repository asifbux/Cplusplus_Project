//
//  Point.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-03.
//  Copyright © 2020 Asif. All rights reserved.
//


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
    
}

