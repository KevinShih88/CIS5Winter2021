/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 15, 2021, 0206 hours
 * Purpose: Gaddis_9th_Ch4_Prob23_ISP
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char packge;                                    //Package letter A, B, or C
    unsigned short int hours,                       //hours used in the month
                       inclHrs,                     //number of hours included for particular package
                       addHrs;                      //rate of additional hours
    float mnthCh;                                   //monthly charge
    
    //Initialize or input i.e. set variable values
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> packge;                                  //input package letter
    cin >> hours;                                   //input amount of hours used
    
    //Map inputs -> outputs
    if (hours <= 744 && hours > 0)                  //ensure it is positive number less than 744
    {
        switch (packge)                         
        {
            case 'A':                               //For package A
                {
                    mnthCh = 9.95f;
                    inclHrs = 10;
                    addHrs = 2;
                    break;
                }
            case 'B':                               //for package B
                {
                    mnthCh = 14.95f;
                    inclHrs = 20;
                    addHrs = 1;
                    break;
                }
            case 'C':                               //for package C
                {
                    mnthCh = 19.95;
                    inclHrs = 0;
                    addHrs = 0;
                    break;
                }
            default: cout << "Only select package A, B, or C" << endl;
        }
        
        if(hours > inclHrs)                         //determine if hours used is over hours included in package
        {
            mnthCh += (hours - inclHrs) * addHrs;   //calculate final monthly charge
        }
        
        cout << fixed << setprecision(2) << showpoint;
        cout << "Bill = $" << setw(6) << mnthCh;
    }
    else
        cout << "Hours out of range";
    //Display the outputs


    //Exit stage right or left!
    return 0;
}