/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 5, 2021, 1903 hours
 * Purpose: Gaddis 9th Ch2 Problem 11 DistancePerTankOfGas
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
    short int tankcap;  //Gas tank capacity in gallons
    float MPGcty,      //Miles per gallon in city
          MPGhwy,       //Miles per gallon on highway
          distCty,     //Distance traveled per tank in city
          distHwy;      //Distanced traveled per tank on highway
    
    //Initialize Variables
    tankcap = 20;
    MPGcty = 23.5f;
    MPGhwy = 28.9f;
    
    //Map Inputs to Outputs -> Process
    distCty = tankcap * MPGcty;
    distHwy = tankcap * MPGhwy;
    
    //Display Inputs/Outputs
    cout << "Average distance traveled per tank of gas in the city: ";
    cout << distCty << " miles" << endl;
    cout << "Average distance traveled per tank of gas on highway: ";
    cout << distHwy << " miles" << endl;

    
    //Exit the Program - Cleanup
    return 0;
}