#include<iostream>
using namespace std;

/**
 * Templates used for Derived/Base Class
 * 
 * author: ranjan-stha
 */

template<class T1>
class Base{
    protected:
        T1 b_val;
    public:
        Base(){
            b_val = 0;
        }
        Base(T1 b_v){
            b_val = b_v;
        }
        void display(){
            cout << b_val << endl;
        }
};

template<class T1, class T2>
class Derived: public Base<T1>{
    private:
        T2 d_val;
    public:
        Derived(){
            d_val = 0;
        }
        Derived(T1 b_v, T2 d_v):Derived::Base(b_v){
            d_val = d_v;
        }
        void display(){
            this->Base<T1>::display();
            cout << d_val << endl;
        }
};


int main(){
    Derived <int, float> d(2, 2.5);
    d.display();
    
    return 0;
}