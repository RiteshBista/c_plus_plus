#include<iostream>
using namespace std;

class Second{
    private:
        int s_val;
        int result;
    public:
        Second();
        Second(int);
        void square_me();
        void display() const;
};