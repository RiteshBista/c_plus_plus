#include<iostream>

using namespace std;

/*
This program creates a class called Student which includes some of the basic
information related to a student (data or attributes) and calculates the total and 
average marks (using functions/methods).

In the main function, an object 's' of class Student is created which assigns three 
parameters which invokes the Constructor function. The same object 's' is used to 
call the functions that calculates the total_marks and avg_marks and finally displays
the result using the display_result function.

The reserved keywords private, public and protected are known as access specifiers.

author: ranjan-stha

*/

class Student {
    private:
        char *name;
        int rollno;
        float *marks;
        float total_marks;
        float avg_marks;
    
    public:
        Student(char *name, int roll, float sub_marks[]){  // Constructor
            this->name = name;
            this->rollno = roll;
            this->marks = sub_marks;
        }
        
        void calc_total_marks(){
            for(int i=0;i<5;i++){
                this->total_marks += this->marks[i];
            }
        }
        
        void calc_avg_marks(){
            this->avg_marks = this->total_marks/5;
        }
        
        void display_result(){
            cout << "The total marks of " << this->name << " is " << this->total_marks << " and his average is " << this->avg_marks << endl;
        }
};


int main(){
    float marks[5] = {10.0, 20.0, 30.0, 40.0, 50.0};
    Student s("Raj", 10, marks); // Creating an object 's' of user defined datatype or class Student
    s.calc_total_marks(); // Calling the member function calc_total_marks using the object.
    s.calc_avg_marks();  // Calling the member function calc_avg_marks using the object.
    s.display_result(); // Calling the member function display_result using the object.
    
    return 0;
}
