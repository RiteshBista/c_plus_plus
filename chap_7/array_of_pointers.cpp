#include<iostream>
#include<cstring>
using namespace std;

/**
 * Array of Pointers to Base class
 * 
 * author: ranjan-stha
 */

class College{
    protected:
        int employee_id;
        char employee_name[20];
    public:
        College(){}
        College(char *emp_name){
            strcpy(employee_name, emp_name);
        }
        virtual void display_name(){
            cout << "I am from base display_name" << endl;
        }
        virtual void display_wh(){
            cout << "I am from base display_wh" << endl;
        }
};

class Management: public College{
    protected:
        float working_hours;
    public:
        Management(){}
        Management(char *emp_name, float wh):College(emp_name){
            working_hours = wh;
        }
        void display_name(){
            cout << "The employee from mgmt team is " << employee_name << endl;    
        }
        void display_wh(){
            cout << "The working hours is " << working_hours << endl;
        }
};

class Department: public College{
    protected:
        float working_hours;
    public:
        Department(){}
        Department(char *emp_name, float wh):College(emp_name){
            working_hours = wh;
        }
        void display_name(){
            cout << "The employee from dept is " << employee_name << endl;
        }
        void display_wh(){
            cout << "The working hours for teachers: " << working_hours << endl;
        }
};

int main(){
    Management m("Ram", 10);
    Department d("Hari", 7);
    
    College *c[2] = {&m, &d};
    
    c[0]->display_name();
    c[0]->display_wh();
    
    c[1]->display_name();
    c[1]->display_wh();
    
    return 0;
}