#include<iostream>
#include<cstring>
using namespace std;

/**
 * Example of unformatted i/o on string level
 * getline(str, size) and write(str, size)
 */

int main(){
    char name[20], address[20];
    cin.getline(name, 20);
    cin.getline(address, 20);
    
    cout.write(name, strlen(name));
    cout << endl;
    cout.write(name, strlen(name)).write("\t", 2).write(address, strlen(address));
    
    return 0;
}