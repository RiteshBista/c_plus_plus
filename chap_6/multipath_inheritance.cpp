#include<iostream>
using namespace std;

/**
 * Example of Multi-Path Inheritance
 * 
 * The example also illustrates the Virtual Base Class to avoid the
 * ambiguous nature existed in multi-path inheritance.
 * 
 * author: ranjan-stha
 */

class Student{
    protected:
        int rollno;
    public:
        void set_rollno(int id){
            rollno = id;
        }
        int get_rollno(){
            return rollno;
        }
};

class OOP : virtual public Student{
    protected:
        float marks;
    public:
        OOP(){}
        OOP(float m):marks(m){}
};

class Microprocessor: virtual public Student{
    protected:  
        float marks;
    public:
        Microprocessor(){}
        Microprocessor(float m):marks(m){}
};

class Result: public OOP, public Microprocessor{
    private:
        float calc_average(){
            return (this->OOP::marks + this->Microprocessor::marks)/2;
        }
    public:
        Result(){}
        Result(float oop_m, float mp_m):OOP(oop_m), Microprocessor(mp_m){}
        void display(){
            cout << "The average is " << this->calc_average() << endl;
        }
};


int main(){
    Result r(30.5, 10.3);
    r.set_rollno(1);
    
    cout << "The roll is " << r.get_rollno() << endl;
    
    r.display();
    
    return 0;
}