//
//  main.cpp
//  encapsulation
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

class Frog{
private:
    string name;
    string getName() { return name; }       //encapsulation is hiding away your instance variables
    
public:
    Frog(string name): name(name) {}
    void info() { cout << "My name is: " << getName() << endl; }
};



int main(){
    
    Frog frog("Freddy");
    
    frog.info();
    //frog.getName();  //this won't work, because we've made the method private
    
    return 0;
}
