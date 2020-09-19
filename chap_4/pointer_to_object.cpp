#include<iostream>
using namespace std;

/**
 * The program illustrates how we can use object pointers to access the 
 * member functions belonging to a class of which object is an instance of.
 */ 

class Customer {
    private:
        int id;
        float expenditure;
        float discount;
    public:
        Customer() {}
        Customer(int, float);
        void calc_discount();
        void display();
};

Customer::Customer(int c_id, float expenses){
    id = c_id;
    expenditure = expenses;
}

void Customer::calc_discount(){
    if(expenditure > 10000.){
        discount = 0.1 * expenditure;
    } else {
        discount = 0.05 * expenditure;  
    }
}

void Customer::display(){
    cout << "The discount is Rs. " << discount << endl;
}

int main(){
    Customer c(1, 5000), *cp;
    
    cp = &c; // referencing
    cp->calc_discount(); // pointer calling the member function
    cp->display(); // pointer calling member function.
    
    return 0;
}
