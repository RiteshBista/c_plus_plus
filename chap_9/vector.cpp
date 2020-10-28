#include<iostream>
#include<vector>
using namespace std;

/**
 * A simple implementation of vector
 *
 * author: ranjan-stha
 */

int main(){
    vector<int> v;
    vector<int>::iterator it;
    int n;
    cout << "How many numbers: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
    
    cout << "The size of the vector is " << v.size() << endl;
    
    cout << "The vector elements are " << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << "\t";
    }
    cout << endl;
    
    cout << "The vector elements are " << endl;
    for(it=v.begin();it != v.end();it++){
        cout << *it << "\t";
    }
    
    return 0;
}