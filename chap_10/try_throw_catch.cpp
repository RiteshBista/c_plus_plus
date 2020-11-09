#include<iostream>
using namespace std;

int main(){
    float dividend, divisor;
    cout << "Enter first value ";
    cin >> dividend;
    cout << "Enter second value ";
    cin >> divisor;
    
    try{
        if(divisor != 0){
            cout << dividend/divisor << endl;
        }else{
            throw(divisor);
        }
    }catch(float i){
        cout << "Exception caught: " << i << endl;
    }
    
    return 0;
}