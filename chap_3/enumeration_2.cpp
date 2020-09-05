#include <iostream>
using namespace std;

/**
 * Enumeration is a user-defined data type which defines an integer
 * constants to its members.
 * By default, the assignment of integral value starts with 0
 * but the default behavior can be modified and each element
 * can be assigned any other integral value as desired.
 * 
 * author: ranjan-stha
 */

int fact(int num) {
    int f = 1;
    for(int i=1; i<=num; i++) {
        f *= i;
    }
    return f;
}

enum menu_options {
    GET_SQUARE=1,
    GET_FACTORIAL,
    GET_DOUBLE,
};

int main(){
    int opt, num, result;
    
    cout << "Mathematical Menu" << endl;
    cout << "1. FIND SQUARE" << endl;
    cout << "2. FIND FACTORIAL" << endl;
    cout << "3. FIND DOUBLE" << endl;
    
    cout << "Enter your option ";
    cin >> opt;
    
    switch(opt) {
        case GET_SQUARE:
            cout << "Enter a number ";
            cin >> num;
            cout << "The square is " << num*num << endl;
            break;
        case GET_FACTORIAL:
            cout << "Enter a number ";
            cin >> num;
            cout << "The factorial is " << fact(num) << endl;
            break;
        case GET_DOUBLE:
            cout << "Enter a number ";
            cin >> num;
            cout << "The double is " << 2*num << endl;
        default:
            cout << "Wrong choice !!";
    }
    
    return 0;
}
