#include<iostream>
#include<fstream>
using namespace std;

/**
 * Reading and Writing contents in/from the file using read and write functions
 * 
 * author: ranjan-stha
 */
 
class Database{
    private:
        char name[10];
        int code;
        float cost;
    public:
        Database(){}
        void read_data(){
            cout << "Enter the code ";
            cin >> code;
            cout << "Enter name ";
            cin >> name;
            cout << "Enter the cost ";
            cin >> cost;
        }
        void display_data(){
            cout << "The product is " << name << " with code " << code << " and the cost is " << cost << endl;
        }
};


int main(){
    Database item[2];  
    
    ofstream outfile("database.txt", ios::out);
    
    cout << "Enter the details of the products " << endl;
    
    for (int i=0;i<2;i++){
        item[i].read_data();
        outfile.write((char *) &item[i], sizeof(item[i]));
    }
    
    outfile.close();
    
    ifstream infile("database.txt", ios::in);
    
    cout << "Displaying the products" << endl;
    
    for(int i=0;i<2;i++){
        infile.read((char *) &item[i], sizeof(item[i]));
        item[i].display_data();
    }
    
    infile.close();
    
    return 0;
}