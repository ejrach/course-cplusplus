//
//  main.cpp
//  this
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
#include "Person.h"
using namespace std;


int main(){
    Person person1;
    Person person2("Bob", 42);
    Person person3("Sue", 35);
    
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;
    
    return 0;
}
