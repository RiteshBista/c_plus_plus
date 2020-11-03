#include "base.h"

/**
 * Inheritance splitted over multiple files
 * 
 * Base class definition
 * 
 * author: ranjan-stha
 */

Base::Base(){}

Base::Base(int b_v){
    b_var = b_v;
}

void Base::show_base(){
    cout << b_var << endl;
}