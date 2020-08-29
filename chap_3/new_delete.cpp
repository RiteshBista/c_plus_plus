#include <iostream>
using namespace std;

/*
This program shows how we can use the keywords new and delete for 
dynamic memory allocation. The pointer points to the newly created
memory location. Also, one can assign a value to that memory
location where the pointer is pointing.

Later the pointer can deleted if not required.

author: ranjan-stha

*/

int main(){
    int *my_num = new int(5);
    if(!my_num){
        cout << "Null pointer returned !! Exiting" << endl;
        exit(0);
    }
    
    cout << *my_num << endl;
    delete my_num; // deletes the pointer
    return 0;
    
}