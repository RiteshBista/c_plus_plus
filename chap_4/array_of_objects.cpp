#include<iostream>
#include<cstring>
using namespace std;

#define MAX 30

/**
 * This program illustrates how we can use array of objects.
 * The MAX size of the is defined in the macro.
 * 
 * Based on the number entered by the user, a loop is run to 
 * get the data of the students'. Later, the output is displayed
 * accordingly.
 */

class Student {
    private:
        int rollno;
        char name[32];
    
    public:
        void get_data();  // declaration
        void display();  // declaration
};

void Student::get_data(){
    cout << "Enter roll no ";
    cin >> rollno;
    cin.get();
    cout << "Enter name ";
    cin.getline(name, 32);
}

void Student::display(){
    cout << "The name is " << name << " and roll no is " << rollno << endl;
}

int main(){
    Student s[MAX]; // array created statically
    int n, i;
    cout << "How many students ";
    cin >> n;
    
    if(n < 1 || n > 30){
        cout << "Wrong choice. Enter between 1 and 30" << endl;
        exit(0);
    }
    // Get the students' data
    for (i=0; i<n; i++){
        s[i].get_data();
        cout << endl;
    }
    // Display students' data
    for(i=0; i<n; i++){
        s[i].display();
        cout << endl;
    }
    
    return 0;
}
