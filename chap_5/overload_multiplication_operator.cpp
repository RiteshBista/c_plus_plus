#include<iostream>
using namespace std;

class IntHolder{
    private:
        int x;
    public:
        IntHolder(){}
        IntHolder(int y):x(y){}
        IntHolder operator*(IntHolder c){
            IntHolder temp;
            temp.x = x * c.x;
            return temp;
        }
        int display() const{
            return this->x;
        }
        
};

int main(){
    IntHolder c(5), result;
    result = c * c * c;
    cout << "The cube is " << result.display() << endl;
    
    return 0;
}