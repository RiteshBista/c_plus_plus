#include<iostream>
using namespace std;

/**
 * Example of Friend Class
 * 
 * author: ranjan-stha
 */ 

class Finance;

class Employee {
    private:
        int eid;
        float salary;
        float tax;
    public:
        Employee(int id, float sal) {
            eid = id;
            salary = sal;
        };
        friend class Finance; // Class Finance is a friend of Class Employee
        void calc_tax(){
            tax = 0.15 * salary;
        }
};

class Finance {
    public:
        void check_emp_details(Employee e){
            e.calc_tax();
            cout << "Net Salary is " << e.salary - e.tax << endl;
        }
};

int main(){
    Employee emp(1, 10000);
    Finance fdept;
    fdept.check_emp_details(emp);
    
    return 0;
}