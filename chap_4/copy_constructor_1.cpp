#include<iostream>
using namespace std;

/**
 * Example of Copy Constructor
 */

class Demo {
    private:
        int data1, data2;
    
    public:
       Demo(){}
       void getdata(int d1, int d2){
           data1 = d1;
           data2 = d2;
       }
       void displaydata(){
           cout << "data1 = " << data1 << ", data2 = " << data2 << endl;
       }
};

int main(){
    Demo demo1;
    demo1.getdata(5, 6);
    
    Demo demo2(demo1);
    
    //Demo demo2 = demo1;  // also possible
    
    //Demo demo2        // also possible
    //demo2 = demo1
    
    demo1.displaydata();
    demo2.displaydata();
    
    return 0;
}