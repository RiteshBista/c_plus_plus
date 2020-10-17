#include<iostream>
using namespace std;

/**
 * Example of unformatted i/o on character level 
 * get(char *), get(void), put(var)
 */

int main(){
    char c, ch;
    cin.get(c);
    cout.put(c); //cout << c << endl;
    
    cin.get(); // holds the line feed(\n)
    
    ch = cin.get();
    cout.put(ch);
    
    return 0;
}