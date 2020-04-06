//
//  Shape.hpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-05.
//  Copyright © 2020 Asif. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include "Point.hpp"

class Shape{
protected:
    Point origin;
    char* shapeName;
    void copy(const Shape& rhs);
public:
    Shape(double x, double y, const char* name);
    Shape(const Shape &source);
    virtual ~Shape(); // double check
    const Point& getOrigin() const;
    const char * getName() const;
    virtual void display();
    double distance (Shape& other);
    static double distance ( Shape& the_shape, Shape& other);
    void move(double dx, double dy);
    virtual double area() =0; // pure virtual functions, must be implemented by dervied class
    virtual double perimeter() =0;
    void destroy();
    Shape& operator= (const Shape& rhs);
    
    
    
};

#endif /* Shape_hpp */
