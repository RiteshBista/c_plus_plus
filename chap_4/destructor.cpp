#include<iostream>
using namespace std;

/**
 * Example of Destructor
 */

class Student {
    private:
        int id=0;
    public:
        Student(){
            cout << "Default Constructor function is called" << endl;
        }
        Student(int i){
            cout << "Parameterized Constructor function is called" << endl;
            id = i;
        }
        
        ~Student(){
            cout << "Destructor function is called with id " << id << endl;
        }
};

int main(){
    Student s1, s2(10);

    return 0;
}