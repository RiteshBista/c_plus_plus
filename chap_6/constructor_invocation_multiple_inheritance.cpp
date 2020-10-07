#include<iostream>
using namespace std;

/**
 * Example on how constructors are invoked in multiple inheritance
 * 
 * author: ranjan-stha
 * 
 */

class Base1{
    public:
        Base1(){
            cout << "Base1 Constructor Called." << endl;
        }
};

class Base2{
    public:
        Base2(){
            cout << "Base2 Constructor Called." << endl;
        }
};

class Derived: Base2, Base1{
    public:
        Derived(){
            cout << "Derived Constructor Called." << endl;
        }
};

int main(){
    Derived d1;
    
    
    return 0;
}