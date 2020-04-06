//
//  Point.hpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-03.
//  Copyright © 2020 Asif. All rights reserved.
//
#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

class Point {
private:
    int id;
    double x;
    double y;
    void destroy();
    void copy(const Point &rhs);
public:
    static int ClassID;
    Point(double X, double Y);
    void display();
    const int getId() const;
    void setId(int);
    const double getX() const;
    void setX(double);
    const double getY() const;
    void setY(double);
    int counter();
    static double distance(const Point& p1, const Point& p2);
    double distance(const Point&pt1); //
    Point& operator =(const Point& rhs);
    Point( const Point& source);
    ~Point();
    
};
#endif /* Point_hpp */
