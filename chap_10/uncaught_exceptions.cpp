#include<iostream>
#include<exception>

using namespace std;

/**
 * Handling uncaught exceptions
 * 
 * Ref: https://www.geeksforgeeks.org/customizing-termination-behavior-uncaught-exception-c/
 */

void handle_uncaught_exp(){
    cout << "Inside new terminate handler. Terminate gracefully here" << endl;
    abort();
}

int main(){
    set_terminate(handle_uncaught_exp);
    try{
        cout << "Inside try block" << endl;
        throw 100;
    }catch(char x){
        cout << "Inside catch block" << endl;
    }
    
    return 0;
}