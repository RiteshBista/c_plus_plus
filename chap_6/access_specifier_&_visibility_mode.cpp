#include<iostream>
using namespace std;

/**
 * 
 * Multi-level Inheritance example to explain about the Access Specifiers
 * and Visibility Mode and how they affect at each stage of Inheritance
 * 
 * author: ranjan-stha
 */

class Base{
    private:
        int b_var = 5;
    protected:
        int b_p_var = 10;
    public:
        void display_base(){
            cout << "I am from Base Class" << endl;
        }
};

class Derived1 : public Base{
    private:
        int d1_var = 20;
    protected:
        int d1_p_var = 30;
    public:
        void display_derived1(){
            cout << "I am from Derived Class 1" << endl;
        }
};

class Derived2 : public Derived1{
    private:
        int d2_var = 40;
    protected:
        int d2_p_var = 50;
    public:
        void display_derived2(){
            cout << "I am from Derived Class 2" << endl;
        }
};


int main(){
    Derived2 d2;
    
    d2.display_derived2();
    d2.display_derived1();
    d2.display_base();
    
    return 0;
}