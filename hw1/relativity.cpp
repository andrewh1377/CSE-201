//Andrew Hedy
//Homework 1

/* Program: relativity.cpp */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
double carwidth=0, doorwidth=0, velocity=0;
const double c=98208000;
cout  << "This program computes the theory of relativity. ";
cout << "Computes the width of the car based on stationary width and velocity. ";
cout << "Please enter the stationary width of the car in feet, the width of the door in feet, and the velocity the car is traveling in mph. ";
cin >> carwidth >> doorwidth >> velocity;
double newvelocity= (velocity * 5280)/3600;
double root1= (carwidth*(sqrt(1-((newvelocity*newvelocity)/(c*c)))));
cout << "The width of the door is " << doorwidth << "ft ";
cout << "The width of the moving car is " << root1 << "ft";
return 0;
} 
