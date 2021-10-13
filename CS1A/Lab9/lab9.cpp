/***********************************************************************************
* AUTHOR : Sophie Smith
* STUDENT ID : 1185180
* AUTHOR: Kai Van Westering
* STUDENT ID: 1237498
* LAB #7 : Eclipse Tutorial Lab
* CLASS : CS1A
* SECTION : MW: 8am
* DUE DATE : 10/12/21
***********************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
* INTRO TO PROGRAMMING
*---------------------------------------------------------------------------
* This program will read in two values and output the sum.
*---------------------------------------------------------------------------
* INPUT:
* firstNum – First value to be summed.
* secondNum - Second value to be summed.
*
* OUTPUT:
* sum – The sum of the two values input.
***************************************************************************/


int main()
{
    /***********************************************************************
    * CONSTANTS
    * ---------------------------------------------------------------------
    * OUTPUT - USED FOR CLASS HEADING
    * ---------------------------------------------------------------------
    * PROGRAMMER : Programmer's Name
    * CLASS      : Student's Course
    * SECTION    : Class Days and Times
    * LAB_NUM    : Lab Number (specific to this lab)
    * LAB_NAME   : Introduction to Programming
    ***********************************************************************/
    const char PROGRAMMER1[] = "Sophie Smith";
    const char PROGRAMMER2[] = "Kai Van Westering";
    const char CLASS[]       = "CS1A";
    const char SECTION[]     = "MW: 8am - 10:20";
    const int  LAB_NUM       = 9;
    const char LAB_NAME[]    = "Intro to Programming";

    int firstNum;              //IN, CALC & OUT - first value to sum
    int secondNum;             //IN, CALC & OUT - second value to sum
    int sum;                   //CALC & OUT     - sum of two integers
    float avg;                   //CALC & OUT     - average of 

/***********************************************************************
* OUTPUT – Class Heading
***********************************************************************/
    cout << left;
    cout << "**************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER1 << endl;
    cout << "* PROGRAMMED BY : " << PROGRAMMER2 << endl;
    cout << "* " << setw(14) << "CLASS" << ": " << CLASS << endl;
    cout << "* " << setw(14) << "SECTION" << ": " << SECTION << endl;
    cout << "* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
    cout << "**************************************************\n\n";
    cout << right;

/************************************************************************
* INPUT - reads in two inputs from the user (firstNum & secondNum)
************************************************************************/

cout << "Enter the first integer:  " ;
cin >> firstNum;
cout << firstNum<<endl;

cout << "Enter the second integer:  ";
cin >> secondNum;
cout << secondNum<<endl; 

/***************************************************************************
* PROCESSING - Calculates the sum of the two inputs
***************************************************************************/
sum = firstNum + secondNum;
avg = sum/2.0; 

/***************************************************************************
* OUTPUT - the input and the sum in the following format:
*
firstNum + secondNum = sum
*
*
For example, if firstNum = 32 & secondNum = 41 output will be:
*
*
32 + 41 = 73
***************************************************************************/

cout << endl;
cout << firstNum
     << " + " << secondNum
     << " = " << sum
     << endl;
cout << endl;
cout << "The average is: " 
    << avg << fixed << setprecision(2)
    << endl;
return 0;
}
