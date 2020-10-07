#include<iostream>
using namespace std;

/**
 * Example on how constructors are invoked (in which order of execution)
 * 
 * author: ranjan-stha
 * 
 */

class Base1{
    protected:
        int b1_val;
    public:
        Base1(){}
        Base1(int v){
            b1_val = v;
            cout << "Base1 Parameterized Constructor is called." << endl;
        }
        ~Base1(){
            cout << "Base1 Destructor is called" << endl;
        }
};

class Base2{
    protected:
        int b2_val;
    public:
        Base2(){}
        Base2(int v){
            b2_val = v;
            cout << "Base2 Parameterized Constructor is called." << endl;
        }
        ~Base2(){
            cout << "Base2 Destructor is called" << endl;
        }
};


class Derived: Base2, Base1{
    protected:
        int d_val;
    public:
        Derived(){}
        Derived(int b1_v, int b2_v, int d_v):Base1(b1_v), Base2(b2_v){
            d_val = d_v;
            cout << "Derived Parameterized Constructor is called." << endl;
        }
        ~Derived(){
            cout << "Derived Destructor is called" << endl;
        }
};


int main(){
    Derived d1(5, 6, 7);
    
    
    return 0;
}