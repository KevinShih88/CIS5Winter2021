/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 17, 2021, 1935 hours
 * Purpose: Gaddis_9th_ch4_Prob14_Race
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string rn1name,                                 //name of runner 1
           rn2name,                                 //name of runner 2
           rn3name,                                 //name of runner 3
           post1nm,                                 //holder for first place name
           post2nm,                                 //holder for second place name
           post3nm;                                 //holder for third place name
    unsigned short int rn1time,                     //runner 1 time
                       rn2time,                     //runner 2 time
                       rn3time,                     //runner 3 time
                       post1tm,                     //holder for first place time
                       post2tm,                     //holder for second place time
                       post3tm;                     //holder for third place time
                       
    //Initialize or input i.e. set variable values
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    cin >> rn1name;                                 //input name of runner 1
    cin >> rn1time;                                 //input time of runner 1
    cin >> rn2name;                                 //input name of runner 2
    cin >> rn2time;                                 //input time of runner 2
    cin >> rn3name;                                 //input name of runner 3
    cin >> rn3time;                                 //input time of runner 3
    
    //Map inputs -> outputs
    if((rn1time < rn2time) && (rn1time < rn3time))      //Determine position for runner 1
    {    
        post1tm = rn1time;
        post1nm = rn1name;
    }   
    else if((rn1time < rn2time) && (rn3time < rn1time))
    {
        post2tm = rn1time;
        post2nm = rn1name;
    }
    else if((rn1time > rn2time) && (rn3time > rn1time))
    {
        post2tm = rn1time;
        post2nm = rn1name;
    }
    else
    {
        post3tm = rn1time;
        post3nm = rn1name;
    }
        
    if((rn2time < rn1time) && (rn2time < rn3time))              //Determine position for runner 2
    {
        post1tm = rn2time;
        post1nm = rn2name;
    }
    else if((rn2time < rn1time) && (rn3time < rn2time))
    {
        post2tm = rn2time;
        post2nm = rn2name;
    }
    else if((rn2time > rn1time) && (rn3time > rn2time))
    {
        post2tm = rn2time;
        post2nm = rn2name;
    }
    else
    {
        post3tm = rn2time;
        post3nm = rn2name;
    }
        
    if((rn3time < rn2time) && (rn3time < rn1time))              //Determine position for runner 3
    {
        post1tm = rn3time;
        post1nm = rn3name;
    }
    else if((rn3time < rn2time) && (rn1time < rn3time))
    {
        post2tm = rn3time;
        post2nm = rn3name;
    }
    else if((rn3time > rn2time) && (rn1time > rn3time))
    {
        post2tm = rn3time;
        post2nm = rn3name;
    }
    else
    {
        post3tm = rn3time;
        post3nm = rn3name;
    }
    
    //Display the outputs
    cout << post1nm << "\t" << setw(3) << post1tm << endl;
    cout << post2nm << "\t" << setw(3) << post2tm <<endl;
    cout << post3nm << "\t" << setw(3) << post3tm;

    //Exit stage right or left!
    return 0;
}