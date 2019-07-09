//
//  main.cpp
//  reverse-string
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    //first define a char array
    char text[] = "hello";
    
    //determine the size of the array. But because in a char array, the last element is null value
    int nChars = sizeof(text) - 1;
    
    //define a pointer to the start of the char array
    char *pStart = text;
    char *pEnd = text + nChars - 1; //this gives us the element number of the last character in the array
    
    //verify the pointers are set correctly
    cout << *pStart << endl;
    cout << *pEnd << endl;
    
    //while the start pointer is less than the end pointer
    while(pStart < pEnd){
        
        //first save the value that the start pointer is pointing to (since we're going to overwrite pStart)
        char save = *pStart;
        
        //then set (swap) value of start pointer to the value end pointer is pointing to
        *pStart = *pEnd;
        
        //Then, since the values have been swapped, write the saved value to the end
        *pEnd = save;
        
        pStart++;
        pEnd--;
    }
    
    cout << text << endl;
    
    
    return 0;
}
