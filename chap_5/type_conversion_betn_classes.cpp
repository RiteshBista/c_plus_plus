/**
 * Data Type conversion between User Defined Data Types
 * 
 * There are two ways to write the conversion function
 * If you want to write in the source class, you need write an overloaded
 * casting operator function of destination class in source class
 * If you want to write in the destination class, you need to write an overloaded
 * parameterized constructor function in the destination class
 * 
 * Below is an example of data type conversion from Fahrenheit to Celcius scales.
 * 
 * Note that if you want to use the casting operator function of source class
 * then, uncomment it and don't forget to comment the constructor function in 
 * the destination class. It means ONLY ONE conversion function is required.
 * 
 * author: ranjan-stha
 * 
 */

class Celcius;

class Fahrenheit{
    private:
        float f_val;
    public:
        Fahrenheit(){}
        Fahrenheit(float val){
            f_val = val;
        }
        //operator Celcius();
        
        float get_val(){
            return this->f_val;
        }
};

class Celcius{
    private:
        float c_val;
    public:
        Celcius(){}
        Celcius(Fahrenheit);
            
        void set_c_val(float val){
            c_val = val;
        }
        void display(){
            cout << "The celcius value is " << this->c_val << " degrees" << endl;
        }
};

/*Fahrenheit::operator Celcius(){
    float c_val;
    Celcius c;
    c_val = 5.0/9.0 * (f_val - 32);
    c.set_c_val(c_val);
    return c;
}*/

Celcius::Celcius(Fahrenheit f){
    this->c_val = 5.0/9.0 * (f.get_val() - 32);
}

int main(){
    Celcius c;
    Fahrenheit f(32);
    
    c = f;  // f is source; c is destination
    // Also try c = Celcius(f)
    c.display();
    
    return 0;
}