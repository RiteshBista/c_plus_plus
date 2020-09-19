#include<iostream>
using namespace std;

/**
 * Example of Static Data Member
 */ 

class Item {
    private:
        static int count;
        int number;
    
    public:
        Item(){
            count++;
        }
        Item(int num){
            number = num;
            count++;
        }
        
        void get_count(){
            cout << count << endl;
        }
        
        ~Item(){
            cout << "Destructor called" << endl;
        }
};

int Item::count;   // Replace with   int Item::count = 10

int main(){
    Item i1, i2(5), i3(8), i4;
    
    i1.get_count();
    i2.get_count();
    i3.get_count();
    i4.get_count();
    
    return 0;
}
