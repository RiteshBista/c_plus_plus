#include<iostream>
using namespace std;

#define PI 3.14

/**
 * Example of Pure Virtual Function and Abstract Class
 *
 * author: ranjan-stha
 */

class Shape{
    protected:
        float first_dimension;
        float area;
    public:
        Shape(){}
        Shape(float first){
            first_dimension = first;
        }
        virtual void calc_area() = 0; // pure virtual function
        virtual void display() = 0; // pure virtual function
};

class Circle: public Shape{
    public:
        Circle(){}
        Circle(float f):Shape(f){}
        void calc_area(){
            area = PI * first_dimension * first_dimension;
        }
        void display(){
            cout << "The area of circle is " << area << endl;
        }
};

class Rectangle: public Shape{
    protected:
        float second_dimension;
    public:
        Rectangle(){}
        Rectangle(float f, float s):Shape(f){
            second_dimension = s;
        }
        void calc_area(){
            area = first_dimension * second_dimension;
        }
        void display(){
            cout << "The area of rectangle is " << area << endl;
        }
};

int main(){
    Shape *s;
    
    Circle c(2.0f);
    Rectangle r(3.0f, 4.0f);
    
    s = &c;
    s->calc_area();
    s->display();
    
    s = &r;
    s->calc_area();
    s->display();
    
    return 0;
}