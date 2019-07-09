//
//  Cat.cpp
//  construct-destruct
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Cat.h"

using namespace std;

//Defining the constructor --> ClassName::Constructor
Cat::Cat(){
    cout << "Cat created" << endl;
    
    happy = true;       //proper place to intiailze the property is in the constructor
}

//Defining the destructor. Memory will be given back to the operating system
Cat::~Cat(){
    cout << "Cat destroyed" << endl;
}

void Cat::speak(){
    if(happy){
        cout << "Meow!" << endl;
    }
    else{
        cout << "Sssss" << endl;
    }
}
