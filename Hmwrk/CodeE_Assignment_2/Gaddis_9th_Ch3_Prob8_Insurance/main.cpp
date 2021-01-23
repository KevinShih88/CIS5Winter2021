/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 1805 hours
 * Purpose: Gaddis_9th_Ch3_Prob8_Insurance
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float rplCost,                          //Replacement cost of the property
          insPerc,                          //Percent of replacement cost to insure for
          minAmnt;                          //Minimum amount of insurance to buy
    
    //Initialize or input i.e. set variable values
    insPerc = .8f;                          //Recommended at least 80% of the replacement cost
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin >> rplCost;                         //Enter proprety value/replacement cost
    
    //Map inputs -> outputs
    minAmnt = rplCost * insPerc;            //Calculate minimum amount of insurance to buy 
    
    //Display the outputs
    cout << "You need $" << static_cast<int>(minAmnt) << " of insurance.";

    //Exit stage right or left!
    return 0;
}