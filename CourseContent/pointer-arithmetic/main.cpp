//
//  main.cpp
//  pointer-arithmetic
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    const int NSTRINGS = 5;
    
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};
    
    string *pTexts = texts;
    
    pTexts += 3;
    
    cout << *pTexts << endl;
    
    pTexts -= 2;
    
    cout << *pTexts << endl;
    
    pTexts = &texts[0];                 //Set pTexts back to the start
    string *pEnd = &texts[NSTRINGS];
    
    while(pTexts != pEnd){
        cout << *pTexts << endl;
        pTexts++;
    }
    
    
    return 0;
}
