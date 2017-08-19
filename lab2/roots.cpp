//Andrew Hedy

/* Program: roots.cpp */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
  double a=0, b=0, c=0;
  cout  << "This program computes roots of polynomials" << endl;
  cout  << "of the form Ax*x + Bx +C " << endl;
  cout  << "Enter A, B, and C";
  cin >> a >> b >> c;
  double root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
  double root2 = (-b - sqrt(b*b-4*a*c))/(2*a);
  cout << "The roots are " << root1 << " And " << root2 << endl;
  return 0;
}


