#include<iostream>
using namespace std;

/**
 * Example of Copy Constructor
 */

class Item {
    float price;
    
    public:
        Item() {} // Default Constructor
        Item(float p){ // Parameterized Constructor and Overloaded
            price = p;
        }
        Item(Item &x){ // Parameterized Constructor and Overloaded
            price = x.price;
        }
        float get_price(){
            return price;
        }
};

int main(){
    Item headphone(1000); // Parameterized Constructor called.
    Item charger(headphone); // Parameterized Constructor called.
    Item power_bank = headphone; // Parameterized Constructor called.
    
    Item keyboard; // Default Constructor called.
    keyboard = charger; // member to member data copied.
    
    cout << "Price of head phone: " << headphone.get_price() << endl;
    cout << "Price of charger: " << charger.get_price() << endl;
    cout << "Price of power bank: " << power_bank.get_price() << endl;
    cout << "Price of keyboard: " << keyboard.get_price() << endl;
    
    return 0;
}