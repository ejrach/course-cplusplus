//
//  main.cpp
//  sizeof-multidim-arrays
//
//  Created by Eric on 7/8/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
    
    string animals[][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };
    
    cout << sizeof(string) << endl; //size of string is 24 bytes
    cout << sizeof(animals) << endl; //size of string is 144 bytes
    
    //each row should have the same size. So if we want the size of the first row, just get the first row:
    cout << sizeof(animals[0]) << endl; //size of string is 3 x 24 = 72 bytes
 
    for (int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++)
    {
        for (int j = 0; j < sizeof(animals[0])/sizeof(string); j++)
        {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }
    
    return 0;
}
