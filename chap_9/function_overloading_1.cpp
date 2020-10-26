#include<iostream>
#include<cmath>
using namespace std;

/**
 * Function overloading in Templates
 * 
 * author: ranjan-stha
 */

template<class T>
void display(T val){
    cout << "Template display: " << val << endl;
}

void display(int val){
    cout << "Explicit display: " << val << endl;
}

int main(){
    display(2);
    
    display(5.0);
    display('B');
    
    return 0;
}