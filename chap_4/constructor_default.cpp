#include<iostream>
using namespace std;

/**
 * Example of a Default Constructor
 * When objects are created, the constructor function
 * is invoked automatically
 */

class Student {
    public:
        Student(){
            cout << "The constructor is called." << endl;
        }
};

int main(){
    Student s1, s2;
    
    return 0;
}