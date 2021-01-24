/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 22, 2019, 1845 hours
 * Purpose: Gaddis_9th_Ch5_Prob22_Rectangle
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
    unsigned short num;     //user input for numbers of rows and letters
    char letter;            //letter to be displayed
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
    cin >> num;             //user inputs number of rows and letters
    cin >> letter;          //user inputs letter to be displayed
    
    //Display the outputs

    for (int j = 2; j <= num; j++)              //looping for rows
    {
        for (int i = 1; i <= num; i++)          //looping for letters in rows
            cout << letter;
        cout << endl;
    }
    
    for (int i = 1; i <= num; i++)              //looping for last line
            cout << letter;
            
    //Exit stage right or left!
    return 0;
}