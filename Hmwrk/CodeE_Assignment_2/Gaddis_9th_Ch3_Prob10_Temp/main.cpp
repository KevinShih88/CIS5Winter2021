/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 1817 hours
 * Purpose: Gaddis_9th_Ch3_Prob10_Temp
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
    float Cels,                     //degrees celsius
          Fahr;                     //degrees fahrenheit
    
    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> Fahr;                    //enter desired degree in fahrenheit to be converted 
    
    //Map inputs -> outputs
    Cels = .55555 * (Fahr - 32);
    
    //Display the outputs
    cout << fixed << setprecision(1) << showpoint;
    cout << Fahr << " Degrees Fahrenheit = " << Cels << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}