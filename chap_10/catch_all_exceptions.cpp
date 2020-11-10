#include<iostream>
using namespace std;

/**
 * Catches all exceptions using ellipses
 * 
 * author: ranjan-stha
 */

void test_fn(int x){
    try{
        if (x==0) throw x;
        if (x==1) throw 'p';
        if (x==2) throw 1.0;
    }catch(...){
        cout << "Catches all types of exceptions" << endl;
    }
}

int main(){
    test_fn(0);
    test_fn(1);
    test_fn(2);
    
    return 0;
}