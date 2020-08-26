#include<iostream>

using namespace std;

/*
This simple program creates a class called Student which includes some of the basic
information related to a student (data or attributes) and gets the student information
using get_data function and displays the information using display_data function.

The cin and cout objects are used to get input from the user and display the data
in the screen respectively.

The reserved keywords private, public and protected are known as access specifiers.

author: ranjan-stha

*/

class Student {
    private:
        char name[20];
        int rollno;
        char study_level[20];
    
    public:
        void get_data(){
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollno;
            cout << "Enter your study level: ";
            cin >> study_level;
        }
        
        void display_data(){
            cout << name << " studies in " << study_level << " level and his/her roll no is " << rollno << endl;
        }
};


int main(){
    Student s; // Creating an object 's' of class Student.
    s.get_data(); // The object 's' calls its member function get_data.
    s.display_data(); // The object 's' calls its member function display_data.
    
    return 0;
}