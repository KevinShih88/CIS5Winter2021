/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 5, 2021, 1948
 * Purpose: Gaddis 9th Ch2 Problem18 EnergyDrinkConsumption
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
    unsigned short int cust,           //Customer base
                       loyals,         //Number of loyal customers who buy 1+ per week
                       citrus;         //Number of loyals who prefer citrus
    float perLoyl,      //Percent of customer base who buy 1+ per week
          perCtrs;      //Percent of loyal customers who prefer citrus
    
    //Initialize Variables
    cust = 16500;
    perLoyl = .15f;
    perCtrs = .58f;
    
    //Map Inputs to Outputs -> Process
    loyals = cust * perLoyl;    //Calc # of loyals from customer base
    citrus = loyals * perCtrs;  //Calc # that prefer citrus from loyals
    
    //Display Inputs/Outputs
    cout << "Out of " << cust << " customers:" << endl;
    cout << loyals << " of them purchase one or more." << endl;
    cout << "Of those who purchase one or more per week:" << endl;
    cout << citrus << " of them prefer citrus-flavored drinks" << endl;


    
    //Exit the Program - Cleanup
    return 0;
}