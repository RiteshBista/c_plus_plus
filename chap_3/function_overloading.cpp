#include <iostream>
using namespace std;

/**
 * Function Overloading
 * Calls the respective function
 */
 
int sum(int num1, int num2) {
    cout << "Integer type sum function called having two arguments." << endl;
    return num1 + num2;
}

float sum(float num1, float num2){
    cout << "Float type sum function called having two arguments." << endl;
    return num1 + num2;
}

int sum(int num1, int num2, int num3){
    cout << "Integer type sum function called having three arguments." << endl;
    return num1 + num2 + num3;
}


int main(){
    
    cout << sum(2, 3) << endl;
    cout << sum(5.0f, 3.5f) << endl;
    cout << sum(1, 2, 3) << endl;

    return 0;
}