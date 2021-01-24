/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 21, 2021, 1749 hours
 * Purpose: Gaddis_9th_Ch5_Prob1_Sum
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
    unsigned short num,             //Number entered by user to stop at
                   i,               //counter
                   sum;             //final sum of all numbers
    
    //Initialize or input i.e. set variable values
    sum = 0;                        //initialize sum
    i = 0;                          //initialize counter
    cin >> num;                     //enter user input
    //Map inputs -> outputs
    while (i <= num)                //while loop to set condition
    {
        sum += i;                   //add next number to total sum
        i++;                        //increment counter
    }
    
    //Display the outputs
    cout << "Sum = " << sum;        //display total sum
    //Exit stage right or left!
    return 0;
}