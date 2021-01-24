/* 
 * File:        main.cpp
 * Author:      Kevin Shih
 * Created on   January 23, 2021. 1715 hours
 * Purpose: Savitch_9th_Ch4_Prob5_FuturePrice
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float InflationRate(float, float);
float FuturePrices(float, float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float oldPrce,              //price of item last year
          newPrce,              //price of item currently
          inflR8,               //inflation rate
          yearOne,              //price in one year
          yearTwo;              //price in two years
    char choice;                //choice to repeat
    
    //Initialize or input i.e. set variable values
    do
    {
        
        cout << "Enter current price:" << endl;
        cin >> newPrce;                         //User input current price
        cout << "Enter year-ago price:" << endl;
        cin >> oldPrce;                         //user input last year price
    
    
        //Map inputs -> outputs
        inflR8 = InflationRate(oldPrce, newPrce);       //Function call InflationRate to calculate inflation rate
        cout << fixed << setprecision(2);
        cout << "Inflation rate: " << inflR8 << "%" << endl;
        cout << endl;
        FuturePrices(inflR8, newPrce, yearOne, yearTwo);    //Function call FuturePrices to determine future prices
        cout << "Again:" << endl;
        cin >> choice;                                      //Allow user to repeat
        if (choice == 'y' || choice == 'Y')
            cout << endl;
    }
    while (choice == 'y' || choice == 'Y');                 //Looping to allow for repeating
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float InflationRate(float oldPrce, float newPrce)           //Function to calculate inflation rate
{
    float inflR8;
    inflR8 = (newPrce - oldPrce)/oldPrce;
    inflR8 *= 100.0f;

    return inflR8;                                          //return inflation rate to be used in other functions and displayed
}

float FuturePrices(float inflR8, float newPrce, float yearOne, float yearTwo)   //Function to calculate future prices
{
    float inc1,             //Increase in first year
          inc2;             //Increase in second year
        
    inc1 = newPrce * (inflR8/100.0f);   //Calc increase based on inflation rate
    yearOne = newPrce + inc1;           //Add increase to current price
    inc2 = yearOne * (inflR8/100.0f);   //Calc second increased based on inflation rate and year one price
    yearTwo = yearOne + inc2;           //Add increase to year one
    
    cout << "Price in one year: $" << yearOne << endl;
    cout << "Price in two year: $" << yearTwo << endl;
    cout << endl;
    
}
