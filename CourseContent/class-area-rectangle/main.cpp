//
//  main.cpp
//  class-area-rectangle
//
//  Created by Eric on 7/16/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

#include "rectangle.h"



int main() {
    
    // Declare a RectangleArea object
    RectangleArea r_area;
    
    // Read the width and height
    r_area.read_input();
    
    // Print the width and height
    r_area.Rectangle::display();
    
    // Print the area
    r_area.display();
    
    return 0;
}
