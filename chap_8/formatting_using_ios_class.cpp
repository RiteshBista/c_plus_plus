#include<iostream>
#include<cstring>
using namespace std;

/**
 * Example of Formatted I/O using ios class
 * 
 * author: ranjan-stha
 */

int main(){
    int items_id[4] = {10, 20, 30, 40};
    int cost[4] = {100, 200, 300, 400};
    
    // Width Example
    
    cout << " ------ width example --------" << endl;
    cout.width(5);
    cout << "ITEMS";
    cout.width(8);
    cout << "COST";
    cout << endl;
    
    for (int i=0;i<4;i++){
        cout.width(5);
        cout << items_id[i];
        cout.width(8);
        cout << cost[i];
        cout << endl;
    }
    
    // Precision Example
    cout << " ------ precision example --------" << endl;
    const float PI = 3.14159265358;
    
    cout << PI << endl;
    cout.precision(7);
    cout << PI << endl;
    
    // Fill Example
    cout << " ------- fill example --------" << endl;
    cout.fill('*');
    cout.width(7);
    cout << 44 << endl;
    
    // setf Example
    cout << " ------- setf example ---------" << endl;
    cout.fill('$');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(15);
    cout << "Country" << endl;
    
    cout << " ------- another setf example -------" << endl;
    cout.precision(4);
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.width(15);
    cout << -12.4566336 << endl;
    
    cout << " ------ yet another setf example ------" << endl;
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.precision(3);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(10);
    cout << 275.5 << endl;
    cout.unsetf(ios::showpos);
    cout.width(10);
    cout << 11.5526 << endl;
    
    return 0;
}