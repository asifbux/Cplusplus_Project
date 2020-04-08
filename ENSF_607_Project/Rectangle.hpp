//
//  Rectangle.hpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-05.
//  Copyright © 2020 Asif. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "Square.hpp"

#include <stdio.h>

class Rectangle: public Square  {
protected:
    double side_b;
public:
    Rectangle(double x, double y, double side_a, double side_b, const char* name);
    //Rectangle(const Rectangle& rhs);
    virtual ~Rectangle();
    double area();
    double perimeter();
    double getSideB() const;
    void setSideB(double newSideB);
    void display();
    
};

#endif /* Rectangle_hpp */
