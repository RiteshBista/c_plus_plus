#include<iostream>
#include<typeinfo>
using namespace std;

/**
 * Illustration of typeid operator
 * 
 * author: ranjan-stha
 */

class Base{
    public:
        virtual void display(){  // remove virtual to make it program non-polymorphic
            cout << "I am from Base" << endl;
        }
};

class Derived: public Base{
    public:
        void display(){
            cout << "I am from Derived" << endl;
        }
};

int main(){
    Base *b = new Derived();
    Base *b2 = new Base();
    
    cout << typeid(Base).name() << endl;
    cout << typeid(Derived).name() << endl;
    
    cout << typeid(*b).name() << endl;
    
    cout << typeid(*b2).name() << endl;
    
    return 0;
}