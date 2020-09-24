#include<iostream>
using namespace std;

/**
 * Example of Copy Constructor
 */

class Demo{
    
    private:
        int data1, data2, *p;
    
    public:
        Demo(){
            p = new int;
        }
        
        // Note: Also try uncommenting the below function to see the changes in output
        /*Demo(Demo &d){
            data1 = d.data1;
            data2 = d.data2;
            p = new int;
            *p = *(d.p);
        }*/
        
        void getdata(int d1, int d2, int d3){
            data1 = d1;
            data2 = d2;
            *p = d3;
        }
        
        void modify_d3(int new_d3){
            *p = new_d3;
        }
        
        void showdata(){
            cout << "data1 = " << data1 << ", data2 = " << data2 << ", *p =" << *p << endl;
        }
};

int main(){
    Demo demo1;
    
    demo1.getdata(2, 4, 5);
    
    Demo demo2(demo1);
    
    demo2.showdata();
    
    demo1.modify_d3(10);
    
    demo2.showdata();
    
    
    return 0;
}