#include<iostream>
#include<fstream>

using namespace std;

/**
 * Simple example of ofstream and ifstream using constructor function.
 * 
 * Using ofstream, we write contents to the file.
 * Using ifstream, we read contents from the file.
 */
 
int main(){
    float price, mob_price;
    
    // Storing in the file    
    ofstream outf("item.dat");

    cout << "Enter the price of mobile ";
    cin >> price;
    
    outf << price << endl;
    
    outf.close();
    
    // Reading from the file
    ifstream inf("item.dat");
    
    inf >> mob_price;
    cout << mob_price;
    
    inf.close();
    
    
    return 0;
}