/* 
 * File:        main.cpp
 * Author:      Kevin Shih
 * Created on   January 23, 2021. 1805 hours 
 * Purpose: Savitch_9th_Ch4_Prob9_MaxNumbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float twoNumComp(float, float);
float threeNumComp(float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,             //first number
          num2,             //second number
          num3;             //third number
    
    //Initialize or input i.e. set variable values
    cout << "Enter first number:" << endl;
    cin >> num1;            //User input of first number
    cout << endl;
    
    cout << "Enter Second number:" << endl;
    cin >> num2;            //User input of second number
    cout << endl;
    
    cout << "Enter third number:" << endl;
    cin >> num3;            //User input of third number
    cout << endl;
    
    //Map inputs -> outputs
    twoNumComp(num1, num2);             //Function call twoNumComp to compare two numbers
    cout << endl;
    threeNumComp(num1, num2, num3);     //Function call threeNumComp to compare three numbers
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float twoNumComp(float num1, float num2)    //Function to compare two numbers
{
    float result;
    if (num1 > num2)
    {
        cout << "Largest number from two parameter function:" << endl;
        cout << fixed << setprecision(1) << num1 << endl;
    }
    else if (num1 < num2)
    {
        cout << "Largest number from two parameter function:" << endl;
        cout << fixed << setprecision(1) << num2 << endl;
    }
}

float threeNumComp(float num1, float num2, float num3)      //Function to compare three numbers
{
    float result;
    if (num1 > num2 && num1 > num3)
    {
        cout << "Largest number from three parameter function:" << endl;
        cout << fixed << setprecision(1) << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Largest number from three parameter function:" << endl;
        cout << fixed << setprecision(1) << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "Largest number from three parameter function:" << endl;
        cout << fixed << setprecision(1) << num3 << endl;
    }
}