#include<iostream>
using namespace std;

/**
 * Default parameter in the function allows that argument
 * to be optional and the calling function needn't pass that
 * argument. If the argument is not passed, default value of 
 * that argument is used, else, the value would be whatever 
 * the argument is passed in that function.
 * 
 * author: ranjan-stha
 * 
 */

void display(int n, char ch='*'){
    for (int i=0; i<n; i++){
        cout << ch;
    }
}

int main(){
    int n;
    cout << "How many characters to print ? ";
    cin >> n;
    display(n, '#');
    
    return 0;
}