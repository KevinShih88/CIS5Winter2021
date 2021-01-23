/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 1706 hours
 * Purpose: Gaddis_9th_Ch3_Prob7_Cookies
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int KCALPCK = 75;                  //Kcal per cookie

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short int qCookie,         //Quantity of cookies eaten
                       totKcal;         //Total Kcal injested
    
    //Initialize or input i.e. set variable values
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> qCookie;                     //Enter number of cookies eaten
    
    //Map inputs -> outputs
    totKcal = qCookie * KCALPCK;        //Calculate total kcal injested
    
    //Display the outputs
    cout << "You consumed " << totKcal << " calories.";
    
    //Exit stage right or left!
    return 0;
}