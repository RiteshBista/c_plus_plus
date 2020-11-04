#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>

using namespace std;

/**
 * Read, Write, Modify, Delete operations example using File I/O
 * 
 * author: ranjan-stha
 */

class Database{
    private:
        int rollno;
        char name[20];
    public:
        void read_data(){
            cout << "Enter RollNo: "; 
            cin >> this->rollno;   
            cin.ignore();
            cout << "Enter Name: "; 
            cin.getline(this->name, 20);
            
        }
        int get_rollno(){
            return this->rollno;
        }
        
        void display(){
            cout << "Name: " << this->name << "\t RollNo: " << this->rollno << endl;
        }
};

int main(){
    ifstream infile;
    ofstream outfile, temp_outfile;
    
    Database student, stu_temp;

    while(1){
        cout << endl;
        cout << "--------MENU-------" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Modify Student Record" << endl;
        cout << "3. Delete Student Record" << endl;
        cout << "4. Display Student Records" << endl;
        cout << "5. Exit" << endl;
        
        int choice, rno;
        cout << "Enter a choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                outfile.open("database.txt", ios::app);
                student.read_data();
                outfile.write((char*)&student, sizeof(student));
                outfile.close();
                break;
            case 2:
                int location, objsize;
                bool record_found;
                record_found = false;

                cout << "Enter roll no: ";
                cin >> rno;
                
                objsize = sizeof(stu_temp);

                infile.open("database.txt");
                outfile.open("database.txt", ios::out|ios::in);
                while(infile.read((char*)&student, sizeof(student))){
                    if(student.get_rollno() == rno){
                        location = int(infile.tellg()) - objsize;
                        outfile.seekp(location, ios::beg);
                        stu_temp.read_data();
                        outfile.write((char*)&stu_temp, sizeof(stu_temp));
                        record_found = true;
                        break;
                    }
                }
                if(record_found){
                    cout << "The record is updated" << endl;
                }else{
                    cout << "The record is not found." << endl;
                }

                infile.close();
                outfile.close();
                break;
            case 3:
                infile.open("database.txt");
                temp_outfile.open("temp_database.txt", ios::out);

                cout << "Enter the roll number ";
                cin >> rno;

                while(infile.read((char*)&student, sizeof(student))){
                    if(student.get_rollno() != rno){
                        temp_outfile.write((char*)&student, sizeof(student));
                    }
                }
                infile.close();
                temp_outfile.close();

                rename("temp_database.txt", "database.txt");
                break;
            case 4:
                infile.open("database.txt");

                cout << "The list of student records: " << endl;
                while(infile.read((char*)&student, sizeof(student))){
                    student.display();
                }
                infile.close();
                break;
            case 5:
                cout << "Exiting the program ...." << endl;
                exit(0);
                break;
            default:
                cout << "Wrong Choice. Try Again. " << endl;
        }
    }
    
    
    return 0;
}