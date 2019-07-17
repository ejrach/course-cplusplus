//
//  rectangle.cpp
//  area-rectangle-using-classes
//
//  Created by Eric on 7/17/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "rectangle.h"
#include <sstream>
#include <fstream>

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
    
    //Read via terminal input
    /*
    string input;
    getline(cin,input);
    stringstream ss(input);
    ss >> width >> height;
    */
    
    //Read via a file
    //https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c
    //To set working input file directory for the project (IMPORTANT):
    //https://stackoverflow.com/questions/23438393/new-to-xcode-cant-open-files-in-c
    ifstream infile;
    infile.open("input.txt");
    
    if (!infile){
        cout << "unable to open file" << endl;
        exit(1);
    }
    
    infile >> width >> height;
    infile.close();
    
}

// Subclass (derived class) display method)
// Overides (or overloads) the Rectangle display() method to display (width x height)
void RectangleArea::display(){
    
    //cout << "Derived class display method" << endl;
    cout << (width * height) << endl;
}

