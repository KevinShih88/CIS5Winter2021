/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 17, 2021, 1830 hours
 * Purpose:  Savitch_9th_Ch3_Prob1_RockPaperScissors
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
    char player1,                                       //selection for player 1
         player2;                                       //selection for player 2
    
    //Initialize or input i.e. set variable values
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> player1;                                     //Input selection of player 1
    cin >> player2;                                     //Input selection of player 2
   
    //Map inputs -> outputs
    player1 = toupper(player1);                         //Ensure both upper and lower case works
    player2 = toupper(player2);                         //Forces all input selections to be be capital
        
    if (player1 == 'P')                                 //Determine relation based on selections
    {
        if (player2 == 'R')
            cout << "Paper covers rock.";
    }
    
    if (player1 == 'R')
    {
        if (player2 == 'P')
            cout << "Paper covers rock.";
    }
    
    if (player1 == 'S')
    {
        if (player2 == 'P')
            cout << "Scissors cuts paper.";
    }
    
    if (player1 == 'P')
    {
        if (player2 == 'S')
            cout << "Scissors cuts paper.";
    }
    
    if (player1 == 'R')
    {
        if (player2 == 'S')
            cout << "Rock breaks scissors.";
    }
    
    if (player1 == 'S')
    {
        if (player2 == 'R')
            cout << "Rock breaks scissors.";
    }
    
    if (player1 == player2)
        cout << "Nobody wins.";
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}