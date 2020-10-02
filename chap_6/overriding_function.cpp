#include<iostream>
using namespace std;

/**
 * 
 * Example of Overriding Function 
 * 
 * When the member functions in Base and Derived class have same name, return type,
 * argument list, then, the member function in Derived Class is said to have 
 * overridden the member function of the Base Class.
 * 
 * author: ranjan-stha
 */

class Base {
    private:
        int b_var;
    public:
        void display();
};

void Base::display(){
    cout << "I am from Base Class" << endl;
}

class Derived: public Base{
    private:
        int d_var;
    public:
        void display();  // Overriding function
};

void Derived::display(){
    cout << "I am from Derived Class" << endl;
}

int main(){
    Derived d;
    
    d.display();
    
    return 0;
}