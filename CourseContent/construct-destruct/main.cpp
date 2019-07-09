//
//  main.cpp
//  construct-destruct
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
#include "Cat.h"

using namespace std;



int main() {
    
    cout << "Starting program" << endl;
    
    Cat bob;
    bob.speak();
    
    cout << "Ending program" << endl;
    
    return 0;
}
