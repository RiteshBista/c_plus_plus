#include<iostream>
using namespace std;

/**
 * Rethrowing an exception 
 * 
 * author: ranjan-stha
 */

void divide(float a, float b){
    try{
        if(b == 0){
            throw b;
        }else{
            cout << "The answer is " << a/b << endl;
        }
    }catch(float b){
        throw;
    }
}

int main(){
    float a, b;
    cout << "Enter values ";
    cin >> a;
    cin >> b;
    
    try{
        divide(a, b);
    }catch(float){
        cout << "Exception caught outside in main" << endl;
    }
    
    return 0;
}