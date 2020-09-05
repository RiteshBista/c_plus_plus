#include<iostream>
using namespace std;

/**
 * Comparison between Structure and union
 * Structure calculates the total memory based on its elements
 * and structure has access to all its elements
 * Union calculates the total memory equivalent to the memory occupied
 * by the largest member variable. Such allocated memory space is shared
 * among the variables and is properly available for only one of the members.
 * 
 */

struct person1 {
    int age;
    char dob[10];
};

union person2 {
    int age;
    char dob[10];
};

int main()
{
    struct person1 p1;
    union person2 p2;
    // Calculating the amount of memory allocated by 
    // Structure and Union variables/objects.
    cout << "Structure memory allocation: " << sizeof(p1) << endl;
    cout << "Union memory allocation: " << sizeof(p2) << endl;
    
    return 0;
}
