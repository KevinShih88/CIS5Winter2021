/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 1658 hours
 * Purpose:  Gaddis_9th_Ch3_Prob3_Average
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
    float num1,                                     //first number 
          num2,                                     //second numbers
          num3,                                     //third number
          num4,                                     //fourth number
          num5,                                     //fifth number
          Qnum,                                     //Quantity of numbers
          avg;                                      //average of the numbers
    
    //Initialize or input i.e. set variable values
    Qnum = 5.0f;
    cout << "Input 5 numbers to average." << endl;
    cin >> num1;                                    //Enter 5 numbers
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    
    //Map inputs -> outputs
    avg = (num1+num2+num3+num4+num5)/Qnum;          //Calculate average
    
    //Display the outputs
    cout << fixed << setprecision(1) << showpoint;
    cout << "The average = " << avg;
    //Exit stage right or left!
    return 0;
}