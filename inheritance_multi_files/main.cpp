#include<iostream>
#include "base.h"

using namespace std;

/**
 * Inheritance splitted over multiple files
 * 
 * author: ranjan-stha
 */

class Derived: public Base{
    protected:
        int d_var;
    public:
        Derived(int b_v, int d_v):Base(b_v){
            d_var = d_v;
        }
        void show_derived(){
            cout << d_var << endl;
        }
};

int main(){
    Derived d(6, 10);
    d.show_base();
    d.show_derived();
    
    return 0;
}