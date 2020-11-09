#include<iostream>
#include<set>
using namespace std;

/**
 * Set STL data structure
 *
 * author: ranjan-stha
 */

int main(){
    
    set<int> unique_values;
    
    unique_values.insert(1);
    unique_values.insert(2);
    unique_values.insert(1);
    
    cout << "The size of set is " << unique_values.size() << endl;
    
    set<int>:: iterator it;
    
    for (it=unique_values.begin(); it != unique_values.end(); ++it){
        cout << *it << endl;
    }
    
    return 0;
}