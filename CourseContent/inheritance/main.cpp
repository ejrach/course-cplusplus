//
//  main.cpp
//  inheritance
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

//Superclass
class Animal{
public:
    void speak(){ cout << "Grrr" << endl; }
};

//subclass Cat of the superclass Animal
class Cat: public Animal {
public:
    void jump(){ cout << "Cat jumping" << endl; }
};

class Tiger: public Cat {
public:
    void attackAntelope() { cout << "Attacking antelope" << endl;}
};

int main(){
    
    Animal a;
    a.speak();
    
    Cat cat;
    cat.speak();
    cat.jump();
    
    Tiger tiger;
    tiger.jump();
    tiger.speak();
    tiger.attackAntelope();
    
    return 0;
}
