#include<iostream>
using namespace std;

/**
 * Example of Class Template
 * 
 * author: ranjan-stha
 */

template<class T>
class Complex{
    private:
        T real;
        T imag;
    public:
        Complex(){
            this->real = this->imag = 0;
        }
        Complex(T r, T i){
            this->real = r;
            this->imag = i;
        }
        Complex add(Complex c){
            this->real += c.real;
            this->imag += c.imag;
            return *this;
        }
        
        void display(){
            cout << "Real: " << this->real << ", Imag: " << this->imag << endl;
        }
};

int main(){
    Complex <int> c1(2, 3), c2(4, 5), c3;
    Complex <float> c4(3.4, 4.5), c5(1.2, 1.1), c6;
    c3 = c1.add(c2);
    c6 = c4.add(c5);
    
    c3.display();
    c6.display();
    
    return 0;
}