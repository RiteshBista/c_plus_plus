#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14

/**
 * Example of a Parameterized Constructor
 * Constructor is a function whose name SHOULD BE same as 
 * the name of the CLASS with no return type as it doesn'type
 * return any value.
 * The Constructor is invoked as soon as the object of that class
 * is created.
 * 
 * author: ranjan-stha
 */


class Sphere {
    private:
        float radius;
        float volume;
    
    public:
        Sphere(int); // Parameterized Constructor
        void calc_volume();
        void display();
        
};

Sphere::Sphere(int r){
    radius = r;
}

void Sphere::calc_volume(){
    volume = (4./3)*PI*pow(radius, 3);
}

void Sphere::display(){
    cout << "The volume is :" << volume << endl;
}

int main() {
    Sphere tennis_ball(1), football(3);
    
    tennis_ball.calc_volume();
    football.calc_volume();
    
    tennis_ball.display();
    football.display();
    
    return 0;
}