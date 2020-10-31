#include<iostream>
#include<fstream>

using namespace std;

/**
 * Simple example of ofstream and ifstream 
 * using member function open().
 * 
 * Using ofstream, we write contents to the file.
 * Using ifstream, we read contents from the file.
 */
 
int main(){
    float price, mob_price;
    
    // Storing in the file    
    ofstream outf;
    outf.open("country.dat");  // try append mode(ios::app)
    outf << "USA\n";
    outf << "Germany\n";
    outf << "France\n";
    
    outf.close();
    
    const int N = 30;
    char line[N];
    
    ifstream inf;
    inf.open("country.dat");
    
    while(inf){  // try !inf.eof()
        inf.getline(line, N);
        cout << line << endl;
    }
    
    inf.close();
    
    return 0;
}