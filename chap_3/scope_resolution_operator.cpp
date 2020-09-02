#include <iostream>
using namespace std;

/**
 * Scope Resolution Operator (::) is used to indicate the scope of a variable 
 * or function so that they can accessed respectively from that indicated scope.
 * 
 * Below illustrates the variable is being accessed present in different scope
 * using the Scope Resolution Operator(::)
 */

int num = 10;

int main(){
    int num;
    
    num = 20;
    
    cout << "The value of Variable num declared within main fn is " << num << endl;
    cout << "The value of Variable num declared outside of main fn is " << ::num << endl;
    
    return 0;
}