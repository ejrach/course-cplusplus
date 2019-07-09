//
//  main.cpp
//  arrays-lists
//
//  Created by Eric on 7/8/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
    
    cout << "Array of integers" << endl;
    cout << "=================" << endl;
    int values[3];
    
    values[0] = 88;
    values[1] = 123;
    values[2] = 7;
    
    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;
    
    cout << endl << "Array of doubles" << endl;
    cout << "================" << endl;
    double numbers[4] = {4.5, 2.3, 7.2, 8.1};
    
    for (int i = 0; i < 4; i++)
    {
        cout << numbers[i] << endl;
    }
    
    
    
    return 0;
}
