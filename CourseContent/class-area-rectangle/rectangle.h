//
//  rectangle.hpp
//  class-area-rectangle
//
//  Created by Eric on 7/16/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h

//#include <stdio.h>

// Superclass "Rectangle"
class Rectangle {
private:
    //TODO: TRY TO GET THIS TO WORK USING PRIVATE PROPERTIES
    //int width;          //property of Rectangle class, encapsulated so it can't be accessed publicly
    //int height;         //property of Rectangle class, encapsulated so it can't be accessed publicly
public:
    int width;
    int height;
    void display();     //prints the width and height of the rectangle separated by a space
    //Rectangle();        //constructor
    //~Rectangle();       //destructor
};

// Subclass of "Rectangle"
class RectangleArea: public Rectangle {
public:
    void read_input();      //reads the values of width and height of the rectangle
    void display();         //Overloads the base class (or "superclass") method, to print width x height
    //RectangleArea();      //constructor
    //~RectangleArea();     //destructor
};







#endif /* rectangle_h */
