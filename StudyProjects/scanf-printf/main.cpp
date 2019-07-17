//
//  main.cpp
//  scanf-printf
//
//  Created by Eric on 7/17/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

//Read via a file
//https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c
//To set working input file directory for the project (IMPORTANT):
//https://stackoverflow.com/questions/23438393/new-to-xcode-cant-open-files-in-c

int main() {
    
    int col_1;
    int col_2;
    float col_3;
    int i = 0;  //line counter
    ifstream infile;
    
    //Read one line, 2 integers, 1 float separated by spaces
    infile.open("input-oneline.txt");
    if (!infile){
        cout << "unable to open file" << endl;
        exit(1);
    }
    infile >> col_1 >> col_2 >> col_3;
    infile.close();
    printf("The file contents are: %d %d %f\n", col_1, col_2, col_3);
    
    //Read multiple lines, 2 integers, 1 float separated by spaces
    infile.open("input-multiplelines.txt");
    if (!infile){
        cout << "unable to open file" << endl;
        exit(1);
    }
    while (infile >> col_1 >> col_2 >> col_3){
        i++;
        printf("Line %d: %d %d %f\n", i, col_1, col_2, col_3);
    }
    infile.close();
    return 0;
}
