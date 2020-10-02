#include<iostream>
using namespace std;

/**
 * Example illustrating the Base and Derived classes relationship
 * 
 * Based on the Access Specifiers and Visibility-Mode, certain members are inherited from Base to Derived
 * 
 * author: ranjan-stha
 */

class Base{
    private:
        int b_var = 10;
    protected:
        int b_p_var = 5;
    public:
        void display_base(){
            cout << "I am from Base" << endl;
        }
};

// The visibility mode private is optional and if not present is by default private
class Derived: private Base{ 
    private:
        int d_var = 20;
    public:
        void display_derived(){
            //cout << this->b_var << endl; // produces error
            cout << this->b_p_var << endl;
            cout << this->d_var << endl;
            this->display_base();
            cout << "I am from Derived" << endl;
        }
};

int main(){
    Derived d;

    d.display_derived();
    // This produces error when the visibility-mode is private
    // but works if it is public in the derived class.
    //d.display_base();    
    
    return 0;
}