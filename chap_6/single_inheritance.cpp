#include<iostream>
using namespace std;

/**
 * Example of a Single Inheritance
 * 
 * author: ranjan-stha
 */

class Company{
    private:
        int id=0;
    protected:
        float salary;
    public:
        void display_salary() const{
            cout << "The salary is " << this->salary << endl;
        }
};

class Account : Company{
    private:
        float bonus;
    public:
        Account(){}
        Account(float s){
            this->salary = s;
        }
        void calc_bonus(){
            this->bonus = 0.1 * this->salary;
        }
        void display() const{
            this->display_salary();
            //cout << "The id is " << this->id << endl; // This line produces error
            cout << "The bonus is " << this->bonus << endl;
        }
};

int main(){
    Account acc(20000);
    acc.calc_bonus();
    
    acc.display();
    
    return 0;
}