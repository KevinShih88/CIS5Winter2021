/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 2350 hours
 * Purpose:  Savitch_9th_Ch2_PRob9_Sums
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
    float negSum,              //sum of all negative numbers
          posSum,              //sum of all positive numbers
          totSum,              //sum of all numbers
          number;             //numbers inputted by user
    
    //Initialize or input i.e. set variable values
    negSum = 0;
    posSum = 0;
    totSum = 0;
    
    //Map inputs -> outputs
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    cin >> number;
    posSum += (number > 0 ? number : 0);
    negSum += (number < 0 ? number : 0);
    totSum += number;
    
    //Display the outputs
    cout << "Negative sum =" << setw(4) << negSum << endl;
    cout << "Positive sum =" << setw(4) << posSum << endl;
    cout << "Total sum    =" << setw(4) << totSum;
    
    //Exit stage right or left!
    return 0;
}