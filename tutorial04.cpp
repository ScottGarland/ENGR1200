/*************************************************************************
** Week 05 Tutorial 04                                                  **
** Author: Scott Garland                                                **
** Date: 04 Feb 2019                                                    **
** Purpose: Write a program that processes a transaction and prints a   **
** receipt to the user. The program should first prompt the user for    **
** how many Coffee and Doughnuts they are purchasing. The price for the **
** coffee and doughnuts are 4.99 and 1.99 respectively. The receipt     **
** should have a similar format as the example below. (Note: Ensure all **
** the currency decimal places line up)                                 **
*************************************************************************/

#include <iostream>  // Required for cout, cin, endl, etc.
#include <cmath>     // Required for math expressions
#include <iomanip> // input and output functions
using namespace std;

int main() {

    // Printing cout questions for user input cin
    float coffee, doughnut;
    cout << "How many Coffees would you like to purchase?" << endl;
    cin >> coffee;
    cout << endl << "How many Doughnuts would you like to purchase?" << endl;
    cin >> doughnut;

    // Declaring variables
    float cprice{4.99}, dprice{1.99};
    float ctotal = coffee*cprice;
    float dtotal = doughnut*dprice;
    float subtotal = ctotal + dtotal;
    float hst = subtotal*0.13;
    float total = subtotal + hst;

    // Print the receipt
    cout << endl << "Jim Hortons" << endl << "Customer Receipt" << endl;
    cout << "-------------------------" << endl;
    cout << "Coffee                 x" << coffee << setw(10) << setprecision(4) << ctotal << endl;
    cout << "Doughtnut              x" << doughnut << setw(10) << setprecision(4) << dtotal << endl << endl;
    cout << "Subtotal" << setw(27) << subtotal << endl;
    cout << "HST                   %13" << setw(10) << setprecision(3) << hst << endl << endl;
    cout << "Total" << setw(30) << setprecision(4) << total << endl;

	system("pause");
	return 0;
}