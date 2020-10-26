#include<iostream>
using namespace std;

/**
 * A simple Template example that adds two numbers
 * 
 * author: ranjan-stha
 */

template<class T>
void sum(T first, T second){ // here arguments are of data type T (basic datatype)
    T sum;
    sum = first + second;
    cout << "The sum is " << sum << endl;
}

int main(){
    sum(2, 4);
    
    return 0;
}