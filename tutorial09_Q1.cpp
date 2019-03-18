/*************************************************************************
** Week 10 Tutorial 09                                                  **
** Author: Scott Garland                                                **
** Date: 18 Mar 2019                                                    **
** Purpose: The objective of this tutorial is to introduce you to       **
** concepts of using I/O File stream objects. This will allow you to    **
** read the data contained in files such as text files. Your C++        **
** programs can now take input from either the user or work with static **
** files that have already been created that store the data.            **
*************************************************************************/

/* Question 01 */

/* Write a C++ program to calculate and display the average of each group of
numbers available in the file. The files name is numbers.dat and contains the
following data:
5 96 87 78 93 21 4 92 82 85 87 6 72 69 85 75 81 73
The data is formatted where each group of numbers is preceded by the number of
items within the group. For example, the first number 5 means the following 5
entries are within the first group. The average should be displayed for each group. */

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    // Declare variables
    int number, count;
    double average{0};
    ifstream in_file;
    in_file.open("numbers.dat");

    // Check if file opened successfuly
    if (in_file.fail()) {
        cout << "The file was not opened successfully." << endl;
        exit(1); // ends program execution
    }
    else {
        in_file >> number;

        // While loop for file stream when open is successful
        while(in_file.good()) {
            cout << "The leading number in this group is: " << number << endl;
            cout << "The numbers within this group are:";
            count = number;
            average = 0;

            // Listing the numbers within a group
            for(int i = 0; i < count; i++) {
                in_file >> number;
                cout << "    " << number;
                average += number;
            }

            // Take the average of the numbers in a group
            average /= count;
            cout << "\nAverage: " << average << endl << endl;

            // Reads the next leading number
            in_file >> number;
        }
    }
    
    // Closing the file
    in_file.close();

    system("pause");
	return 0;
}