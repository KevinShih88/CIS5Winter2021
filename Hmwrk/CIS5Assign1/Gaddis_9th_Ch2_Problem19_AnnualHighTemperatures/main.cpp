/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 5, 2021, 1927 hours
 * Purpose: Gaddis 9th Ch2 Problem19 AnnualHighTemperatures
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float tempRse,          //Average temp rise 
          NYC,              //Current avg temp in NYC (deg F)
          Den,              //Current avg temp in Denver (deg F)
          Phnx,             //Current avg temp in Phoenix (deg F)
          newNYC,           //New avg temp in NYC (deg F)
          newDen,           //New avg temp in Denver (deg F)
          newPhnx;          //New avg temp in Phoenix (deg F)
    
    //Initialize Variables
    tempRse = 1.02f;
    NYC = 85;
    Den = 88;
    Phnx = 106;
    
    //Map Inputs to Outputs -> Process
    newNYC = NYC * tempRse;     //Calc new avg temp for NYC (deg F)
    newDen = Den * tempRse;     //Calc new avg temp for Denver (deg F)
    newPhnx = Phnx * tempRse;   //Calc new avg temp for Phoenix (deg F)
    
    //Display Inputs/Outputs
    cout << "The new average July temperatures are:" << endl;
    cout << "New York City: " << newNYC << " degrees Fahrenheit" << endl;
    cout << "Denver: " << newDen << " degrees Fahrenheit" << endl;
    cout << "Phoenix: " << newPhnx << " degrees Fahrenheit" << endl;
    
    //Exit the Program - Cleanup
    return 0;
}