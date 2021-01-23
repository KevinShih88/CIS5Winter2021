/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 1905 hours
 * Purpose:  Paycheck
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
    float hrlyPay,                  //Hourly pay rate
          payChck;                  //Paycheck amount
    unsigned short int hours;       //Hours worked
    
    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> hrlyPay;
    cin >> hours;
    
    //Map inputs -> outputs
    hours = hours <= 40 ? hours : (2 * (hours - 40)) + 40 ;
    payChck = hours * hrlyPay;
    
    //Display the outputs
    cout << fixed << setprecision(2) << showpoint;
    cout << "Paycheck = $" << setw(7) << payChck;

    //Exit stage right or left!
    return 0;
}