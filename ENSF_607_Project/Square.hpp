//
//  Square.hpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-05.
//  Copyright © 2020 Asif. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp
#include "Shape.hpp"

#include <stdio.h>

class Square: virtual public Shape
{
protected:
    double side_a; // double check
public:
    Square(double x, double y, double theSide, const char* name);
    Square(const Square& source);
    Square& operator=(const Square& rhs);
    virtual ~Square(); // double check
    double area() override;
    double perimeter() override;
    double getSideA() const;
    void setSideA(double newSide);
    void display() override;
    
};

#endif /* Square_hpp */
