#include<iostream>
using namespace std;

/**
 * Example of Multiple Inheritance
 * 
 * In Multiple Inheritance, the derived (or child) class inherits properties from 
 * a number of Base classes
 * 
 * author: ranjan-stha
 * 
 */
class OOP{
    protected:
        float theory_marks;
        float lab_marks;
    
    public:
        OOP(){}
        OOP(float t, float p):theory_marks(t), lab_marks(p){}
        void display(){
            cout << "OOP Theory Marks " << this->theory_marks << endl;
            cout << "OOP Practical Marks " << this->lab_marks << endl;
        }
};

class Microprocessor{
    protected:
        float theory_marks;
        float lab_marks;
    public:
        Microprocessor(){}
        Microprocessor(float t, float p):theory_marks(t), lab_marks(p){}
        void display(){
            cout << "MP Theory Marks " << this->theory_marks << endl;
            cout << "MP Practical Marks " << this->lab_marks << endl;
        }
};

class Student : OOP, Microprocessor {
    public:
        Student(){}
        //Student(float oop_t, float oop_p, float mp_t, float mp_p):OOP(oop_t, oop_p), Microprocessor(mp_t, mp_p){}
        Student(float oop_t, float oop_p, float mp_t, float mp_p){
            this->OOP::theory_marks = oop_t;
            this->OOP::lab_marks = oop_p;
            this->Microprocessor::theory_marks = mp_t;
            this->Microprocessor::lab_marks = mp_p;
        }
        // display() function is overridden.
        void display(){
            this->OOP::display();
            this->Microprocessor::display();
        }
};

int main(){
    Student Ram(60, 35, 55, 40);
    Ram.display();
    
    
    return 0;
}