#include<iostream>
using namespace std;

/**
 * Example of a Friend Function 
 * Friend function are not a part of Class but can access the data members 
 * like a member function 
 * Friend function is invoked normally without the use of the object as it 
 * is not a part of Class.
 * 
 * author: ranjan-stha
 */

class Computer;
class Electronics {
    private:
        float oop_marks_avg;
    
    public:
        Electronics(float marks){
            oop_marks_avg = marks;
        }
        friend void find_max(Electronics, Computer);
};

class Computer {
    private:
        float oop_marks_avg;
    
    public:
        Computer(float marks){
            oop_marks_avg = marks;
        }
        friend void find_max(Electronics, Computer);
};


// Normal Function which is a Friend to above two classes.
void find_max(Electronics e, Computer c){
    if (e.oop_marks_avg > c.oop_marks_avg){
        cout << "Electronics Won !!" << endl;
    } else {
        cout << "Computer Won !!" << endl;
    }
}

int main(){
    Electronics e(45.5);
    Computer c(44.5);
    // Call the find_max function which is a friend to both Electronics and Computer Classes
    // Note that we haven't used object to invoke the function.
    find_max(e, c);  
    
    return 0;
}