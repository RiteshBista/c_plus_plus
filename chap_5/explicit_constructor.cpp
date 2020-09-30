#include<iostream>
using namespace std;

/**
 * Explicit Constructor
 * 
 * If you use explicit keyword, it enforces you to explicitly define the 
 * function and no automatic calling happens.
 * 
 * author: ranjan-stha
 */

class Test{
    private:
        int val;
    
    public:
        Test(){}
        explicit Test(int v):val(v){}
        void display(){
            cout << val << endl;
        }
};

int main(){
    Test t1;
    t1 = Test(5);
    t1.display();
    
    return 0;
}