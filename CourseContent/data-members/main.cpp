//
//  main.cpp
//  data-members
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
#include "Cat.h"

using namespace std;

int main(){
    
    Cat jim;
    Cat bob;
    
    jim.makeHappy();
    jim.speak();
    
    bob.makeSad();
    bob.speak();
    
    return 0;
}
