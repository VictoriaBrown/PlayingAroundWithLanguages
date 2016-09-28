/* Initialization of variables.
Programmer:       Victoria Brown
Date:             September 2016
initVariables.cc */

#include <iostream>
using namespace std;

int main() {
  int a = 5;        // Initial value: 5
  int b(3);         // Initial value: 3
  int c{2};         // Initial value: 2
  int result;       // Initial value undetermined

  a = a + b;
  result = a - c;
  cout << result;

  return 0;
}
