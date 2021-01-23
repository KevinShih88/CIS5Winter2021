/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 5, 2021, 1918 hours
 * Purpose: Gaddis 9th Ch2 Problem13 CircuitBoardPrice
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
    float markup,       //Rate of price markup 
          srcePrc,      //Price of sourcing 
          sellPrc;      //Customer sale price
    
    //Initialize Variables
    markup = 1.35f;
    srcePrc = 14.95f;
    
    //Map Inputs to Outputs -> Process
    sellPrc = srcePrc * markup;   //Calc sale price
    
    //Display Inputs/Outputs
    cout << "The selling price is at least: $" << sellPrc << endl;
    
    //Exit the Program - Cleanup
    return 0;
}