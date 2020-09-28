#include<iostream>
using namespace std;

/**
 * Overload operator + for adding two objects, one object and one basic data
 * type variable etc.
 * 
 * Test the friend function by uncommenting it and comment the overloaded
 * member function which takes int as an argument.
 */
 
class Add{
    private:
        int val;
    
    public:
        Add(){}
        Add(int v){
            val = v;
        }
        Add operator+(Add second){
            Add *temp = new Add(this->val + second.val);
            return *temp;
        }
        Add operator+(int second){
            Add *temp = new Add(this->val + second);
            return *temp;
        }
        
        void display(){
            cout << "The sum is " << this->val << endl;
        }
        
        //friend Add operator+(Add, int);
};

/*Add operator+(Add first, int second){
    Add *temp = new Add(first.val + second);
    return *temp;
}*/


int main(){
    Add first(5), second(6), sum1, sum2;
    sum1 = first + second;  // equivalent to sum1 = first.operator+(second)
    
    sum1.display();
    
    sum2 =  first + 3; // equivalent to sum2 = first.operator+(3) in case of member function
                        // equivalent to sum2 = operator+(first, 3) in case of friend function or non-member function
                        // also try sum2 = 3 + first and see why it fails in case member function and works in case of non-
                        // member function (or friend function)
    
    sum2.display();
    
    
    return 0;
}