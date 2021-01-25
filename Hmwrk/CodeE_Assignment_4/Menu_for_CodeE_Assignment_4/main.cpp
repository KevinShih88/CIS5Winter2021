  
/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 25, 20201, 1307 hours
 * Purpose: Menu for Code E Assignment 4
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float LCNVGAL = 0.264179f;                    //constant float for converting liters to gallons

//Function Prototypes
float MPGcalc(int, float, float);
float InflationRate(float, float, float);
float InflationRate(float, float);
float FuturePrices(float, float, float, float);
float twoNumComp(float, float);
float threeNumComp(float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice,
         again;
    
    do{
    //Display Menu
    cout<<"Menu for Homework Assignment 4"<<endl;
    cout<<"Type 0 for Gaddis Sum Problem"<<endl;
    cout<<"Type 1 for Gaddis PayInPennies Problem"<<endl;
    cout<<"Type 2 for Gaddis MinMax Problem"<<endl;
    cout<<"Type 3 for Gaddis Rectangle Problem"<<endl;
    cout<<"Type 4 for Gaddis Pattern Problem"<<endl;
    cout<<"Type 5 for Savitch MilesPerGallon Problem"<<endl;
    cout<<"Type 6 for Savitch 2CarsMPG Problem"<<endl;
    cout<<"Type 7 for Savitch InflationRate Problem"<<endl;
    cout<<"Type 8 for Savitch FuturePrices Problem"<<endl;
    cout<<"Type 9 for Savitch MaxNumber Problem "<<endl;
    cin>>choice;
    
    switch(choice){
        case '0':
        {
            //Declare Variables
            unsigned short num,             //Number entered by user to stop at
                           i,               //counter
                           sum;             //final sum of all numbers
    
            //Initialize or input i.e. set variable values
            sum = 0;                        //initialize sum
            i = 0;                          //initialize counter
            cin >> num;                     //enter user input
            //Map inputs -> outputs
            while (i <= num)                //while loop to set condition
            {
                sum += i;                   //add next number to total sum
                i++;                        //increment counter
            }

            //Display the outputs
            cout << "Sum = " << sum;        //display total sum
            //Exit stage right or left!
            break;
        }
        case '1':
        {
            //Declare Variables
            unsigned int dayAmnt,             //Particular day's pay
                         numDays,             //number of days worked
                         totPay,              //total pennies recieved
                         payDoub;             //Doubling of pay each day

            //Initialize or input i.e. set variable values
            dayAmnt = 1;
            payDoub = 2;
            cin >> numDays;                     //enter number of days worked

            //Map inputs -> outputs
            while (numDays <= 0)                   //check for valid input of days worked
            {
                cout << "Invalid number of days." << endl;
                cout << "Input number greater than 1: "<< endl;
                cin >> numDays;
            }

            for (int i = 0; i < numDays; i++)   //loop to calculate number of pennies earned based on days worked
            {
                totPay += dayAmnt;
                dayAmnt = dayAmnt * payDoub;
            }

            //Display the outputs
            cout << "Pay = $" << totPay/100 << "."; //output the dollars
            if ((totPay%100) < 10)                  
                cout << "0" << totPay%100;          //output cents if less than 10
            else if ((totPay%100) >= 10)
                cout << totPay%100;                 //output cents if more than 10

            //Exit stage right or left!
            break;
        }
        case '2':
        {
            //Declare Variables
            unsigned short number,                  //User entered number
                           minNum,                  //Min number in series
                           maxNum,                  //Max number in series
                           stopInp;                 //Number to signal stop of entry for series

            //Initialize or input i.e. set variable values
            stopInp =  -99;                         //set stop signal
            cin >> number;                          //user inputs 
            minNum = maxNum = number;               //set Min and Max to number for first iteration

            //Map inputs -> outputs
            while (number != stopInp)
                {
                    if (number < minNum)            //compare for Min
                    minNum = number;

                    if (number > maxNum)            //compare for Max
                    maxNum = number;

                    cin >> number;                  //allow for contiuous entry
                }

            //Display the outputs
            cout << "Smallest number in the series is " << minNum << endl;
            cout << "Largest  number in the series is " << maxNum;

            //Exit stage right or left!
            break;
        }
        case '3':
        {
            //Declare Variables
            unsigned short num;     //user input for numbers of rows and letters
            char letter;            //letter to be displayed

            //Initialize or input i.e. set variable values


            //Map inputs -> outputs
            cin >> num;             //user inputs number of rows and letters
            cin >> letter;          //user inputs letter to be displayed

            //Display the outputs

            for (int j = 2; j <= num; j++)              //looping for rows
            {
                for (int i = 1; i <= num; i++)          //looping for letters in rows
                    cout << letter;
                cout << endl;
            }

            for (int i = 1; i <= num; i++)              //looping for last line
                    cout << letter;

            //Exit stage right or left!
            break; 
        }
        case '4':
        {
            //Declare Variables
            unsigned int numRows;             //User input number of rows

            //Initialize or input i.e. set variable values
            cin >> numRows;

            //Map inputs -> outputs
            for (int i = 1; i <= numRows; i++)      //standard looping for rows
            {
                for (int j = 1; j <= i; j++)        //looping for number of symbols in a row. j controlled by i to loop same amount as number of rows
                {
                    cout << "+";
                }
                cout << endl;
                cout << endl;
            }
            for (int i = numRows; i >= 2; i--)      //looping for rows (backwards)
            {
                for (int j = 1; j <= i; j++)        //looping for number of symbols in a row. j controlled by i to loop same amount as number of rows
                {
                    cout << "+";
                }
                cout << endl;
                cout << endl;
            }
            cout << "+";                            //since last line output does not have endl
            //Display the outputs

            //Exit stage right or left!
            break;
        }
        case '5':
        {
            //Declare Variables
            unsigned short liters,                          //number of liters consumed
                           miles;                           //number of miles driven
            float MPG,                                      //Miles per gallon
                  gallons;                                  //number of gallons consumed
            char choice;                                    //choice to repeat

            //Initialize or input i.e. set variable values
            do
            {
            cout << "Enter number of liters of gasoline:" << endl;
            cin >> liters;                                  //User input liters consumed
            cout << endl;
            cout << "Enter number of miles traveled:" << endl;
            cin >> miles;                                   //User input miles driven
            cout << endl;

            //Map inputs -> outputs
                gallons = liters * LCNVGAL;                 //Convert liters to gallons

                cout << "miles per gallon:" << endl;
                cout << fixed << setprecision(2);
                cout << MPGcalc(miles, gallons, MPG) << endl;       //Call MPGcalc function
                cout << "Again:" << endl;
                cin >> choice;                              //Allow user to repeat
                if (choice == 'y' || choice == 'Y')
                    cout << endl;
            } 
            while (choice == 'y' || choice == 'Y');         //Looping for repeating 
                //Display the outputs

            //Exit stage right or left!
            break;
        }
        case '6':
        {
            //Declare Variables
            unsigned short liters1,             //liters consumed by first vehicle
                           miles1,              //miles driven by first vehicle
                           liters2,             //liters consumed by second vehicle
                           miles2;              //miles driven by second vehicle
            float MPG1,                 //MPG of first vehicle
                  gallon1,              //gallons consumed by first vehicle
                  MPG2,                 //MPG if second vehicle
                  gallon2;              //gallons consumed by second vehicle
            char choice;                //choice to repeat

            //Initialize or input i.e. set variable values
            do
            {
                //For first car
                cout << "Car 1" << endl;
                cout << "Enter number of liters of gasoline:" << endl;
                cin >> liters1;                                     //User input of liters consumed
                cout << "Enter number of miles traveled:" << endl;
                cin >> miles1;                                      //User input of miles driven

                gallon1 = liters1 * LCNVGAL;                        //Convert liters to gallons for first vehicle

                cout << "miles per gallon: ";
                cout << fixed << setprecision(2);
                cout << MPGcalc(miles1, gallon1, MPG1) << endl;     //Call MPGcalc function to calculate MPG of first vehicle

                cout << endl;
                //For car 2
                cout << "Car 2" << endl;
                cout << "Enter number of liters of gasoline:" << endl;
                cin >> liters2;                                     //User input of liters consumed
                cout << "Enter number of miles traveled:" << endl;
                cin >> miles2;                                      //User input of miles driven

                gallon2 = liters2 * LCNVGAL;                        //Convert liters to gallons for second vehicle
                cout << "miles per gallon: ";
                cout << fixed << setprecision(2);
                cout << MPGcalc(miles2, gallon2, MPG2) << endl;     //Call MPGcalc function to calculate MPG of second vehicle

                cout << endl;
                //Compare MPG
                if (MPGcalc(miles1, gallon1, MPG1) > MPGcalc(miles2, gallon2, MPG2))    //Compare which MPG is more fuel efficient
                    cout << "Car 1 is more fuel efficient" << endl;
                else if (MPGcalc(miles1, gallon1, MPG1) < MPGcalc(miles2, gallon2, MPG2))
                    cout << "Car 2 is more fuel efficient" << endl;

                cout << endl;

                cout << "Again:" << endl;                   
                cin >> choice;                              //Allow user to repeat
                if (choice == 'y' || choice == 'Y')
                    cout << endl;
            } 
            while (choice == 'y' || choice == 'Y');         //Looping to allow for repeat
                //Display the outputs

            //Exit stage right or left!
            break;
        }
        case '7':
        {
            //Declare Variables
            float oldPrce,              //price of item last year
                  newPrce,              //prce of item currently
                  inflR8;               //inflation rate
            char choice;                //choice to repeat

            //Initialize or input i.e. set variable values
            do
            {
                cout << "Enter current price:" << endl;
                cin >> newPrce;                             //User input of current price
                cout << "Enter year-ago price:" << endl;
                cin >> oldPrce;                             //User input of price last year


                //Map inputs -> outputs
                InflationRate(oldPrce, newPrce, inflR8);    //Call InflationRate function 
                cout << "Again:" << endl;
                cin >> choice;                              //Allow user to repeat
                if (choice == 'y' || choice == 'Y')
                    cout << endl;
            }
            while (choice == 'y' || choice == 'Y');         //Looping to allow for repeating
            //Display the outputs

            //Exit stage right or left!
            break;
        }
        case '8':
        {
            //Declare Variables
            float oldPrce,              //price of item last year
                  newPrce,              //price of item currently
                  inflR8,               //inflation rate
                  yearOne,              //price in one year
                  yearTwo;              //price in two years
            char choice;                //choice to repeat

            //Initialize or input i.e. set variable values
            do
            {

                cout << "Enter current price:" << endl;
                cin >> newPrce;                         //User input current price
                cout << "Enter year-ago price:" << endl;
                cin >> oldPrce;                         //user input last year price


                //Map inputs -> outputs
                inflR8 = InflationRate(oldPrce, newPrce);       //Function call InflationRate to calculate inflation rate
                cout << fixed << setprecision(2);
                cout << "Inflation rate: " << inflR8 << "%" << endl;
                cout << endl;
                FuturePrices(inflR8, newPrce, yearOne, yearTwo);    //Function call FuturePrices to determine future prices
                cout << "Again:" << endl;
                cin >> choice;                                      //Allow user to repeat
                if (choice == 'y' || choice == 'Y')
                    cout << endl;
            }
            while (choice == 'y' || choice == 'Y');                 //Looping to allow for repeating
            //Display the outputs

            //Exit stage right or left!
            break;
        }
        case '9':
        {
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
            break;
        }
        default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case
    cout << "\nSelect another problem?" << endl;
    cin >> again;
    }while(again == 'y' || again == 'Y');
    //Clean Up
    
    //Exit stage right!
    return 0;
}

float MPGcalc(int miles, float gallons, float MPG)  //Function to calculate MPG
{
    MPG = miles / gallons;
    return MPG;
}

float InflationRate(float oldPrce, float newPrce, float inflR8)     //Function to calculate inflation rate
{
    inflR8 = (newPrce - oldPrce)/oldPrce;
    inflR8 *= 100;
    cout << fixed << setprecision(2);
    cout << "Inflation rate: " << inflR8 << "%" << endl;
    cout << endl;
}

float InflationRate(float oldPrce, float newPrce)           //Function to calculate inflation rate
{
    float inflR8;
    inflR8 = (newPrce - oldPrce)/oldPrce;
    inflR8 *= 100.0f;

    return inflR8;                                          //return inflation rate to be used in other functions and displayed
}

float FuturePrices(float inflR8, float newPrce, float yearOne, float yearTwo)   //Function to calculate future prices
{
    float inc1,             //Increase in first year
          inc2;             //Increase in second year
        
    inc1 = newPrce * (inflR8/100.0f);   //Calc increase based on inflation rate
    yearOne = newPrce + inc1;           //Add increase to current price
    inc2 = yearOne * (inflR8/100.0f);   //Calc second increased based on inflation rate and year one price
    yearTwo = yearOne + inc2;           //Add increase to year one
    
    cout << "Price in one year: $" << yearOne << endl;
    cout << "Price in two year: $" << yearTwo << endl;
    cout << endl;
    
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