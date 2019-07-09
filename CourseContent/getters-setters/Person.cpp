//
//  Person.cpp
//  getters-setters
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Person.h"

using namespace std;

//Constructor
Person::Person(){
    name = "George";
}

string Person::toString(){
    return "Person's name is: " + name;
}


//Setter
void Person::setName(string newName){
    name = newName;
}

//Getter
string Person::getName(){
    return name;
}
