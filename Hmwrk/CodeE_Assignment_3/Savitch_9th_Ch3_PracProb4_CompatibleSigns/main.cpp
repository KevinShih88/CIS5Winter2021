/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 16, 2021, 1523 hours
 * Purpose: Savitch_9th_Ch3_Prob4_CompatibleSigns
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
    string choice1,                             //first sign choice
           choice2;                             //second sign choice
    unsigned short int select1,                 //holder for number assignment for first choice
                       select2;                 //holder for number assignment for second choice
           
    //Initialize or input i.e. set variable values
    select1 = 0;                                //initialize holders
    select2 = 0;                                //initialize holders
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> choice1;                             //input first sign choice
    cin >> choice2;                             //input second sign choice
    
    //Map inputs -> outputs
    if (choice1 == "Aries")                     //Set number for choice1 for FIRE
        select1 = 1;
    if (choice1 == "Leo")
        select1 = 1;
    if (choice1 == "Sagittarius")
        select1 = 1;
    if (choice1 == "Taurus")                    //Set number for choice1 for EARTH
        select1 = 2;
    if (choice1 == "Virgo")
        select1 = 2;
    if (choice1 == "Capricorn")
        select1 = 2;
    if (choice1 == "Gemini")                    //Set number for choice1 for AIR
        select1 = 3;
    if (choice1 == "Libra")
        select1 = 3;
    if (choice1 == "Aquarius")
        select1 = 3;
    if (choice1 == "Cancer")                    //Set number for choice1 for WATER
        select1 = 4;
    if (choice1 == "Scorpio")
        select1 = 4;
    if (choice1 == "Pisces")
        select1 = 4;
    
     if (choice2 == "Aries")                     //Set number for choice2 for FIRE
        select2 = 1;
    if (choice2 == "Leo")
        select2 = 1;
    if (choice2 == "Sagittarius")
        select2 = 1;
    if (choice2 == "Taurus")                    //Set number for choice2 for EARTH
        select2 = 2;
    if (choice2 == "Virgo")
        select2 = 2;
    if (choice2 == "Capricorn")
        select2 = 2;
    if (choice2 == "Gemini")                    //Set number for choice2 for AIR
        select2 = 3;
    if (choice2 == "Libra")
        select2 = 3;
    if (choice2 == "Aquarius")
        select2 = 3;
    if (choice2 == "Cancer")                    //Set number for choice2 for WATER
        select2 = 4;
    if (choice2 == "Scorpio")
        select2 = 4;
    if (choice2 == "Pisces")
        select2 = 4;
        
    switch (select1)
    {
        case 1:                                 //check for compatibility in FIRE
        {
        if (select1 == select2)
            cout << choice1 << " and " << choice2 << " are compatible Fire signs.";
        else
            cout << choice1 << " and " << choice2  << " are not compatible signs.";
            break;
        }
        case 2:                                 //check for compatibility in EARTH
        {
        if (select1 == select2)
            cout << choice1 << " and " << choice2 << " are compatible Earth signs.";
        else
            cout << choice1 << " and " << choice2  << " are not compatible signs.";
            break;
        }
        case 3:                                 //check for compatibility in AIR
        {
        if (select1 == select2)
            cout << choice1 << " and " << choice2 << " are compatible Air signs.";
        else
            cout << choice1 << " and " << choice2  << " are not compatible signs.";
            break;
        }
        case 4:                                 //check for compatibility in WATER
        {
        if (select1 == select2)
            cout << choice1 << " and " << choice2 << " are compatible Water signs.";
        else
            cout << choice1 << " and " << choice2  << " are not compatible signs.";
            break;
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}