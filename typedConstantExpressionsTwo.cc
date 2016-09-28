/* Typed constant Expressions Part 2
Programmer:       Victoria Brown
Date:             September 2016
typedConstantExpressionsTwo.cc */

// Can name constant values with preprocessor definitions
//  #define identifier replacement

#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main() {
  double r = 5.0;
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;
}
