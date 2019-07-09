//
//  Cat.h
//  construct-destruct
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#ifndef Cat_h
#define Cat_h

class Cat{
private:
    bool happy;
    
public:
    void speak();
    Cat();              //constructor must have the same name as the class. They can't return a value
    ~Cat();             //Destructor
};

#endif /* Cat_h */
