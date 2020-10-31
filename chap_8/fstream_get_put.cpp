#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

/** 
 * Using put() and get() functions for file i/o operations
 * 
 * author: ranjan-stha
 */

int main(){
    char name[20];
    
    cout << "Enter a name ";
    cin >> name;
    
    ofstream outfile;
    outfile.open("list.txt", ios::out);
    
    for (int i=0;i<strlen(name);i++){
        outfile.put(name[i]);
    }
    
    outfile.close();
    
    ifstream infile;
    infile.open("list.txt", ios::in);
    
    infile.seekg(0, ios::beg);
    
    char ch;
    while(infile.get(ch)){
        cout << ch;
    }
    
    infile.close();
    
    return 0;
}