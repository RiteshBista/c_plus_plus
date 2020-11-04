#include<iostream>
#include<fstream>

using namespace std;

/**
 * Error handling example: fail function
 * 
 * author: ranjan-stha
 */

int main(){
    ifstream infile("test.dat");
    
    if(infile.fail()){
        cout << "File cannot be opened";
    }else{
        cout << "File opened";
    }
    
    infile.close();
    return 0;
}