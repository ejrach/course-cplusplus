//
//  Cat.cpp
//  data-members
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){
    
    if(happy){
        cout << "Meow!" << endl;
    }
    else{
        cout << "Sssss" << endl;
    }
}

void Cat::makeHappy(){
    happy = true;
}

void Cat::makeSad(){
    happy = false;
}
