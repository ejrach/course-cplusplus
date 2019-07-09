//
//  Person.cpp
//  this
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

//Constructor
Person::Person(){
    age = 0;
    name = "";
}
//Constructor.
//in here, the "this->name" refers to the "name" property of the class Person. The "= name" refers to the parameter name of name. Using this eliminates the need for always defining a new parameter name
//"This" is actually a pointer to the location of the object it is pointing to
Person::Person(string name, int age){
    this->name = name;
    this->age = age;
}

string Person::toString(){
    stringstream ss;
    
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    
    return ss.str();
}
