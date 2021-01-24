/* 
 * File:            main.cpp
 * Author:          Kevin Shih
 * Created on       January 23, 2021. 1625 hours
 * Purpose: Savitch_Pth_Ch4_Prob2_MPG2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float LCNVGAL = 0.264179f;        //Constant to convert liters to gallons

//Function Prototypes
float MPGcalc(int, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short liters1,             //liters consumed by first vehicle
                   miles1,              //miles driven by first vehicle
                   liters2,             //liters consumed by second vehicle
                   miles2;              //miles driven by second vehicle
    float MPG1,                 //MPG of first vehicle
          gallon1,              //gallons consumed by first vehicle
          MPG2,                 //MPG if second vehicle
          gallon2;              //gallons consumed by second vehicle
    char choice;                //choice to repeat
    
    //Initialize or input i.e. set variable values
    do
    {
        //For first car
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liters1;                                     //User input of liters consumed
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles1;                                      //User input of miles driven
        
        gallon1 = liters1 * LCNVGAL;                        //Convert liters to gallons for first vehicle
        
        cout << "miles per gallon: ";
        cout << fixed << setprecision(2);
        cout << MPGcalc(miles1, gallon1, MPG1) << endl;     //Call MPGcalc function to calculate MPG of first vehicle
        
        cout << endl;
        //For car 2
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liters2;                                     //User input of liters consumed
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles2;                                      //User input of miles driven
    
        gallon2 = liters2 * LCNVGAL;                        //Convert liters to gallons for second vehicle
        cout << "miles per gallon: ";
        cout << fixed << setprecision(2);
        cout << MPGcalc(miles2, gallon2, MPG2) << endl;     //Call MPGcalc function to calculate MPG of second vehicle
        
        cout << endl;
        //Compare MPG
        if (MPGcalc(miles1, gallon1, MPG1) > MPGcalc(miles2, gallon2, MPG2))    //Compare which MPG is more fuel efficient
            cout << "Car 1 is more fuel efficient" << endl;
        else if (MPGcalc(miles1, gallon1, MPG1) < MPGcalc(miles2, gallon2, MPG2))
            cout << "Car 2 is more fuel efficient" << endl;
            
        cout << endl;
        
        cout << "Again:" << endl;                   
        cin >> choice;                              //Allow user to repeat
        if (choice == 'y' || choice == 'Y')
            cout << endl;
    } 
    while (choice == 'y' || choice == 'Y');         //Looping to allow for repeat
        //Display the outputs

    //Exit stage right or left!
    return 0;
}

float MPGcalc(int miles, float gallons, float MPG)      //Function to calculate MPG
{
    MPG = miles / gallons;
    return MPG;
}