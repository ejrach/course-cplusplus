//
//  main.cpp
//  arrays-functions
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]){
    
    //cout << sizeof(texts) << endl; //doesn't work, returns size of pointer
    
    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}


int main(){
    
    string texts[] = {"apple", "orange", "banana"};
    
    cout << sizeof(texts) << endl;
    
    show1(3, texts);
    
    return 0;
}
