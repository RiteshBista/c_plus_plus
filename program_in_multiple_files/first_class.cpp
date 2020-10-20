#include "first_class.h"

First::First(){}

First::First(int v){
    this->val = v;
}

void First::display() const{
    cout << "The value is " << this->val << endl;
}