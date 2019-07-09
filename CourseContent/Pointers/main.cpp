//
//  main.cpp
//  Pointers
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;


//The advantage of using pointers in this case is to elinate having to define a new value (or copy) of the double in the function
//when passing a value. Pointers allow you to just use the address (i.e. pass the address to the function.
void manipulate(double *pValue){
    cout << "2. Value of double in manipulate: " << *pValue << endl;
    *pValue = 10;
    cout << "3. Value of double in manipulate: " << *pValue << endl;  //outputting the deferenced value
}

int main(){
    
    int nValue = 8;
    
    int *pValue = &nValue;  //a pointer to an int is set euqal to the address of another integer value
    
    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int address: " << pValue << endl;
    cout << "Int value via pointer: " << *pValue << endl;   //dereference the pointer to get the value
    
    cout << "=======================" << endl;
    double dValue = 123.4;
    
    cout << "1. dValue: " << dValue << endl;
    manipulate(&dValue);
    cout << "4. dValue: " << dValue << endl;
    
    return 0;
}
