//
//  Cat.hpp
//  data-members
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#ifndef Cat_h_
#define Cat_h_

#include <stdio.h>

class Cat {
    
private:
    bool happy;         //property of the class Cat, encapsulated so that it can't be accessed publicly
    
public:
    void makeHappy(void);
    void makeSad(void);
    void speak(void);   //method of the class Cat
};

#endif /* Cat_h_ */
