#include<iostream>
using namespace std;

/**
 * Stream objects overloading
 */

class Complex{
    private:
        float real, imag;
    public:
        Complex(){
            real = 0;
            imag = 0;
        }
        Complex(float r, float i){
            real = r;
            imag = i;
        }
        friend ostream & operator << (ostream &, const Complex &);
        friend istream & operator >> (istream &, Complex &);
};

ostream & operator << (ostream &out, const Complex &c){
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

istream & operator >> (istream &in, Complex &c){
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main(){
    Complex c;
    cin >> c;
    cout << "The complex number is " << c;
    
    return 0;
}