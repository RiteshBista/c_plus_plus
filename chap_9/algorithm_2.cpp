#include<iostream>
#include<numeric>
#include<algorithm>
#include<set>

using namespace std;

/**
 * Using algorithm for set to find the difference between sets
 *
 * author: ranjan-stha
 */

int main(){
    
    set<int> s1, s2, result;
    s1.insert(1);
    s1.insert(5);
    s1.insert(6);
    s2.insert(1);
    
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.end()));
    
    set<int>:: iterator it;
    
    for (it=result.begin(); it != result.end(); ++it){
        cout << *it << endl;
    }
    
    return 0;
}