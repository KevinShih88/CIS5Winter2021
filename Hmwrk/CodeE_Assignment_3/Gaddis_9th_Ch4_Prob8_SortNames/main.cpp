/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 14, 2021, 2345
 * Purpose: Gaddis_9th_Ch4_Prob8_SortNames
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
    string name1,               //First name
           name2,               //Second name
           name3,               //Third name
           post1,               //Holder for first position
           post2,               //Holder for second position
           post3;               //Holder for third position
    
    //Initialize or input i.e. set variable values
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> name1;               //Input first name
    cin >> name2;               //Input second name
    cin >> name3;               //Input third name
    
    //Map inputs -> outputs
    if((name1 < name2) && (name1 < name3))              //Determine position for name1
        post1 = name1;
    else if((name1 < name2) && (name3 < name1))
        post2 = name1;
    else if((name1 > name2) && (name3 > name1))
        post2 = name1;
    else
        post3 = name1;
        
    if((name2 < name1) && (name2 < name3))              //Determine position for name2
        post1 = name1;
    else if((name2 < name1) && (name3 < name2))
        post2 = name2;
    else if((name2 > name1) && (name3 > name2))
        post2 = name2;
    else
        post3 = name2;
        
    if((name3 < name2) && (name3 < name1))              //Determine position for name3
        post1 = name3;
    else if((name3 < name2) && (name1 < name3))
        post2 = name3;
    else if((name3 > name2) && (name1 > name3))
        post2 = name3;
    else
        post3 = name3;
        
    //Display the outputs
    cout << post1 << endl;
    cout << post2 << endl;
    cout << post3;
    
    //Exit stage right or left!
    return 0;
}