#include <iostream>
using namespace std;

/**
 * Enumeration is a user-defined data type which defines an integer
 * constants to its members.
 * By default, the assignment of integral value starts with 0
 * but the default behavior can be modified and each element
 * can be assigned any other integral value as desired.
 */

enum colors {
    RED,
    GREEN,
    BLUE,
    BLACK,
};

int main(){
    enum colors color1, color2;
    
    color1 = RED;
    color2 = BLACK;
    
    cout << "The value of color is " << color1 << endl;
    cout << "The value of color is " << color2 << endl;
    
    return 0;
}