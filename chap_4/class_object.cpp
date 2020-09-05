#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

/**
 * Example of a Class
 * This class employee has several private data members and to manipulate
 * these private members, there are public members which contains functions/methods
 * that can be accessed directly by the objects of this class.
 * 
 * Note that: the keyword private and public are known as Access Specifiers
 * The keyword private is optional. If not mentioned, the declared data 
 * members are implicitly considered as private members.
 * 
 * author: ranjan-stha
 */

class employee {
    private: // optional keyword
        int id;
        float salary;
        char fullname[20];
    
    public:
        void set_id(int id_val){
            id = id_val;
        }
        
        void set_salary(float sal){
            salary = sal;
        }
        
        void set_name(char *name) {
            strcpy(fullname, name);
        }
        
        void display_info(){
            cout << setw(10) << "Name: \t" << fullname << endl;
            cout << setw(10) << "ID: \t" << id << endl;
            cout << setw(10) << "Salary: \t" << salary << endl;
        }
};

int main() {
    employee e1, e2;
    // e1.id = 1; // Generates error
    e1.set_id(1); // Calls the member function set_id (also known as setter)
    e1.set_name("Ram");  // Calls the member function set_name (also known as setter)
    e1.set_salary(5000.0); // Calls the member function set_salary (also known as setter)
    
    e2.set_id(2);   // Calls the member function set_id (also known as setter)
    e2.set_name("Hari");  // Calls the member function set_name (also known as setter)
    e2.set_salary(10000.0);  // Calls the member function set_salary (also known as setter)
    
    e1.display_info();  // Calls the member function display_info 
    cout << endl; // Line feed (\n)
    e2.display_info();  // Calls the member function display_info
    
    return 0;
}
