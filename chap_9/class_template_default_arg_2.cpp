#include<iostream>
using namespace std;

/**
 * Class Template with multiple arguments & default arguments
 * 
 * author: ranjan-stha
 */

template<class T1, class T2=char>
class Test{
    private:
        T1 var1;
        T2 var2;
    public:
        Test(T1 v1, T2 v2){
            this->var1 = v1;
            this->var2 = v2;
        }
        void display(){
            cout << this->var1 << "\t" << this->var2 << endl;
        }
};

int main(){
    Test <int> t1(2, 'a');
    Test <int, float> t2(2, 2.5);
    
    t1.display();
    t2.display();
    
    return 0;
}