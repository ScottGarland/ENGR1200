/*************************************************************************
** Week 06 Tutorial 05                                                  **
** Author: Scott Garland                                                **
** Date: 11 Feb 2019                                                    **
** Purpose: Develop simple programs (with input and output) to solve    **
** simple mathematical and engineering problems.                        **
*************************************************************************/

/* Question 2
Design, write, compile, and run a C++ program to calculate the sum of the integers between two
numbers. This is the formula for calculating this sum: sum = (n/2)*(2*a + (n-1)*d)
n is the number of integers to be added.
a is the first number.
d is the difference between each number. */

#include <iostream>  // Required for cout, cin, endl, etc.
#include <cmath>     // Required for math expressions
#include <iomanip> // input and output functions
using namespace std;

int main() {
    
    // Declare variables
    float n, a, d{1}, sum;

    // Prompt user for inputs
    cout << "Please input appropriate values to calculate the sum of integers between two given integers." << endl;
    cout << "a is the first number" << endl;
    cout << "n is the number of integers to be summed" << endl;
    cout << "Please input integer for a: " << endl;
    cin >> a;
    cout << "Please input integer for n: " << endl;
    cin >> n;

    // Calculate the sum
    sum = (n/2)*((2*a) + ((n-1)*d));

    // Print to screen
    cout << "The sum of the integers between " << a << " and " << n << " is " << sum << endl << endl;

	system("pause");
	return 0;
}