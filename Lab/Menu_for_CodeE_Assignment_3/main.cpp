  
/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 18, 20201, 1423 hours
 * Purpose: Menu for Code E Assignment 3
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis SortNames Problem"<<endl;
    cout<<"Type 2 for Gaddis Books Problem"<<endl;
    cout<<"Type 3 for Gaddis BankCharges Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Problem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Savitch RockPaperScissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman_Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch CompatibleSigns Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':
        {
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
            //Exit stage right!
            break;
        }
        case '2':
        {
            //Declare Variables
            unsigned short int qbooks,                              //number of books
                               points;                              //points awarded

            //Initialize or input i.e. set variable values
            points = 0;
            cout << "Book Worm Points" << endl;
            cout << "Input the number of books purchased this month." << endl;
            cin >> qbooks;                                          //Enter number of books

            //Map inputs -> outputs
            if (qbooks >= 4)                                        //Determine amount of points awarded
                points += 60;
            else if (qbooks == 3)
                points += 30;
            else if (qbooks == 2)
                points += 15;
            else if (qbooks == 1)
                points += 5;
            else
                points += 0;

            //Display the outputs
            cout << "Books purchased =" << setw(3) << qbooks << endl;
            cout << "Points earned   =" << setw(3) << points;
            //Exit stage right!
            break;
        }
        case '3':
        {
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
            //Exit stage right!
            break;
        }
        case '4':
        {
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
            break; 
        }
        case '5':
        {
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
            break;
        }
        case '6':
        {
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
            break;
        }
        case '7':
        {
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
            break;
        }
        case '8':
        {
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
            if (choice1 == "Picses")
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
            if (choice2 == "Picses")
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
            break;
        }
        default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}