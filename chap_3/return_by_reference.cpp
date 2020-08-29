#include <iostream>
using namespace std;

/**
 * 
 * Return by Reference
 * In the following example, the function
 * returns the reference or the variable at the location
 * where the function is called.
 */

 
int x;

int& assign(){
    return x;
}

int main( ){
    
    assign() = 5;
    
    cout << x << endl;
    
    return 0;
}