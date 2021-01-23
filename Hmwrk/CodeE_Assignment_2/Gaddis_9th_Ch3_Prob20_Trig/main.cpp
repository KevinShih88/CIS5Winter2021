/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 14, 2019, 1146 hours
 * Purpose: GAddis_9th_Ch3_Prob20_Trig
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math library 
#include <iomanip>   //Formatting library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short int degAngl;                      //Degree input
    float degRad;                                   //Input in radians
    
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> degAngl;
    
    //Map inputs -> outputs
    degRad = (degAngl * 3.14159265358)/180;              //Convert input to radians
    
    //Display the outputs
    cout << fixed << setprecision(4) << showpoint;
    cout << "sin(" << degAngl << ") =" << setw(7) <<sin(degRad) << endl;
    cout << "cos(" << degAngl << ") =" << setw(7) <<cos(degRad) << endl;
    cout << "tan(" << degAngl << ") =" << setw(7) <<tan(degRad);
    //Exit stage right or left!
    return 0;
}