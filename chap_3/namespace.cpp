#include <iostream>
using namespace std;

// first name space
namespace example_first_space {
   void print_me() {
      cout << "I am the first namespace" << endl;
   }
}

// second name space
namespace example_second_space {
   void print_me() {
      cout << "I am the second namespace" << endl;
   }
}

// using namespace example_first_space
int main () {
   // This calls the function from the mentioned namespace
   example_second_space::print_me();
   example_first_space::print_me();
   
   return 0;
}