#include <iostream>
#include <iomanip>
using namespace std;

/**
 * The example illustrates the use of Manipulators such as endl and setw(width)
 * The manipulator endl is used to provide a line feed (similar to \n)
 * The manipulator setw(width) is used to set the width of the following value
 * It is then right justified as observed in the output screen.
 * 
 * author: ranjan-stha
 */


int main(){
    int pen_cost=90, notebook_cost=85, oop_book=200, total;
    
    cout << "Pen: " << pen_cost << endl;
    cout << "Notebook: " << notebook_cost << endl;
    cout << "OOP Book: " << oop_book << endl;
    cout << "Total: " << pen_cost+notebook_cost+oop_book << endl;
    
    cout << endl << endl; // Line feed
    
    cout << setw(10) << "Pen: " << setw(5) << pen_cost << endl;
    cout << setw(10) << "Notebook: " << setw(5) << notebook_cost << endl;
    cout << setw(10) << "OOP Book: " << setw(5) << oop_book << endl;
    cout << setw(10) << "Total: " << setw(5) << pen_cost+notebook_cost+oop_book << endl;
    
    return 0;
}