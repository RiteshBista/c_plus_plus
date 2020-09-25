#include<iostream>
using namespace std;

/**
 * 
 * Overloading unary operator ++ using pre and post
 * 
 * The program increments the object using pre- and post- unary increment
 * operator ++.
 * 
 * author: ranjan-stha
 */

class Counter {
    private:
        int c;
    
    public:
        Counter(){
            c = 0;
        }
        void operator++(){
            ++c;
        }
        void operator++(int){
            c++;
        }
        void display(){
            cout << "The value is " << c << endl;
        }
};


int main(){
    Counter c1;
    c1.display();
    c1++;
    c1.display();
    ++c1;
    c1.display();
    c1++;
    c1.display();
    
    return 0;
}