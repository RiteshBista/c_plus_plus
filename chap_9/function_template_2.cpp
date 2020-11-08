#include<iostream>
using namespace std;

/**
 * A simple Template example that swaps two numbers using pointers
 * 
 * author: ranjan-stha
 */

template<class T>
void swap(T *first, T *second){ // here arguments are of data type T
    T temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

int main(){
    int f, s;
    f = 10;
    s = 20;
    
    cout << "Before swapping" << endl;
    cout << "First num: " << f << endl;
    cout << "Second num: " << s << endl;
    
    swap(&f, &s);
    cout << endl;
    
    cout << "After swapping" << endl;
    cout << "First num: " << f << endl;
    cout << "Second num: " << s << endl;
    
    return 0;
}