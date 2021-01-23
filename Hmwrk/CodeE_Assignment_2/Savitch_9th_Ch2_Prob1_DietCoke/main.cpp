/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 1955 hours
 * Purpose: Savitch_9th_Ch2_Prob1_DietCoke
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float LTHLDS = .142857142f,
            SWT1CAN = .35f,
            CNVLB2G = 453.592f;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float dsrWght,
          dthGram,
          maxCans;
    
    //Initialize or input i.e. set variable values
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> dsrWght;
    
    //Map inputs -> outputs
    dsrWght = dsrWght * CNVLB2G;
    dthGram = dsrWght * LTHLDS;
    maxCans = dthGram/SWT1CAN;
    
    //Display the outputs
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << static_cast<int>(maxCans) << " cans";

    //Exit stage right or left!
    return 0;
}