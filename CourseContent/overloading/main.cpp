//
//  main.cpp
//  overloading
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Person.h"

int main(){
    
    Person person1;
    Person person2("Bob");
    Person person3("Sue", 35);
    
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;
    
    return 0;
}
