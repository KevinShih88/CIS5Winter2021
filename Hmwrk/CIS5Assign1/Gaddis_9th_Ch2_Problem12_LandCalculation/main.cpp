/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 5, 2021, 1845 hours
 * Purpose: Gaddis 9th Ch2 Problem 12 LandCalculaiton
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
    float sqft,     //amount of sqft needed to be converted to acres
          acre,     //number of sqft in an acre
          tract;    //number of acres
    
    //Initialize Variables
    acre = 43560;
    sqft = 391876;
    
    //Map Inputs to Outputs -> Process
    tract = sqft/acre;      //calc number of acres
    
    //Display Inputs/Outputs
    cout << sqft << " sqft equals ";
    cout << tract << " acres" << endl;
    
    //Exit the Program - Cleanup
    return 0;
}