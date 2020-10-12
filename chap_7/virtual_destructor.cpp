#include<iostream>
using namespace std;

/**
 * Illustration of virtual Destructor in Polymorphism
 * 
 * author: ranjan-stha
 */

class Base{
    public:
        Base(){
            cout << "Base Constructor is called" << endl;
        }
        virtual ~Base(){
            cout << "Base Destructor is called" << endl;
        }
};

class Derived: public Base{
    public:
        Derived(){
            cout << "Derived Constructor is called" << endl;
        }
        ~Derived(){
            cout << "Derived Destructor is called" << endl;
        }
};

int main(){
    Base *bptr = new Derived();
    delete bptr;
    
    return 0;
}