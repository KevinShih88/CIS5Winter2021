/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 21, 2021, 1804 hours
 * Purpose: Gaddis_9th_Ed_Ch5_Prob7_PayInPennies
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
    unsigned int dayAmnt,             //Particular day's pay
                 numDays,             //number of days worked
                 totPay,              //total pennies recieved
                 payDoub;             //Doubling of pay each day
    
    //Initialize or input i.e. set variable values
    dayAmnt = 1;
    payDoub = 2;
    cin >> numDays;                     //enter number of days worked
    
    //Map inputs -> outputs
    while (numDays <= 0)                   //check for valid input of days worked
    {
        cout << "Invalid number of days." << endl;
        cout << "Input number greater than 1: "<< endl;
        cin >> numDays;
    }
    
    for (int i = 0; i < numDays; i++)   //loop to calculate number of pennies earned based on days worked
    {
        totPay += dayAmnt;
        dayAmnt = dayAmnt * payDoub;
    }
    
    //Display the outputs
    cout << "Pay = $" << totPay/100 << "."; //output the dollars
    if ((totPay%100) < 10)                  
        cout << "0" << totPay%100;          //output cents if less than 10
    else if ((totPay%100) >= 10)
        cout << totPay%100;                 //output cents if more than 10
    
    //Exit stage right or left!
    return 0;
}