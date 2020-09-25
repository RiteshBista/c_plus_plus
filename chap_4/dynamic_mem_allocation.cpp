#include<iostream>
using namespace std;

/**
 * Example of Dynamic Memory Allocation(DMA) for class objects
 */

class Employee{
    private:
        int id;
        
    public:
        Employee(){
            cout << "Constructor called" << endl;
        }
        void set_id(int i){
            id = i;
        }
        void display(){
            cout << "Employee id " << id << endl;
        }
        ~Employee(){
            cout << "Destructor called" << endl;
        }
};

int main(){
    int n;
    
    cout << "Enter n ";
    cin >> n;
    
    Employee *e = new Employee[n];
    
    for(int i=0; i<n; i++){
        (e+i)->set_id(i);
    }
    
    for(int i=0; i<n; i++){
        (e+i)->display();
    }
    
    delete []e;
    
    return 0;
}