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



void Rectangle::display(){
    
    //cout << "Base class display method" << endl;
    cout << width << " " << height << endl;
}


void RectangleArea::read_input(){
    
    //In this function, could use cin to get data
    string input;
    getline(cin,input);
    stringstream ss(input);
    ss >> width >> height;
    
    
    //width = 10;
    //height = 5;
}

// Overides the Rectangle display() method to display (width x height)
void RectangleArea::display(){
    
    //cout << "Derived class display method" << endl;
    cout << (width * height) << endl;
}
