#include<iostream>
using namespace std;

/**
 * Class Template with multiple arguments
 * 
 * author: ranjan-stha
 */

template<class T1, class T2>
class Display{
    T1 var1;
    T2 var2;
    
    public:
        Display(T1 v1, T2 v2){
            this->var1 = v1;
            this->var2 = v2;
        }
        void display(){
            cout << this->var1 << "\t" << this->var2 << endl;
        }
};

int main(){
    Display <int, float> d1(2, 2.5);
    Display <float, char> d2(3.4, 'a');
    
    d1.display();
    d2.display();
    
    return 0;
}