/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 12, 2021, 1939 hours
 * Purpose:  Savitch_9th_Ch2_Prob2_Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PAYINCR = .076f;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float annlPay,              //Old annual pay entered by user
          oldMnth,              //Old monthly pay from annual pay entered
          retrDue,              //Retroactive pay due for 6 months
          newAnnl,              //New annual pay 
          newMnth;              //New monthly pay
    
    //Initialize or input i.e. set variable values
    cout << "Input previous annual salary." << endl;
    cin >> annlPay;
    
    //Map inputs -> outputs
    oldMnth = annlPay/12;
    retrDue = oldMnth * PAYINCR * 6;
    newAnnl = oldMnth * (PAYINCR + 1) * 12;
    newMnth = oldMnth * (PAYINCR + 1);
    
    //Display the outputs
    cout << fixed << setprecision(2) << showpoint;
    cout << "Retroactive pay    = $" << setw(7) << retrDue << endl;
    cout << "New annual salary  = $" << setw(7) << newAnnl << endl;
    cout << "New monthly salary = $" << setw(7) << newMnth;
    
    //Exit stage right or left!
    return 0;
}