  
/* 
 * File:   main.cpp
 * Author: Kevin Shih
 * Created on January 18, 2021, 1145 hours
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    bool x,y;//Boolean statements represented in the Table
    
    //Initialize Variables
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //1st Row of the Truth Table
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"   ";
    cout<<(((x^y)^x)?"T":"F")<<"     ";
    cout<<(((x^y)^y)?"T":"F")<<"      ";
    cout<<(!(x&&y)?"T":"F")<<"       ";
    cout<<((!x||!y)?"T":"F")<<"       ";
    cout<<((!(x||y))?"T":"F")<<"       ";
    cout<<(!x&&!y?"T":"F");
    cout<<endl;
    
    //2nd Row of the Truth Table
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"   ";
    cout<<(((x^y)^x)?"T":"F")<<"     ";
    cout<<(((x^y)^y)?"T":"F")<<"      ";
    cout<<(!(x&&y)?"T":"F")<<"       ";
    cout<<((!x||!y)?"T":"F")<<"       ";
    cout<<((!(x||y))?"T":"F")<<"       ";
    cout<<(!x&&!y?"T":"F");
    cout<<endl;
    
    //3rd Row of the Truth Table
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"   ";
    cout<<(((x^y)^x)?"T":"F")<<"     ";
    cout<<(((x^y)^y)?"T":"F")<<"      ";
    cout<<(!(x&&y)?"T":"F")<<"       ";
    cout<<((!x||!y)?"T":"F")<<"       ";
    cout<<((!(x||y))?"T":"F")<<"       ";
    cout<<(!x&&!y?"T":"F");
    cout<<endl;
    
    //4th Row of the Truth Table
    x=y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"   ";
    cout<<(((x^y)^x)?"T":"F")<<"     ";
    cout<<(((x^y)^y)?"T":"F")<<"      ";
    cout<<(!(x&&y)?"T":"F")<<"       ";
    cout<<((!x||!y)?"T":"F")<<"       ";
    cout<<((!(x||y))?"T":"F")<<"       ";
    cout<<(!x&&!y?"T":"F");
    cout<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}