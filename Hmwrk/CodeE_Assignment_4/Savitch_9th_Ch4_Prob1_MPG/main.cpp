/* 
 * File:        main.cpp
 * Author:      Kevin Shih 
 * Created on   January 23, 2021. 1245 hours
 * Purpose: Savitch_9th_Ch4_Prob1_MPG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float LCNVGAL = 0.264179f;                    //constant float for converting liters to gallons

//Function Prototypes
float MPGcalc(int, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short liters,                          //number of liters consumed
                   miles;                           //number of miles driven
    float MPG,                                      //Miles per gallon
          gallons;                                  //number of gallons consumed
    char choice;                                    //choice to repeat
    
    //Initialize or input i.e. set variable values
    do
    {
    cout << "Enter number of liters of gasoline:" << endl;
    cin >> liters;                                  //User input liters consumed
    cout << endl;
    cout << "Enter number of miles traveled:" << endl;
    cin >> miles;                                   //User input miles driven
    cout << endl;
    
    //Map inputs -> outputs
        gallons = liters * LCNVGAL;                 //Convert liters to gallons
    
        cout << "miles per gallon:" << endl;
        cout << fixed << setprecision(2);
        cout << MPGcalc(miles, gallons, MPG) << endl;       //Call MPGcalc function
        cout << "Again:" << endl;
        cin >> choice;                              //Allow user to repeat
        if (choice == 'y' || choice == 'Y')
            cout << endl;
    } 
    while (choice == 'y' || choice == 'Y');         //Looping for repeating 
        //Display the outputs

    //Exit stage right or left!
    return 0;
}

float MPGcalc(int miles, float gallons, float MPG)  //Function to calculate MPG
{
    MPG = miles / gallons;
    return MPG;
}