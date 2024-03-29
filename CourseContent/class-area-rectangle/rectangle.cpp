//
//  rectangle.cpp
//  class-area-rectangle
//
//  Created by Eric on 7/16/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "rectangle.h"
#include <sstream>

using namespace std;

// Constructor
//Rectangle::Rectangle(){
//    width = 0;
//    height = 0;
//}


//Superclass (base class) display method
void Rectangle::display(){
    
    //cout << "Base class display method" << endl;
    cout << width << " " << height << endl;
}

//Subclass method
void RectangleArea::read_input(){
    
    string input;
    getline(cin,input);
    stringstream ss(input);
    ss >> width >> height;
}

// Subclass (derived class) display method)
// Overides (or overloads) the Rectangle display() method to display (width x height)
void RectangleArea::display(){
    
    //cout << "Derived class display method" << endl;
    cout << (width * height) << endl;
}
