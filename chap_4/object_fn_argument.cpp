#include<iostream>
using namespace std;

/**
 * Example of passing object as function argument in the class.
 * 
 * author: ranjan-stha
 */
 
class Complex {
  private:
    float real_part;
    float img_part;

  public:
    Complex(){}
    Complex(float real, float img){
        real_part = real;
        img_part = img;
    }
    Complex add(Complex c){
        Complex sum;
        sum.real_part = real_part + c.real_part;
        sum.img_part = img_part + c.img_part;
        
        return sum;
    }
    
    void display(){
        cout << "The value is " << real_part << "+i" << img_part << endl;
    }
};

int main(){
    Complex c1(2, 3), c2(5, 7), c3;
    c3 = c1.add(c2);
    
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}