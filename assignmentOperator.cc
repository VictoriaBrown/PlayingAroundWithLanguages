/* Assignment Operator =
Programmer:       Victoria Brown
Date:             September 2016
assignmentOperator.cc */

/* This exercise shows that if x = y, and then you later change y it
will not affect x's value. It will stay the same as the initial y
value that it was set to. */

#include <iostream>
using namespace std;

int main() {
  int a, b;               // a:?    b:?
  a = 10;                 // a:10   b:?
  b = 4;                  // a:10   b:4
  a = b;                  // a:4    b:4
  b = 7;                  // a:4    b:7

  cout << "a:";
  cout << a;
  cout << " b: ";
  cout << b;
}
