/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 17, 2021, 1945 hours
 * Purpose: Savitch_9th_Ch3_Prob3_Roman_Conversion
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
    unsigned short int stdnum;
    string romNum;
    
    //Initialize or input i.e. set variable values
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> stdnum;
    
    //Map inputs -> outputs
    romNum = "";
    if (stdnum >= 1000 && stdnum <= 3000)               //Ensure number is in range 1000 - 3000
    {
        unsigned char n1000, n100, n10, n1;
        n1000 = stdnum/1000;                            //separate into sections for conversion
        n100 = (stdnum - n1000 * 1000)/100;
        n10 = (stdnum - n1000 * 1000 - n100 * 100)/10;
        n1 = stdnum%10;
        
        if(1000 == 3)                                   //Output the thousands
            romNum += "MMM";
        if(n1000 == 2)
            romNum += "MM";
        if(n1000 == 1)
            romNum += "M";
            
        if(n100 == 9)                                   //Output the hundreds
            romNum += "CM";
        if(n100 == 8)
            romNum += "DCCC";
        if(n100 == 7)
            romNum += "DCC";
        if(n100 == 6)
            romNum += "DC";
        if(n100 == 5)
            romNum += "D";
        if(n100 == 4)
            romNum += "CD";
        if(n100 == 3)
            romNum += "CCC";
        if(n100 == 2)
            romNum += "CC";
        if(n100 == 1)
            romNum += "C";
        
        if(n10 == 9)                                    //Output the tens
            romNum += "XC";
        if(n10 == 8)
            romNum += "LXXX";
        if(n10 == 7)
            romNum += "LXX";
        if(n10 == 6)
            romNum += "LX";
        if(n10 == 5)
            romNum += "L";
        if(n10 == 4)
            romNum += "XL";
        if(n10 == 3)
            romNum += "XXX";
        if(n10 == 2)
            romNum += "XX";
        if(n10 == 1)
            romNum += "X";
        
        if(n1 == 9)                                     //Output the ones
            romNum += "IX";
        if(n1 == 8)
            romNum += "VIII";
        if(n1 == 7)
            romNum += "VII";
        if(n1 == 6)
            romNum += "VI";
        if(n1 == 5)
            romNum += "V";
        if(n1 == 4)
            romNum += "IV";
        if(n1 == 3)
            romNum += "III";
        if(n1 == 2)
            romNum += "II";
        if(n1 == 1)
            romNum += "I";
            
        cout << stdnum << " is equal to " << romNum;
    }
    else
        cout << stdnum << " is Out of Range!";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}