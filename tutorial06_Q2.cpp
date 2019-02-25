/*************************************************************************
** Week 07 Tutorial 06                                                  **
** Author: Scott Garland                                                **
** Date: 25 Feb 2019                                                    **
** Purpose: The objective of this tutorial is to understand the use of  **
** selection (control structures) within C++. You will learn the        **
** precedence of operators used in control structures where statements  **
** can be evaluated for selection. Using this knowledge, you will write **
** C++ programs which require decisions to be made based on the user    **
** input.                                                               **
*************************************************************************/

/* Question 2
Write a program to calculate the result of the following step function:
f(x) = 2^(-x*3) for x <= 0 and ln(x) + 10 for x > 0 */

#include <iostream>  // Required for cout, cin, endl, etc.
#include <cmath>     // Required for math expressions
#include <iomanip> // input and output functions
using namespace std;

int main() {

    // Declare variables
    float x;
    cout << "Please insert a float value for x: " << endl;
    cin >> x;

    // Compute f(x) for the given value of x
    if (x <= 0)
        cout << pow(2,(-x*3)) << endl;
    else
        cout << log(x) + 10 << endl;

    system("pause");
	return 0;
}