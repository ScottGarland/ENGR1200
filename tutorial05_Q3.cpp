/*************************************************************************
** Week 06 Tutorial 05                                                  **
** Author: Scott Garland                                                **
** Date: 11 Feb 2019                                                    **
** Purpose: Develop simple programs (with input and output) to solve    **
** simple mathematical and engineering problems.                        **
*************************************************************************/

/* Question 3
The maximum load that can be placed at the end of a symmetrical wooden beam, such as the rectangular
beam shown in Figure A3, can be calculated as the following: L = (S*I)/(d*c)
L is the maximum weight in lbs of the load placed on the beam.
S is the stress in lbs/in2
I is the beam’s rectangular moment of inertia in units of in^4
d is the distance in inches that the load is placed from the fixed end of the beam (the “moment arm” ).
c is one-half the height in inches of the symmetrical beam.

For a 2” × 4” wooden beam, the rectangular moment of inertia is given by this formula:
I = (base*pow(height,3)/12 = 2*pow(4,3)/12 = 10.67 
c = 0.5*(4 inches) = 2 inches 

a) Using this information, design, write, compile, and run a C++ program that computes the maximum
load in lbs that can be placed at the end of an 8-foot 2” × 4” wooden beam so that the stress on the fixed
end is 3000 lb/in^2 

b) Use the program developed in Exercise 3a to determine the maximum load in lbs that can be placed at
the end of a 3” × 6” wooden beam so that the stress on the fixed end is 3000 lbs/in^2 */

#include <iostream>  // Required for cout, cin, endl, etc.
#include <cmath>     // Required for math expressions
#include <iomanip> // input and output functions
using namespace std;

int main() {

    // Declare variables. d = 8ft/96in and S = 3000 lbs/in^2 for both a) and b)
    float L, S{3000}, I, d{96}, c;

    // Calculate moment of inertia and max load weight for a)
    c = 2;
    I = 2*pow(4,3)/12;
    L = (S*I)/(d*c);

    // Print result for a)
    cout << "The maximum load in a) is computed to be " << L << endl << endl;

    // Calculate moment of inertia and max load weight for b)
    c = 3;
    I = 3*pow(6,3)/12;
    L = (S*I)/(d*c);

    // Print result for b)
    cout << "The maximum load in b) is computed to be " << L << endl << endl;
    
	system("pause");
	return 0;
}