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

/* Question 02 */

/* Write a program which allows a League of Legends player to both store and output
statistics on their games played. When the program starts it allows the user to enter
new entries. The entries contain the following information:
Champion Name Kills Assists Deaths Win?
Each entry is appended to a file called games.txt. When the user is done entering
data the statistics from the games in the file are to be displayed. The average kills,
assists, and deaths are to be displayed with the percentage of wins to be displayed. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Declare variables
    double games{0}, kills, k_total{0}, assists, a_total{0}, deaths, d_total{0}, w_total{0}, avgkill, avgdeath, avgassist, avgwin;
    string name, finish{"Start"}, wins, stats;
    ifstream in_file;
    ofstream out_file;
    out_file.open("games.txt");
    in_file.open("games.txt");

    // Check if file opens successfully
    if (in_file.fail()) {
        cout << "The file was not opened successfully." << endl;
        exit(1); // ends program execution
    }
    else {
        // While loop to get user input for game stats
        while(finish != "x") {
            cout << "Please input corresponding post-game stats." << endl;

            do {
                cout << "Did you win? y/n: " << endl;
                cin >> wins;
            } while (wins != "y" && wins != "n");

            // Increase win total by 1 for each win. Increase number of games for regardless
            if (wins == "y") {
                wins = "Yes";
                w_total++;
                games++;
            }
            else {
                wins = "No";
                games++;
            }

            // Continuing with user input for games
            cout << "How many kills?: " << endl;
            cin >> kills;
            k_total += kills;

            cout << "How many deaths?: " << endl;
            cin >> deaths;
            d_total += deaths;

            cout << "How many assists?: " << endl;
            cin >> assists;
            a_total += assists;

            out_file << "Game " << games << endl;
            out_file << "Kills: " << kills << endl;
            out_file << "Deaths: " << deaths << endl;
            out_file << "Assists: " << assists << endl;
            out_file << "Win: " << wins << endl << endl;

            // if x is not entered, then a new game stats are appended to the file
            cout << "Please type x to stop user input. Type anything else to continue." << endl;
            cin >> finish;
        }
    }

    // Calculate appropriate stats
    avgkill = k_total / games;
    avgdeath = d_total / games;
    avgassist = a_total / games;
    avgwin = (w_total / games)*100;

    // Write the stats to the end of the file
    out_file << "Average Kills: " << avgkill << endl;
    out_file << "Average Deaths: " << avgdeath << endl;
    out_file << "Average Assists: " << avgassist << endl;
    out_file << "Win Percentage: " << avgwin << "%" << endl;

    // Print to the screen the necessary stats. Open the txt file to see all available info
    cout << "\nAverage Kills: " << avgkill << endl;
    cout << "Average Deaths: " << avgdeath << endl;
    cout << "Average Assists: " << avgassist << endl;
    cout << "Win Percentage: " << avgwin << "%" << endl << endl;

    in_file.close();
    out_file.close();
    system("pause");
	return 0;
}