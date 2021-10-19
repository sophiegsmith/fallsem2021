/**********************************************************
* AUTHOR1: Sophie Smith
* AUTHOR2: Nick Greene
* STUDENT ID1: 1185180
* STUDENT ID2: 
* LAB #11: Basic Input & Output - Pocket Money
* CLASS: CS1A
* SECTION: MW-8am
* DUE DATE: 10/22/21
**********************************************************/
// place preprocessor directives here
#include <iomanip>
#include <iostream>
#include<math.h>
using namespace std;
/**********************************************************************
* Pocket Money Program
*_____________________________________________________________________
*
* This program receives the pocket money left over from the previous
* week and the amount spent in the current week from the user an
* calculates how much pocket money is remaining. Each week the user
* is allocated an allowance.
*_____________________________________________________________________
* INPUT:
*name: The user’s name.
*amtLeftover : Amount leftover from the previous week.
*spent: Amount spent this week.
* OUTPUT:
*name: User’s Name
*pocketMoney : Amount of pocket money remaining
************************************************************************/


int main()
{
// Declare your constants here include a table describing them
const int PROMPT_COL = 32;
const int NAME_SIZE = 25;


// Declare your variables here -- include your data table
double amtLeftover;             //INPUT & CALCULATE
double spent;                   // INPUT & CALCULATE
char name[NAME_SIZE];
/**********************************************************************
* OUTPUT - class heading (from eclipse lab here)
**********************************************************************/

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
    const char PROGRAMMER2[] = "Nick Greene";
    const char CLASS[]       = "CS1A";
    const char SECTION[]     = "MW: 8am - 10:20";
    const int  LAB_NUM       = 11;
    const char LAB_NAME[]    = "Basic Input & Output";

/**********************************************************************
* INPUT: (description of your input)
**********************************************************************/

cout << left;
cout << PROMPT_COL<< "What is your name? ";
cin.getline(name,NAME_SIZE);
cout << PROMPT_COL<< "How much is left from last week? ";
cin >> amtLeftover;
cin.ignore(1000, '/n');
cout << PROMPT_COL<< "How much have you spent? ";
cin >> spent;
cin.ignore (1000, '/n');
cout << right; 

/**********************************************************************
* PROCESSING: (description of your processing)
**********************************************************************/



/**********************************************************************
* OUTPUT: (description of your output)
**********************************************************************/





return 0;
}