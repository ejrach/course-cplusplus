//
//  Person.cpp
//  overloading
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <sstream>
#include "Person.h"

//Constructor
Person::Person(){
    name = "undefined";
    age = 0;
}

Person::Person(string newName, int newAge){
    name = newName;
    age = newAge;
}

string Person::toString(){
    stringstream ss;
    
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    
    return ss.str();
}
