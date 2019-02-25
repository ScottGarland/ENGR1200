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

/* Question 1
Write a program to determine the cost of coffee based on the size entered by a
user. Your program should support 3 different sizes. A Large coffee costs 5.99, a
Medium coffee costs 4.99, and a Small coffee costs 3.99. */

#include <iostream>  // Required for cout, cin, endl, etc.
#include <ctype.h> // toupper function
using namespace std;

int main() {

    // Declare variables
    char size, upper;
    cout << "Using S, M, or L for Small, Medium, or Large, please enter the size of your coffee: " << endl;
    cin >> size;
    upper = toupper(size);

    // Output the cost of the user's coffee size
    switch (upper){
        case 'S': cout << "Small Coffee: $3.99" << endl; break;
        case 'M': cout << "Medium Coffee: $4.99" << endl; break;
        case 'L': cout << "Large Coffee: $5,99" << endl; break;
    }
    system("pause");
	return 0;
}