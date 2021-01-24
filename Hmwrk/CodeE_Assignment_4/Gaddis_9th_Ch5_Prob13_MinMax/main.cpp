/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 23, 2021, 1405 hours
 * Purpose:  Gaddis_9th_Ch5_Prob13_MinMax
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
    unsigned short number,                  //User entered number
                   minNum,                  //Min number in series
                   maxNum,                  //Max number in series
                   stopInp;                 //Number to signal stop of entry for series
                   
    //Initialize or input i.e. set variable values
    stopInp =  -99;                         //set stop signal
    cin >> number;                          //user inputs 
    minNum = maxNum = number;               //set Min and Max to number for first iteration
    
    //Map inputs -> outputs
    while (number != stopInp)
        {
            if (number < minNum)            //compare for Min
            minNum = number;
            
            if (number > maxNum)            //compare for Max
            maxNum = number;
            
            cin >> number;                  //allow for contiuous entry
        }
    
    //Display the outputs
    cout << "Smallest number in the series is " << minNum << endl;
    cout << "Largest  number in the series is " << maxNum;

    //Exit stage right or left!
    return 0;
}