#include<iostream>
using namespace std;

/**
 * Illustration of basic Polymorphism in OOP
 * 
 * author: ranjan-stha
 */

class Base {
    public:
        Base(){}
        virtual void display(){  // remove virtual and see the changes
            cout << "I am from Base" << endl;
        }
};

class Derived: public Base{
    public:
        Derived(){}
        void display(){  // virtual keyword is optional in derived class.
            cout << "I am from Derived" << endl;
        }
};

int main(){
    Base *bptr;
    bptr = new Derived();
    bptr->display();
    
    return 0;
}