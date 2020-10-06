#include<iostream>
using namespace std;

/**
 * Example of Multi-Level Inheritance
 * 
 * In Multi-level Inheritance, you need to take special care of the 
 * visibility modes in each inheritance so that the required features
 * are derived in the inherited class 
 * 
 * author: ranjan-stha
 * 
 */ 

class Vehicle{
    protected:
        float cost;
    public:
        Vehicle(){}
        Vehicle(float c): cost(c){}
        void display() const{
            cout << "The cost is " << this->cost << endl;
        }
};

class Car : Vehicle {
    protected:
        float cost_of_ac;
    public:
        Car(){}
        Car(float c, float ac):Vehicle(c){
            this->cost_of_ac = ac;
        }
        void display() const{
            Vehicle::display();
        }
};

class Hatchback : Car {
    public:
        Hatchback(float c, float ac):Car(c, ac){}
        void display() const {
            cout << "It is a Hatchback car e.g. Hyundai i10" << endl;
            cout << "The cost of AC is " << this->cost_of_ac << endl;
            Car::display();
        }
};


int main(){
    Hatchback i10(2500000, 35000);
    
    i10.display();
    
    return 0;
}