#include<iostream>
using namespace std;

/**
 * 
 * Illustration of dynamic_cast operator
 * 
 * author: ranjan-stha
 */

class Base{
    public:
        virtual void display(){
            cout << "I am from Base" << endl;
        }
};

class Derived: public Base{
    public:
        void display(){
            cout << "I am from Derived" << endl;
        }
        void display2(){
            cout << "I am from display2()" << endl;
        }
};

int main(){
    Base *b = new Derived();
    b->display();
    //b->display2(); // produces error
    
    Derived *d = dynamic_cast<Derived *>(b);
    if(d){
        d->display();
        d->display2();
    }else
        cout << "Cannot cast" << endl;
    
    return 0;
}