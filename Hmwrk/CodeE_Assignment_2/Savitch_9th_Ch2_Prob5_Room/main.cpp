/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 2347 hours
 * Purpose: Savitch_9th_Ch2_Prob5_Room
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
    unsigned short int maxCapa,         //Max capacity of room
                       numPeep,         //Number of people attending
                       peepDif;         //Difference between max capacity and number attending
    
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxCapa;
    cin >> numPeep;
    
    //Map inputs -> outputs
    if (numPeep <= maxCapa)
    {
        peepDif = maxCapa - numPeep;
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << peepDif << " will be allowed without violation.";
    }
    else
    {
        peepDif = numPeep - maxCapa;
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << peepDif << " to avoid fire violation.";
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}