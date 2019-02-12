/*************************************************************************
** Week 03 Tutorial 02                                                  **
** Author: Scott Garland                                                **
** Date: 21 Jan 2019                                                    **
** Purpose: Answer basic computational questions. Area, volume, tension **
*************************************************************************/

#include <iostream>  // Required for cout, endl.
#include <cmath>     // Required for math
using namespace std;

int main() {
	// Declaring variables
	// Area, radius, volume, tension, mass1, mass2, gravitational constant, pi
	double a, r{ 2 }, v, t, m1{ 100 }, m2{ 50 }, g{ 9.81 }, pi{ 3.1415 };

	// Function for area of a circle of radius r
	a = pi * pow(r, 2);
	cout << "The area of the circle with r = " << r << " equals "
		<< a << " squared units" << endl;

	// Function for volume of a sphere of radius r
	v = (4 * pi*pow(r, 3)) / 3;
	cout << "The volume of the sphere with r = " << r << " equals "
		<< v << " cubed units" << endl;

	// Function for tension in a cord given initial values
	t = (2 * g*m1*m2) / (m1 + m2);
	cout << "The tension of the cord with m1 = " << m1 << " and m2 = " << m2 << " equals "
		<< t << " units" << endl;

	system("pause");
	return 0;
}
