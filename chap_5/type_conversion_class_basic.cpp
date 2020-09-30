#include<iostream>
using namespace std;

/**
 * Type Conversion from Class Type to Basic Type
 * 
 * For this to accomplish, we could overload the Casting Operator
 * 
 * In this particular example, we are trying to convert a class type object
 * that contains two data members to an integer type value by overloading
 * the casting operator int.
 * 
 * author: ranjan-stha
 */

class Distance{
    private:
        int feet;
        int inches;
    
    public:
        Distance(){}
        Distance(int f, int i):feet(f), inches(i){}
        
        operator int(){
            int total;
            total = feet * 12 + inches;
            return total;
        }
};

int main(){
    Distance d(5, 10);
    int val = d; // try this as well: int val = int(d);
    cout << "The converted value is " << val << endl;
    
    return 0;
}