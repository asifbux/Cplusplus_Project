//
//  CornerCut.hpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-06.
//  Copyright © 2020 Asif. All rights reserved.
//

#ifndef CornerCut_hpp
#define CornerCut_hpp
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <stdio.h>

class CornerCut: public Circle, public Rectangle
{
public:
    CornerCut(double x, double y, double width, double length, double radius, const char* name);
    //CornerCut( const CornerCut& source);
    CornerCut& operator = (const CornerCut& rhs);
    double area() override;
    double perimeter() override;
    void display() override;
    virtual ~CornerCut();
};

#endif /* CornerCut_hpp */
