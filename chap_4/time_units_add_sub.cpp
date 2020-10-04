#include<iostream>
using namespace std;

/**
 * Time units addition and subtraction by calling the member functions
 * 
 * author: ranjan-stha
 */

class Time{
    private:
        int hr, min, sec;
    public:
        Time();
        Time(int, int, int);
        Time add(Time);
        Time sub(Time);
        void display() const;
};

Time::Time(){
    this->hr = 0;
    this->min = 0;
    this->sec = 0;
}

Time::Time(int hh, int mm, int ss){
    this->hr = hh;
    this->min = mm;
    this->sec = ss;
}

Time Time::add(Time t){
    Time temp;
    temp.sec = this->sec + t.sec;
    if(temp.sec >= 60){
        temp.min = temp.sec/60;
        temp.sec %= 60;
    }
    temp.min += this->min + t.min;
    if(temp.min >= 60){
        temp.hr = temp.min/60;
        temp.min %= 60;
    }
    temp.hr += this->hr + t.hr;
    
    return temp;
}

Time Time::sub(Time t){
    Time temp;
    if(this->sec < t.sec){
        temp.min = -1;
        temp.sec = this->sec + 60 - t.sec;
    }else{
        temp.sec = this->sec - t.sec;
    }
    if(this->min < t.min){
        temp.hr = -1;
        temp.min += this->min + 60 - t.min;
    }else{
        temp.min = this->min - t.min;
    }
    temp.hr += this->hr - t.hr;
    
    return temp;
}

void Time::display() const{
    cout << "Hours: " << this->hr << " Mins: " << this->min << " Sec: " << this->sec << endl;
}

int main(){
    Time t1(2, 10, 30), t2(1, 15, 50), t_sum, t_sub;
    
    t_sum = t1.add(t2); // t1 + t2
    t_sub = t1.sub(t2); // t1 - t2
    
    t1.display();
    t2.display();
    cout << endl; // a line feed.
    t_sum.display();
    t_sub.display();
    
    return 0;
}