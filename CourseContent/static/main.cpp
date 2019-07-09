//
//  main.cpp
//  static
//
//  Created by Eric on 7/9/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
using namespace std;

class Test {
public:
    static int const MAX = 99;

private:
    static int count;
    
public:
    static void showInfo(){
        cout << count << endl;
    }
};

int Test::count = 7;

int main(){
    
    cout << Test::MAX << endl;
    Test::showInfo();
    
    return 0;
}
