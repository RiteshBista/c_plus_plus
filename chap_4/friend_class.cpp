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
        float tax_res;
        void calc_tax(){
            tax = 0.15 * salary;
        }
        void calc_resource_tax(){
            tax_res = 0.01 * salary;
        }
    public:
        Employee(int id, float sal) {
            eid = id;
            salary = sal;
        };
        friend class Finance; // Class Finance is a friend of Class Employee
        
};

class Finance {
    public:
        void check_emp_details(Employee e){
            e.calc_tax();
            e.calc_resource_tax();
            cout << "Tax is " << e.tax << endl;
            cout << "Resource tax is " << e.tax_res << endl;
            cout << "Net Salary is " << e.salary - e.tax - e.tax_res << endl;
        }
};

int main(){
    Employee emp(1, 10000);
    Finance fdept;
    fdept.check_emp_details(emp);
    
    return 0;
}