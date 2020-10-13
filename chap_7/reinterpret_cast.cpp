#include<iostream>

/**
 * Illustration of reinterpret_cast operator
 * 
 * author: ranjan-stha
 */

class First{
    public:
        void display(){
            std::cout << "I am from Class First" << std::endl;
        }
};

class Second{
    public:
        void display(){
            std::cout << "I am from Class Second" << std::endl;
        }
};


int main(){
    First *f = new First();
    
    f->display();
    
    Second *s = reinterpret_cast<Second *>(f);
    
    s->display();
    
    return 0;
}