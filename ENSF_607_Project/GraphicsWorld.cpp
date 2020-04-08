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
#include "Circle.hpp"
#include "CornerCut.hpp"
using namespace std;

int main() {
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
    
    cout << "\nThis program has been written by: Asif Bux & Vaibhav Jadhav." ;
cout << "\nSubmitted at: 11:00 pm, April 20 , 2020\n";
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
    cout<< "rec2 name will be destroyed in shape and rec2 will be assigned values of a" << endl;
    rec2 = a;
rec2.display();
    cout << "\nTesting assignment operator in class Rectangle, where lhs = rhs:" <<endl;
    rec2 = rec2;
    rec2.display();
    
cout << "\nTesting Functions in class Circle:" <<endl;
Circle c (3, 5, 9, "CIRCLE C");
c.display();
cout << "the area of " << c.getName() <<" is: "<< c.area() << endl;
cout << "the perimeter of " << c.getName() << " is: "<< c.perimeter() << endl;
d = a.distance(c);
cout << "\nThe distance between rectangle a and circle c is: " <<d;
//// YOU MAY ADD ADDITIONAL CODE HERE, IF NEEDED
    
    // =================================== PART 2 =============================================
CornerCut rc (6, 5, 10, 12, 9, "CornerCut rc");
rc.display();
cout << "the area of " << rc.getName() <<" is: "<< rc.area();
cout << "\nthe perimeter of " << rc.getName() << " is: "<< rc.perimeter();
d = rc.distance(c);
cout << "\nThe distance between rc and c is: " <<d << "\n\n";
// Using array of Shape pointers:
Shape* sh[4];
sh[0] = &s;
sh[1] = &a;
sh [2] = &c;
sh [3] = &rc;
sh [0]->display();
cout << "\nthe area of "<< sh[0]->getName() << "is: "<< sh[0] ->area();
cout << "\nthe perimeter of " << sh[0]->getName () << " is: "<< sh[0]->perimeter();
sh [1]->display();
cout << "the area of "<< sh[1]->getName() << " is: "<< sh[1] ->area();
cout << "\nthe perimeter of " << sh[0]->getName () << " is: "<< sh[1]->perimeter() << "\n";
sh [2]->display();
cout << "\nthe area of "<< sh[2]->getName() << "is: "<< sh[2] ->area();
cout << "\nthe circumference of " << sh[2]->getName ()<< " is: "<< sh[2]->perimeter();
sh [3]->display();
cout << "\nthe area of "<< sh[3]->getName() << "is: "<< sh[3] ->area();
cout << "\nthe perimeter of " << sh[3]->getName () << " is: "<< sh[3]->perimeter();
cout << "\nTesting copy constructor in class CornerCut:" <<endl;
CornerCut cc = rc;
cc.display();
cout << "\nTesting assignment operator in class CornerCut:" <<endl;
CornerCut cc2(2, 5, 100, 12, 9, "CornerCut cc2");
cc2.display();
cc2 = cc;
cc2.display();
// ADD ADDITIONAL CODE TO TEST MORE FEATRUES, IF NEEDED
 // END OF FUNCTION run
    return 0;
}
