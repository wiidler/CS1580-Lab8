// Programmer: Will Weidler
// ID: wawq97
// Date: 3/22/22
// File: lab8.cpp
// Assignment: Lab 8
// Purpose: This program takes in information from an input file and outputs the newest info to an output file

#include "calculations.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string inputFile;
    ifstream fin;
    string finalName = "";
    string finalClass = "";
    int finalLevel;
    do{
        cout << "What is the name of the input file?" << endl;
        cin >> inputFile;
        fin.clear();
        fin.open(inputFile.c_str());
        if (!fin){
            cout << "File not found." << endl;
        }
    }while(!fin);
    cout << "File stream successfully connected." << endl;
    readFile(fin, finalName, finalClass, finalLevel);
    return 0;
}