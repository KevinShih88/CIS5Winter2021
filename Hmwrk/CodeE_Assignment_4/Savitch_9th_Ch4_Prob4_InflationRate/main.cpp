/* 
 * File:        main.cpp
 * Author:      Kevin Shih
 * Created on   January 23, 2021. 1645 hours
 * Purpose: Savitch_9th_Ch4_Prob4_InflationRate
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float InflationRate(float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float oldPrce,              //price of item last year
          newPrce,              //prce of item currently
          inflR8;               //inflation rate
    char choice;                //choice to repeat
    
    //Initialize or input i.e. set variable values
    do
    {
        cout << "Enter current price:" << endl;
        cin >> newPrce;                             //User input of current price
        cout << "Enter year-ago price:" << endl;
        cin >> oldPrce;                             //User input of price last year
    
    
        //Map inputs -> outputs
        InflationRate(oldPrce, newPrce, inflR8);    //Call InflationRate function 
        cout << "Again:" << endl;
        cin >> choice;                              //Allow user to repeat
        if (choice == 'y' || choice == 'Y')
            cout << endl;
    }
    while (choice == 'y' || choice == 'Y');         //Looping to allow for repeating
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float InflationRate(float oldPrce, float newPrce, float inflR8)     //Function to calculate inflation rate
{
    inflR8 = (newPrce - oldPrce)/oldPrce;
    inflR8 *= 100;
    cout << fixed << setprecision(2);
    cout << "Inflation rate: " << inflR8 << "%" << endl;
    cout << endl;
}
