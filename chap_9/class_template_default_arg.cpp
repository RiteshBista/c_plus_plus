#include<iostream>
using namespace std;

/**
 * Using default argument in the template list
 * 
 * author: ranjan-stha
 */
 
template<class X, int size=3>
class Student{
    private:
        X marks[size];
    public:
        Student(){}
        Student(X *m){
            for(int i=0;i<size;i++){
                this->marks[i] = m[i];
            }
        }
        void display(){
            cout << "The marks are " << "\t";
            for(int i=0;i<size;i++){
                cout << this->marks[i] << "\t";
            }
            cout << endl;
        }
};

int main(){
    int ram_marks[] = {10, 50, 66, 33, 44};
    Student <int, 5> ram(ram_marks);
    ram.display();
    
    float hari_marks[] = {40.56, 11.33, 34.64, 66.22};
    Student <float, 4> hari(hari_marks);
    hari.display();
    
    return 0;
}