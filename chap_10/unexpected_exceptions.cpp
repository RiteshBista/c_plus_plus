#include <iostream>       
#include <exception>      
using namespace std;

/**
 * Handling of Unexpected exceptions
 * 
 * Ref: http://www.cplusplus.com/reference/exception/set_unexpected/
 */

void myunexpected () {
  cerr << "unexpected called\n";
  throw 0;     // throws int (in exception-specification)
}

void myfunction () throw (int) {
  throw 'x';   // throws char (not in exception-specification)
}

int main (void) {
  set_unexpected (myunexpected);
  try {
    myfunction();
  }
  catch (int) { cerr << "caught int\n"; }
  return 0;
}