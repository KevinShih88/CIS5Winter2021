/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 5, 2021, 1605 hours
 * Purpose: Gaddis 9th Ch2 Problem7 OceanLevels
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
    float riseRte;             //Rate of sea level rise per year
    unsigned short int years;   //Number of years from current
    float sealvl;               //Sea level at x number of years in the future
    //Initialize Variables
    
    riseRte = 1.5;
    
    cout << "Enter number of years from now: ";
    cin >> years;               //Allow user to specify number of years
    
    //Map Inputs to Outputs -> Process
    
    sealvl = riseRte * years;
    
    //Display Inputs/Outputs
   
    cout <<"Sea level will rise " << sealvl << "mm in ";
    cout << years << " years" << endl;
    
    
    //Exit the Program - Cleanup
    return 0;
}