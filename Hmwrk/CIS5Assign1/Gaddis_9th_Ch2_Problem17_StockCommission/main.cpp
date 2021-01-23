/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 5, 2021, 1838 hours
 * Purpose: Gaddis 9th Ch2 Problem17 StockCommission
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
    unsigned short int shares;     //Amount of shares
    float price,                   //Price per share
          perCom,                  //Percent commission
          subTot,                  //Cost of amount of shares
          comAmt,                  //Amount of commission
          finTot;                  //Final cost after taking commission
    
    //Initialize Variables
    shares = 750;
    price = 35.00f;
    perCom = .02f;
    
    //Map Inputs to Outputs -> Process
    subTot = shares * price;    //Calc amount paid for stock alone
    comAmt = subTot * perCom;   //Amount paid for commission
    finTot = subTot + comAmt;   //Total amount paid
    
    //Display Inputs/Outputs
    cout << "Stock Sub-Total: $" << subTot << endl;
    cout << "Commission Amount: $" << comAmt << endl;
    cout << "Stock Grand-Total: $" << finTot << endl;
    
    //Exit the Program - Cleanup
    return 0;
}