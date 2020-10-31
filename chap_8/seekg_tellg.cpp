#include<iostream>
#include<fstream>

using namespace std;

/**
 * File Pointers and function manipulators (seekg() and tellg())
 * 
 * Note that you create a text file mytext.dat and insert some data 
 * e.g. a b c d e f g h i j k l m ..
 * 
 * author: ranjan-stha
 */

int main(){
    char ch;
    
    ifstream infile;
    infile.open("mytext.dat");
    
    infile.seekg(0, ios::beg);
    infile>>ch;
    cout << ch << endl;
    
    infile.seekg(4, ios::beg);
    infile >> ch;
    cout << ch << endl;
    
    infile.seekg(3, ios::cur);
    infile >> ch;
    cout << ch << endl;
    
    infile.seekg(-5, ios::end);
    infile >> ch;
    cout << ch << endl;
    
    int pos = infile.tellg();
    cout << pos << endl;
    
    infile.close();
    
    return 0;
}