#include<iostream>
using namespace std;

/**
 * Inheritance splitted over multiple files
 * 
 * Base class declaration 
 * 
 * author: ranjan-stha
 */

class Base{
    protected:
        int b_var;
    public:
        Base();
        Base(int);
        void show_base();
};