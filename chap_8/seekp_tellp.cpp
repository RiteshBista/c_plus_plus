#include<iostream>
#include<fstream>

using namespace std;

/**
 * File Pointers and function manipulators (seekp() and tellp())
 * 
 * author: ranjan-stha
 */


int main () {
  fstream outfile;
  
  outfile.open ("test.txt", ios::out);
  outfile << "Hello  World";
  
  int pos = 5;
  
  outfile.seekp(pos, ios::beg);
  outfile << " BEX Class";
  
  cout << "Current Cursor position: " << outfile.tellp() << endl;
  
  outfile.close();
  
  return 0;
}