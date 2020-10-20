#include<iostream>
#include "first_class.h"
#include "second_class.h"

using namespace std;


/**
 * This main file imports the files which contain classes definition.
 * The objects of those classes are created below and they are initialized and
 * member functions are accessed accordingly
 * 
 * author: ranjan-stha
 */

int main ()
{
  First f(2);
  Second s(5);
  
  f.display();
  
  s.square_me();
  s.display();
  
  return 0;
}