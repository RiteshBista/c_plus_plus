#include<iostream>
#include<cmath>
using namespace std;

/**
 * Function overloading in Templates
 * 
 * author: ranjan-stha
 */

template<class T1>
void display(T1 val){
    cout << "val1: " << val << endl;
}

template<class T1, class T2>
void display(T1 val1, T2 val2){
    cout << "val1: " << val1 << ", val2: " << val2 << endl;
}

int main(){
    display(2);
    
    display(10, 5.0);
    display('B');
    display(1, 'a');
    
    return 0;
}