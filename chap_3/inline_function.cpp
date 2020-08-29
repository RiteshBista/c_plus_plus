#include <iostream>
using namespace std;

/**
 * The function uses the inline keyword to implement an inline
 * function. When the function is decorated with inline, the compiler places
 * the copy of that function at each place where the function is called.
 * 
 * author: ranjan-stha
 */

inline int find_min(int x, int y) {
    return x < y ? x : y;
}

int main(){
    int x, y;
    cout << "Enter first number ";
    cin >> x;
    cout << "Enter second number ";
    cin >> y;
    cout << "The small number is " << find_min(x,y) << endl;
    cout << "Yet another small number is " << find_min(8, -3) << endl;
    
    return 0;
}