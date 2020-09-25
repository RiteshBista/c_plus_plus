#include<iostream>
using namespace std;

/**
 * 
 * Binary Operator Overloading (*)
 * 
 * This program uses binary operator overlaoding (*) to multiply two complex
 * numbers using friend function.
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
        void display();
        
        friend Complex operator*(Complex, Complex);
};

void Complex::display(){
    if(this->imag > 0)
        cout << "The complex number is " << this->real << " + i " << this->imag << endl;
    else if (this->imag < 0)
        cout << "The complex number is " << this->real << " - i " << this->imag * (-1) << endl;
    else
        cout << "The complex number is " << this->real << endl;
}

Complex operator*(Complex x, Complex y){
    Complex temp;
    
    temp.real = x.real * y.real - x.imag * y.imag;
    temp.imag = x.real * y.imag + x.imag * y.real;
    
    return temp;
}

int main(){
    Complex c1, c2, c3;
    c1 = Complex(3, 3);
    c2 = Complex(7, -5);
    
    c3 = c1 * c2;
    
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}