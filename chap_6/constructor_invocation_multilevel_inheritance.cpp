#include<iostream>
using namespace std;

/**
 * Example on how constructors are invoked in multi-level inheritance
 * 
 * author: ranjan-stha
 * 
 */

class Base{
    public:
        Base(){
            cout << "Base Constructor Called." << endl;
        }
};

class Derived1: Base{
    public:
        Derived1(){
            cout << "Derived1 Constructor Called." << endl;
        }
};

class Derived2: Derived1 {
    public:
        Derived2(){
            cout << "Derived2 Constructor Called." << endl;
        }
};

int main(){
    Derived2 d1;
    
    return 0;
}