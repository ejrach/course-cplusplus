//
//  main.cpp
//  copy-constructors
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal{
private:
    string name;
    
public:
    Animal() { cout << "Animal created." << endl; };
    Animal(const Animal &other):name(other.name) { cout << "Animal created by copying." << endl; };
    void setName(string name){this->name = name;}
    void speak() const { cout << "My name is: " << name << endl; }
};

int main(){
    
    Animal animal1;
    
    animal1.setName("Freddy");
    
    Animal animal2 = animal1;  //C++ is implicitly creating a new object through "copy"
    animal2.speak();
    animal2.setName("Bob");
    
    animal1.speak();
    animal2.speak();
    
    
    
    return 0;
}
