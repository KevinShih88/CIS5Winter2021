/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 14, 2021, 2353 hours
 * Purpose: Gaddis_9th_Ch4_Prob11_Books
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short int qbooks,          //number of books
                       points;          //points awarded 
    
    //Initialize or input i.e. set variable values
    points = 0;
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> qbooks;                     //Enter number of books
    
    //Map inputs -> outputs
    if (qbooks >= 4)                    //Determine amount of points awarded
        points += 60;
    else if (qbooks == 3)
        points += 30;
    else if (qbooks == 2)
        points += 15;
    else if (qbooks == 1)
        points += 5;
    else
        points += 0;
    
    //Display the outputs
    cout << "Books purchased =" << setw(3) << qbooks << endl;
    cout << "Points earned   =" << setw(3) << points;
    
    //Exit stage right or left!
    return 0;
}