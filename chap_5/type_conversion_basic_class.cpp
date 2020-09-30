#include<iostream>
using namespace std;

/**
 * Type Conversion from Basic Type to Class Type
 * 
 * For this to accomplish, we could use the Parameterized Constructor
 * In this particular example, we are trying to convert an integer value
 * to Time data type that contains hour, minute and second as data members.
 * 
 * author: ranjan-stha
 */

class Time{
    private:
        int hr;
        int min;
        int sec;
    public:
        Time(){}
        Time(int val){
            int rem;
            this->hr = val/3600;
            rem = val%3600;
            this->min = rem/60;
            rem = rem%60;
            this->sec = rem;
        }
        void display() const{
            cout << "The time is " << this->hr << ":" << this->min << ":" << this->sec << endl;
        }
};

int main(){
    Time t1;
    int value = 3800;
    t1 = value;  // t1 = Time(value); // Try this explicit conversion as well
    t1.display();
    
    return 0;
}