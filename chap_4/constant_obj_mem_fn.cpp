#include<iostream>
using namespace std;

/**
 * Example of const object and const member function
 */

class Test{
    int id;
    
    public:
        Test(){}
        Test(int val){
            id = val;
        }
        void display() const;
};

void Test::display() const {
    // try to modify the value of id by using increment operator
    cout << id << endl; 
}

int main(){
    const Test t1(10);
    t1.display();
    
    return 0;
}