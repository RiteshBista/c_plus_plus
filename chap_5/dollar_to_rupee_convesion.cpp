#include<iostream>
using namespace std;

/**
 * Data conversion from dollar to rupee and vice versa
 * 
 * author: ranjan-stha
 */

class Dollar;
class Rupees {
    int rupee;
    public:
        Rupees(){
            rupee = 0;
        }
        Rupees(int r):rupee(r){}
        //Rupees(Dollar);
        
        void set_rupee(int r){
            rupee = r;
        }
        int get_rupee(){
            return rupee;
        }
        void display(){
            cout << "The rupees is " << rupee << endl;
        }
};

class Dollar{
    int dollar;
    public:
        Dollar(){
            dollar = 0;
        }
        Dollar(int d):dollar(d){}
        Dollar(Rupees);
        int ret_dollar(){
            return dollar;
        }
        operator Rupees();
        void display(){
            cout << "The dollar is " << dollar << endl;
        }
};

/*Rupees::Rupees(Dollar d){
    rupee = d.ret_dollar() * 120;
}*/

Dollar::Dollar(Rupees r){
    dollar = r.get_rupee() / 120;
}
Dollar::operator Rupees(){
    Rupees r;
    int total_rupees =  dollar * 120;
    r.set_rupee(total_rupees);
    return r;
}


int main(){
    Rupees r;
    Dollar d(2);
    
    Rupees r1(360);
    Dollar d1;
    
    
    r = d; // d-> source, r-> destination
    
    d1 = r1; // r1->source, d1->destination
    
    r.display();
    
    d1.display();
    
    return 0;
}