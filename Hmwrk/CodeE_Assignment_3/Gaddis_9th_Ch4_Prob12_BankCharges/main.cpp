/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 15, 2021, 0051 hours
 * Purpose: Gaddis_9th_Ch4_Prob12_BankCharges
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
    float bnkBlnc,                  //User inputted bank balance
          chckFee,                  //service fee total
          mnthFee,                  //Monthly fee
          lowBlnc,                  //Low balance fee
          newBlnc;                  //New balance at the end
    unsigned short int numChks;     //Number of checks
    
    //Initialize or input i.e. set variable values
    mnthFee = 10.00f;
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> bnkBlnc;
    cin >> numChks;
    
    //Map inputs -> outputs
    if (bnkBlnc < 0)                        //Determine if account is already overdrawn
        cout << "URGENT: ACCOUNT OVERDRAWN" << endl;
    
    if (bnkBlnc < 400.00f)                  //Determine if they have low balance
    {
        lowBlnc = 15.00f;                   //If low balace, establish fee
    }
    else
        lowBlnc = 0.00;                     //If not low balance, no fee
        
    if (numChks >= 60)                      //Take number of checks to determine fee rate
        chckFee = .04 * numChks;
    else if (numChks >= 40)
        chckFee = .06 * numChks;
    else if (numChks >= 20)
        chckFee = .08 * numChks;
    else
        chckFee = .10 * numChks;
    
    newBlnc = bnkBlnc - chckFee - mnthFee - lowBlnc;    //Subtract all fees from original balance
    
    //Display the outputs
    cout << fixed << setprecision(2) << showpoint;
    cout << "Balance     $" << setw(9) << bnkBlnc << endl;
    cout << "Check Fee   $" << setw(9) << chckFee << endl;
    cout << "Monthly Fee $" << setw(9) << mnthFee << endl;
    cout << "Low Balance $" << setw(9) << lowBlnc << endl;
    cout << "New Balance $" << setw(9) << newBlnc;

    //Exit stage right or left!
    return 0;
}