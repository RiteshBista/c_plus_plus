#include<iostream>
using namespace std;

/**
 * Example of Static Data Function.
 * 
 * This function can be accessed using the class
 * The static member function contains only the static data 
 * or other static member function.
 */ 

class Item {
    private:
        static int count;
        int id;
    
    public:
        Item();
        Item(int);
        static void showcount();
};

int Item::count;

Item::Item(){
    count++;
}

Item::Item(int val){
    id = val;
    count++;
}

void Item::showcount(){
    cout << count << endl;
    //cout << id << endl;  // this line produces error
    //id++; // produces error.
}

int main() {
    Item i1(4), i2, i3;
    
    //i1.showcount();
    
    Item::showcount();
    
    return 0;
}