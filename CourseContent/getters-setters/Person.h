//
//  Person.h
//  getters-setters
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include <iostream>
using namespace std;

class Person{
private:
    string name;
    
public:
    Person();           //Constructor
    string toString();
    void setName(string newName);
    string getName();
};

#endif /* Person_h */
