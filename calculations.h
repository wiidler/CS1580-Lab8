#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <iostream>
#include <fstream>
using namespace std;

/***********************FUNCTION PROTOTYPES***********************/
// Description: Reads the incoming file from the main console then proceeds to the writeFile function
// Pre: Requires a valid file to read with a number on the first line indicating the lines remaining
// Post: Assigns values to associated variables
void readFile(ifstream & fin, string & finalName, string & finalClass, int & finalLevel);
// Description: Writes the values save in input.txt to an output file
// Pre: Values required for the name, class, and level of Normo
// Post: Creates and fills an output file with Normo's final values
void writeFile(string finalName, string finalClass, int finalLevel);
#endif