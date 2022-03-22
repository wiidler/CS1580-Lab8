#include "calculations.h"
#include <iostream>
#include <fstream>
using namespace std;

/***********************FUNCTION DEFINITIONS***********************/

void readFile(ifstream & fin, string & finalName, string & finalClass, int & finalLevel){
    int numOfLines;
    fin >> numOfLines;
    string type = "";
    int i = 1;
    for (i=1; i <= numOfLines; i++){
        fin >> type;
        if(type == "name"){
            fin >> finalName;
        }
        else if(type == "class"){
            fin >> finalClass;
        }
        else if(type == "level"){
            fin >> finalLevel;
        }
    }
    fin.close();
    writeFile(finalName, finalClass, finalLevel);
    return;
}
void writeFile(string finalName, string finalClass, int finalLevel){
    const string OUTPUTFILE = "output.txt";
    ofstream fout(OUTPUTFILE.c_str());

    fout << finalName << "'s final attributes:" << endl << endl;
    fout << "Name - " << finalName << endl;
    fout << "Class - " << finalClass << endl;
    fout << "Level - " << finalLevel;

    fout.close();
    return;
}