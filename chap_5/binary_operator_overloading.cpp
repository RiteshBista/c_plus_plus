#include<iostream>
using namespace std;

/**
 * 
 * Binary Operator Overloading (+)
 * 
 * This program uses binary operator overlaoding (+) to add two complex
 * numbers.
 * 
 * author: ranjan-stha
 */
 
class Complex{
    private:
        float real;
        float imag;
    
    public:
        Complex(){}
        Complex(float r, float i):real(r), imag(i){}
        
        Complex operator+(Complex);
        
        void display();
};

Complex Complex::operator+(Complex c){
    Complex temp;
    temp.real = this->real + c.real;
    temp.imag = this->imag + c.imag;
    
    return temp;
}

void Complex::display(){
    cout << "The complex number is " << this->real << " +i" << this->imag << endl;
}

int main(){
    Complex c1(2, 3), c2(4, 5), c3;
    
    c3 = c1 + c2;  // equivalent of c1.operator+(c2)
    
    c1.display();
    c2.display();
    c3.display();
    
    
    return 0;
}