#include<iostream>
using namespace std;

/**
 * Example to illustrate this pointer
 * 
 * author: ranjan-stha
 */

class Employee {
    private:
        int id;
        float salary;
    
    public:
        Employee(int identifier, float sal){
            this->id = identifier;
            this->salary = sal;
        }
        
        void display(){
            cout << "Employee ID is " << this->id << " and the salary is " << this->salary << endl;
        }
        
        ~Employee(){
            cout << "The destructor is called" << endl;
        }
};


int main(){
    Employee e1(1, 10000), e2(3, 45000);
    
    e1.display();
    e2.display();
    
    return 0;
}