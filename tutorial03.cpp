/*************************************************************************
** Week 04 Tutorial 03                                                  **
** Author: Scott Garland                                                **
** Date: 28 Jan 2019                                                    **
** Purpose: 1) Solve quadratic equations.                               **
**          2) Solve height of cylinder given surface area and radius.  **
*************************************************************************/

#include <iostream>  // Required for cout, endl.
#include <cmath>     // Required for math
using namespace std;

int main() {
	// Declaring variables

	// x1 and x2 are solutions; a, b, and c coefficients of quadratic equation
	double x1, x2, a{1}, b{-3}, c{-4};
	// height, surface area, and radius of cylinder; pi
	double h, s{100}, r{1}, pi{3.1415};

    // Function for solving quadratic equation
	x1 = (-b + sqrt(pow(b,2) - (4*a*c))) / (2*a);
	x2 = (-b - sqrt(pow(b,2) - (4*a*c))) / (2*a);

    // Function for solving cylinder's height given surface area
	h = (s - 2*pi*pow(r,2)) / (2*pi*r);
	
    // Print the outcomes

	// Quadratic
	cout << "QUADRATIC QUESTION" << endl;
	cout << "Given " << a << "x^2 " << b << "x " << c << " = 0, solutions are x1 = " << x1 << " and x2 = " << x2 << endl << endl;
	// Cylinder
	cout << "CYLINDER QUESTION" << endl;
	cout << "Given s = " << s << " and r = " << r << ", h = " << h << endl << endl;

	system("pause");
	return 0;
}
