#include<iostream>
#include<iomanip>
using namespace std;

/**
 * Example of Manipulator
 * Example illustrating left, right, and internal.
 */ 

int main(){
    int bb1 = 100, bb2 = 1000, bb3 = -200, bb4 = -500;
    // replace right with internal and try to observe the change.
    cout << setw(20) << left << "Name" << setw(15) << right << "Bank Balance" << endl;
    cout << setw(20) << left << "Raj Shrestha" << setw(15) << right << bb1 << endl;
    cout << setw(20) << left << "Ram Khadka" << setw(15) << right << bb2 << endl;
    cout << setw(20) << left << "Hari Prasad Khadka" << setw(15) << right << bb3<< endl;
    cout << setw(20) << left << "Niraj Sherchan" << setw(15) << right << bb4 << endl;
    
    return 0;
}