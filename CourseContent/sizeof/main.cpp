//
//  main.cpp
//  sizeof
//
//  Created by Eric on 7/8/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
    
    int values[] = {4, 7, 3, 4};
    
    cout << sizeof(int) << endl;    //this will produce 4, i.e. the number of bytes in an integer
    cout << sizeof(values) << endl; //this will produce 16, i.e. 4x the number of bytes in an integer
    
    for (int i = 0; i < sizeof(values)/sizeof(int); i++)
    {
        cout << values[i] << " " << flush;
    }
    
    cout << endl;
    
    
    
    return 0;
}
