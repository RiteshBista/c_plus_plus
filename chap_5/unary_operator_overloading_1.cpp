#include<iostream>
using namespace std;

/**
 * Overload the unary operator - to negate the value of the object.
 *
 * author: ranjan-stha
 */
 
class Minus {
    private:
        int val;
    
    public:
        Minus(){}
        Minus(int v):val(v){}
        
        void operator-(){
            val = -val;
        }
        // Use the below function if you want to assign the result to an object.
        /*Minus operator-(){
            Minus m;
            m.val = -this->val;
            return m;
        }*/
        
        void display(){
            cout << "The value is " << val << endl;
        }
};

int main(){
    Minus m1(5);
    m1.display();
    -m1; //m1 = -m1;
    m1.display();
    -m1; //m1 = -m1;
    m1.display();
    
    return 0;
}