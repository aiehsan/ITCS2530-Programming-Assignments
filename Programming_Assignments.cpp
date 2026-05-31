// Week 02 Programming Assignment with robust input and professional-looking output.
// 5/31/26
// ITCS 2530 Prof. Koss
// Aisha Ehsan

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

//use a namespace so don't have to keep retyping std into the code
using namespace std;

//everything goes in main for c++
int main() 
{
    //variables to store the user input
    string favoriteProject;
    string favoriteYarnColor; 
    int hoursPerWeek;
    double yarnCostPerSkein;

    //welcome banner at the beginning
    cout << "========================================" << endl;
    cout << "      WELCOME TO MY CROCHET PROGRAM      " << endl;
    cout << "========================================" << endl;
    cout << endl;

    //use getline to get the full line including whitespace
    cout << "What is your favorite thing to crochet? ";
    getline(cin, favoriteProject);

    cout << "What is your favorite yarn color? ";
    getline(cin, favoriteYarnColor);

    cout << "How many hours do you crochet each week? ";
    cin >> hoursPerWeek;

    // Input validation using if statement so the input is correct
    if (hoursPerWeek < 0)
    {
        cout << "Invalid input. Weekly hours cannot be negative." << endl;
        hoursPerWeek = 0;
    }

    cout << "What is the average cost of one skein of yarn? $";
    cin >> yarnCostPerSkein;

    // One more input validation for the price since price can't be negative
    if (yarnCostPerSkein < 0)
    {
        cout << "Invalid input. Cost cannot be negative." << endl;
        yarnCostPerSkein = 0;
    }

    // calculate monthly crochet hours and also the price of each week's skein to determine the budget
    int monthlyHours = hoursPerWeek * 4;
    double monthlyYarnBudget = yarnCostPerSkein * 4;

    // Open an output file here and close it at the end
    ofstream reportFile("report.txt");

    //make a summary table using setw and alignment
    cout << endl;
    cout << "========== YOUR CROCHET SUMMARY ==========" << endl;

    cout << left;
    cout << setw(25) << "Favorite Project:" << favoriteProject << endl;
    cout << setw(25) << "Favorite Yarn Color:" << favoriteYarnColor << endl;
    cout << setw(25) << "Hours Per Week:" << hoursPerWeek << endl;
    cout << setw(25) << "Monthly Hours:" << monthlyHours << endl;
    cout << setw(25) << "Cost Per Skein:" << "$" << fixed
         << setprecision(2) << yarnCostPerSkein << endl;
    cout << setw(25) << "Monthly Yarn Budget:" << "$"
         << monthlyYarnBudget << endl;

    // Save report to file
    reportFile << "========== YOUR CROCHET SUMMARY ==========" << endl;

    reportFile << left;
    reportFile << setw(25) << "Favorite Project:" << favoriteProject << endl;
    reportFile << setw(25) << "Favorite Yarn Color:" << favoriteYarnColor << endl;
    reportFile << setw(25) << "Hours Per Week:" << hoursPerWeek << endl;
    reportFile << setw(25) << "Monthly Hours:" << monthlyHours << endl;
    reportFile << setw(25) << "Cost Per Skein:" << "$" << fixed
               << setprecision(2) << yarnCostPerSkein << endl;
    reportFile << setw(25) << "Monthly Yarn Budget:" << "$"
               << monthlyYarnBudget << endl;

    reportFile.close();

    return 0;
}