//
//  Circle.hpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-06.
//  Copyright © 2020 Asif. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp
#include "Shape.hpp"

#include <stdio.h>

class Circle: virtual public Shape
{
protected:
    double radius;
public:
    Circle(double x, double y, double radius, const char* name);
    //Circle( const Circle& source);
    Circle& operator= (const Circle& rhs);
    double area() override;
    double perimeter() override;
    double getRadius() const;
    void setRadius(double newRad);
    void display() override;
    virtual ~Circle();
    
};

#endif /* Circle_hpp */
