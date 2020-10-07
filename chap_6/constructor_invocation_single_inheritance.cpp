#include<iostream>
using namespace std;

/**
 * Example on how constructors are invoked in single inheritance.
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

class Derived: Base{
    public:
        Derived(){
            cout << "Derived Constructor Called." << endl;
        }
};

int main(){
    Derived d1;
    
    
    return 0;
}