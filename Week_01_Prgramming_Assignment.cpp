// Week 01 Programming Assignment with Inputs and Outputs
// Create a simple C++ console application about crocheting. 
// 5/21/26
// ITCS 2530 Prof. Koss

#include <iostream>
#include <string>

//use a namespace so don't have to keep retyping std into the code
using namespace std;

//everything goes in main for c++
int main() 
{
    //variables to store the user input
    string favoriteProject;
    string favoriteYarnColor; 
    int hoursPerWeek;

    //output questions to the user about crocheting and collect input
    cout << "===Crochet Hobby Program===" << endl;
    cout << "What is your favorite thing to crochet? ";
    cin >> favoriteProject;

    cout << "What is your favorite yarn color? ";
    cin >> favoriteYarnColor;

    cout << "How many hours do you crochet each week? ";
    cin >> hoursPerWeek;

    // calculate monthly crochet hours
    int monthlyHours = hoursPerWeek * 4;

    //engaging output by printing a fun message 
    cout << endl;
    cout << "You love crocehting " << favoriteProject
    << " with " << favoriteYarnColor
    << "yarn. You crochet about "
    << hoursPerWeek << " hours each week, which equals about "
    << monthlyHours << " hours every month if you stay consistent!" << endl;

    return 0;
}