/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 23, 2019, 1730 hours
 * Purpose: Gaddis_9th_Ch5_Prob23_Pattern
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
    unsigned int numRows;             //User input number of rows
    
    //Initialize or input i.e. set variable values
    cin >> numRows;
    
    //Map inputs -> outputs
    for (int i = 1; i <= numRows; i++)      //standard looping for rows
    {
        for (int j = 1; j <= i; j++)        //looping for number of symbols in a row. j controlled by i to loop same amount as number of rows
        {
            cout << "+";
        }
        cout << endl;
        cout << endl;
    }
    for (int i = numRows; i >= 2; i--)      //looping for rows (backwards)
    {
        for (int j = 1; j <= i; j++)        //looping for number of symbols in a row. j controlled by i to loop same amount as number of rows
        {
            cout << "+";
        }
        cout << endl;
        cout << endl;
    }
    cout << "+";                            //since last line output does not have endl
    //Display the outputs

    //Exit stage right or left!
    return 0;
}