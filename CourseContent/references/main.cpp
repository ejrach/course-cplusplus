//
//  main.cpp
//  references
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

void changeSomething(double &value){
    value = 123.4;
}

int main(){
    
    int value1 = 8;
    int &value2 = value1;       //value2 is a reference value for value1
    value2 = 10;
    
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    
    double value = 4.321;
    changeSomething(value);
    cout << value << endl;
    
    return 0;
}
