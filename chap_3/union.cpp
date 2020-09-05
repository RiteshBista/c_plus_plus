#include<iostream>
#include<cstring>
using namespace std;

/**
 * Example of Union
 * In Union, only one member can be properly used. This allows allocated
 * memory to be shared among the variables to efficiently use up the 
 * available memory. 
 * 
 * In the example below, age and dob have the same meaning. So, it is 
 * fine to know only one, i.e. either the age or date of birth.
 * 
 */

union person {
    int age;
    char dob[10];
};

int main() {
    union person p;
    
    p.age = 20;
    cout << "The age is " << p.age << endl;
    
    strcpy(p.dob, "01-07-2000");
    cout << "The dob is " << p.dob << endl;
    
    cout << "The age is " << p.age << endl;
    
    return 0;
}
