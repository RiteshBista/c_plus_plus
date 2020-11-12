#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>

using namespace std;

/**
 * Using Algorithms in vector data str.
 * 
 * author: ranjan-stha
 */

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(-5);
    v.push_back(16);
    v.push_back(3);
    
    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;
    
    sort(v.begin(), v.end());
    
    cout << "Ascending order: ";
    for(int i=0;i<4;i++){
        cout << v[i] << "\t";
    }
    cout << endl;
    
    reverse(v.begin(), v.end());
    cout << "The reverse order is ";
     for(int i=0;i<4;i++){
        cout << v[i] << "\t";
    }
    cout << endl;
    
    return 0;
}