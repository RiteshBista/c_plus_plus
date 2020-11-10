#include<iostream>
using namespace std;

/**
 * Multiple types catch statements
 * 
 * author: ranjan-stha
 */

void test_fn(int x){
    try{
        if (x==0) throw x;
        if (x==1) throw 'p';
        if (x==2) throw 1.5;
    }catch(int x){
        cout << "Integer type exception caught: " << x << endl;
    }catch(char ch){
        cout << "Character type exception caught: " << ch << endl;
    }catch(double v){
        cout << "Double type exception caught: " << v << endl;
    }
}

int main(){
    test_fn(0);
    test_fn(1);
    test_fn(2);
    
    return 0;
}