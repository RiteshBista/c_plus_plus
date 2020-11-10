#include<iostream>
#include<string>
#include<map>

using namespace std;

/**
 * Map STL in action (as know as key-value pairs)
 * 
 * author: ranjan-stha
 */ 

int main(){
    map<string, int> phone_directory;
    
    phone_directory["Ram"] = 1234;
    phone_directory["Hari"] = 2543;
    phone_directory["Shyam"] = 7742;
    
    string name;
    int ph;
    cout << "Enter a name ";
    cin >> name;
    cout << "Enter telephone no. ";
    cin >> ph;
    
    phone_directory[name] = ph;
    
    cout << "******* The Phone Directory ********" << endl;
    map<string, int>::iterator it;
    for (it=phone_directory.begin();it!=phone_directory.end();it++){
        cout << (*it).first << "\t" << (*it).second << endl;
    }
    
    cout << "Total number of entries: " << phone_directory.size() << endl;
    
    return 0;
}