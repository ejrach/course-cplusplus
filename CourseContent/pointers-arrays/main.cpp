//
//  main.cpp
//  pointers-arrays
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    string texts[] = {"one", "two", "three"};
    
    string *pTexts = texts; //point to the start of the array
    
    //iterate through the array
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++){
        cout << texts[i] << " " << flush;
    }
    cout << endl;
    
    // ===================================
    
    //iterate through the array using pointers
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++){
        cout << pTexts[i] << " " << flush;
    }
    cout << endl;
    
    // ===================================
    
    //iterate through the array using pointers by incrementing the pointer
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++){
        cout << *pTexts << " " << flush;
        pTexts++;
    }
    cout << endl;
    
    // ===================================
    // using a while loop to loop through the array
    string *pElement = texts;   //points to the first element of the array
    string *pEnd = &texts[2];   //point to the last address of the texts array
    
    while(true){
        cout << *pElement << " " << flush;
        
        if (pElement == pEnd){
            break;
        }
        
        pElement++;
    }
    cout << endl;
    
    
    
    return 0;
}
