/* Typed constant Expressions
Programmer:       Victoria Brown
Date:             September 2016
typedConstantExpressions.cc */

#include <iostream>
using namespace std;

// It's sometimes convenient to name constant values instead of using
// the literal in which they were defined to.

const double pi = 3.14159;
const char newline = '\n';

int main() {
  double r = 5.0;
  double circle;

  circle = 2 * pi * r;
  cout << circle;
  cout << newline;
}
