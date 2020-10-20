#include "second_class.h"

Second::Second(){
    this->s_val = 0;
    this->result = 0;
}

Second::Second(int val){
    this->s_val = val;
    this->result = 0;
}

void Second::square_me(){
    this->result = this->s_val * this->s_val;
}

void Second::display() const{
    cout << "The result is " << this->result << endl;
}