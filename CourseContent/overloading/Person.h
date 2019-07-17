//
//  Person.h
//  overloading
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person();
    Person(string newName){name = newName; age = 0;};
    Person(string newName, int newAge);
    string toString();
};

#endif /* Person_h */
