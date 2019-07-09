//
//  main.cpp
//  getters-setters
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Person.h"

int main(){
    
    Person person;
    
    person.setName("Georgina");         //this is also called a mutator
    
    cout << person.toString() << endl;
    
    cout << "Name of person with get method: " << person.getName() << endl;
    
    return 0;
}
