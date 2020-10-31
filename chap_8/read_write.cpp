#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

/**
 * Using read and write functions for i/o operations
 * 
 * author: ranjan-stha
 */

int main(){
    float height[4] = {160.3, 152.5, 177.3, 158.2};
    float h[4];
    
    ofstream outfile;
    outfile.open("measurements.txt");
    outfile.write((char *) &height, sizeof(height));
    outfile.close();
    
    ifstream infile;
    infile.open("measurements.txt");
    
    if(infile.fail()){
        cout << "Error opening the file" << endl;
    }else{
        infile.read((char*)&h, sizeof(h));
        
        for(int i=0;i<4;i++){
            cout.setf(ios::showpoint|ios::fixed);
            cout << setw(10) << setprecision(2) << h[i];
        }
    }
    
    infile.close();
    
    return 0;
}