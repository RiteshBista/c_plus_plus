#include<iostream>
#include<cmath>
using namespace std;

/**
 * A simple Template example that calculates the roots of a quadratic equation
 * 
 * author: ranjan-stha
 */

template<class T>
void find_roots(T a, T b, T c){  // a, b, c are coefficients of quad eqn.
    T det;  // discriminant
    float root1, root2;
    
    det = b * b - 4 * a * c;
    if(det > 0){
        root1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
        root2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
        cout << "The roots are real and different " << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }else if(det == 0){
        root1 = root2 = -b / (2.0 * a);
        cout << "The roots are real and same " << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }else{
        float real, imag;
        real = -b/(2.0 * a);
        imag = sqrt(-1 * (b * b - 4 * a * c)) / (2.0 * a);
        cout << "The roots are complex " << endl;
        cout << "Root 1: " << real << " + i " << imag << endl;
        cout << "Root 2: " << real << " - i " << imag << endl;
    }
}

int main(){
    find_roots(1, -5, 6);
    
    find_roots(2.5, 1.1, 5.5);
    
    return 0;
}