#include<iostream>
#include<map>
using namespace std;

/**
 * Map STL data structure
 *
 * author: ranjan-stha
 */

int main(){
    
    map<char, int> map1;
    
    map1.insert(pair<char, int>('a', 97));
    map1.insert(pair<char, int>('b', 98));
    map1.insert(pair<char, int>('c', 99));
    
    cout << "The size of the map is " << map1.size() << endl;
    
    cout << map1['a'] << endl;
    cout << map1['c'] << endl;
    
    return 0;
}