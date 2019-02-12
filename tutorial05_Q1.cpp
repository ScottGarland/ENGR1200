/*************************************************************************
** Week 06 Tutorial 05                                                  **
** Author: Scott Garland                                                **
** Date: 11 Feb 2019                                                    **
** Purpose: Develop simple programs (with input and output) to solve    **
** simple mathematical and engineering problems.                        **
*************************************************************************/

/* Question 1
Design, write, compile, and run a C++ program that calculates and displays the area of a triangle, such as
the one in Figure A1. The area is given by this formula: Area = 1⁄2 (base) × (height). Note that the program
must prompt the user to enter the values for base and height in inches. */

#include <iostream>  // Required for cout, cin, endl, etc.
#include <cmath>     // Required for math expressions
#include <iomanip> // input and output functions
using namespace std;

int main() {

    // Declare variables
    float height, base, area;

    // Ask user for base and height values
    cout << "What is the height of the triangle?" << endl;
    cin >> height;
    cout << "What is the base of the triangle??" << endl;
    cin >> base;

    // Calculate area of triangle
    area = 0.5*base*height;

    // Print to screen the area of the triangle
    cout << "Area = " << area << " units^2"<< endl << endl;

	system("pause");
	return 0;
}