#include<iostream>
using namespace std;

/**
 * Example of a Class Implementation
 * 
 * The example teaches you how to write member functions outside of the class.
 */

class Customer{
    private:
        int id;
        char name[128];
        double expenditure;
        double bonus_points;
        bool important_customer;
    
    public:
        void get_info();
        void calc_bonus_points();
        float get_bonus_points();
        bool is_important();
        
        char * get_name(){
            return name;
        }
};

void Customer::get_info(){
    cout << "Enter your ID: ";
    cin >> id;
    cin.get();
    cout << "Enter your name: ";
    cin.getline(name,128); // cin >> name; 
    cout << "Enter your expenditure: ";
    cin >> expenditure;
    cout << "Enter the initial bonus point: ";
    cin >> bonus_points;
}

void Customer::calc_bonus_points(){
    if (expenditure < 100) {
        bonus_points += 5;
    } else if (expenditure < 1000) {
        bonus_points += 20;
    } else if (expenditure < 10000) {
        bonus_points += 50;
    } else {
        bonus_points += 100;
    }
}

float Customer::get_bonus_points() {
    return bonus_points;
}

bool Customer::is_important() {
    if (expenditure >= 100000){
        important_customer = true;
    }else{
        important_customer = false;
    }
    return important_customer;
}


int main(){
    
    Customer customer1;
    
    customer1.get_info();
    customer1.calc_bonus_points();
    
    cout << "----------------------------" << endl;
    
    cout << "The total bonus points is " << customer1.get_bonus_points() << endl;
    
    if(customer1.is_important()){
        cout << customer1.get_name() << " is our valued customer." << endl;
    } else {
        cout << customer1.get_name() << " is not that very important." << endl;
    }
    
    return 0;
}
