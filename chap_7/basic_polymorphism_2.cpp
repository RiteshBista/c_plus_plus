#include<iostream>
using namespace std;

/**
 * Illustration of basic Polymorphism in OOP using Hierarchical Inheritance
 * 
 * author: ranjan-stha
 */

class Shape{
    public:
        virtual void display(){
            cout << "I am the Base" << endl;
        }
};

class Circle: public Shape{
    public:
        void display(){
            cout << "I have round shape" << endl;
        }
};


class Rectangle: public Shape{
    public:
        void display(){
            cout << "I have each two sides of equal dimension" << endl;
        }
};

class Square: public Rectangle{
    public:
        void display(){
            cout << "I have four sides with equal dimension" << endl;
        }
};


int main(){
    Shape *s;
    s = new Circle();
    s->display();
    
    s = new Rectangle();
    s->display();
    
    s = new Square();
    s->display();
    
    return 0;
}