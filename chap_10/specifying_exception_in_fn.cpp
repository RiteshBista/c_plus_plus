#include<iostream>
using namespace std;

/**
 * Specifying exception types in function definition
 * 
 * author: ranjan-stha
 */

void test_fn(int x) throw(int, char, double){ // empty throw list and check
    if (x==0){
        throw x;
    }else if(x==1){
        throw 'r';
    }else if(x==2){
        throw 1.5;
    }
}

int main(){
    try{
        test_fn(0);
    }catch(int i){
        cout << "Integer type exception caught: " << i << endl;
    }catch(char ch){
        cout << "Character type exception caught: " << ch << endl;
    }catch(double v){
        cout << "Double type exception caught: " << v << endl;
    }
    
    return 0;
}