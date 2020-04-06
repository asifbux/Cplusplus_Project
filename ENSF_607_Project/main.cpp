//
//  main.cpp
//  ENSF_607_Project
//
//  Created by Computer on 2020-04-03.
//  Copyright © 2020 Asif. All rights reserved.
//

#include <iostream>
#include "Point.hpp"
#include "Square.hpp"
#include "Rectangle.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    Point *p1 = new Point(10.0 , 5.0);
//    cout<< p1->counter() << endl;
//    Point *p2 = p1;
//        cout<< p2->counter() << endl;
//
//    Square *s1 = new Square(10, 10, 50, "smallsquare");
//    Square *s2 = new Square(100, 100, 500, "bigsquare");
//    Square *s3 = s2;
//    cout << "printing s3" << endl;
//    s3->display();
    
    cout << "\nThis program has been written by: student name(s)." ;
cout << "\nSubmitted at: 11:00 pm, February 3 , 2008\n";
cout << "\nTesting Functions in class Point:" <<endl;
Point m (6, 8);
Point n (6,8);
n.setX(9);
m.display();
n.display();
cout << "\nThe distance between two points m and n is: " << m.distance(n);
    // Testing the second version of the function distance.
// Put the necessary code in this place
cout << "\nTesting Functions in class Square:" <<endl;
Square s(5, 7, 12, "SQUARE - S");
s.display();
cout << "the area of " << s.getName() <<" is: "<< s.area() << "\n";
cout << "the perimeter of " << s.getName() <<" is: " << s.perimeter() << "\n";
cout << "\nTesting Functions in class Rectangle:" <<endl;
Rectangle a(5, 7, 12, 15, "RECTANGLE A");
a.display();
Rectangle b(16 , 7, 8, 9, "RECTANGLE B");
b.display();
cout << "the area of " << a.getName() <<" is: "<< a.area() << "\n";
cout << "the perimeter of " << a.getName() <<" is: "<< a.perimeter() << "\n";
double d = a.distance(b);
cout << "\nThe distance between two rectangles is: " <<d;
cout << "\nTesting copy constructor in class Rectangle:" <<endl;
Rectangle rec1 = a;
rec1.display();
    cout << "\nTesting assignment operator in class Rectangle:" <<endl;
Rectangle rec2 (3, 4, 11, 7, "RECTANGLE rec2");
rec2 = a;
rec2.display();
cout << "\nTesting Functions in class Circle:" <<endl;
//Circle c (3, 5, 9, "CIRCLE C");
//c.display();
//cout << "the area of " << c.getName() <<" is: "<< c.area() << endl;
//cout << "the perimeter of " << c.getName() << " is: "<< c.perimeter() << endl;
//d = a.distance(c);
//cout << "\nThe distance between rectangle a and circle c is: " <<d;
//// YOU MAY ADD ADDITIONAL CODE HERE, IF NEEDED
    return 0;
}
