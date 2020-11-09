#include<iostream>
#include<list>

using namespace std;

/**
 * Use of list data structure
 * 
 * author: ranjan-stha
 */

void showlist(list<int> l){
    list<int>::iterator it;
    for(it=l.begin();it!=l.end(); ++it){
        cout << *it << endl;
    }
}

int main(){
    
    list <int> list1;
    
    list1.push_back(1);
    list1.push_back(2);
    
    showlist(list1);
    
    list1.push_front(5);
    
    cout << endl;
    
    showlist(list1);
    
    return 0;
}