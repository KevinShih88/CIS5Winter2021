/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 6, 2021, 1846 hours
 * Purpose: Gaddis 9th Ch2 Problem6 AnnualPay
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float payAmt,                   //Amount earned each pay period
          yrPay;                    //Annual pay
    unsigned short int payPrds;     //Amount of pay periods in a year
    
    //Initialize Variables
    payAmt = 2200.0f;
    payPrds = 26;
            
    //Map Inputs to Outputs -> Process
    yrPay = payAmt * payPrds;      //Calculate annual pay
    
    //Display Inputs/Outputs
    cout << "Annual Pay: $" << yrPay << endl;
    
    //Exit the Program - Cleanup
    return 0;
}