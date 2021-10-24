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
    
//constants for program 
const float WEEKLY_POCKET_MONEY = 20.00;
const int NAME_SIZE = 25;

// Declare your variables here -- include your data table
double amtLeftover;             // INPUT & CALCULATE
double spent;                   // INPUT & CALCULATE
char name[NAME_SIZE];           // INPUT 
float currentMoney;
float pocketMoney; 

/**********************************************************************
* OUTPUT - class heading (from eclipse lab here)
**********************************************************************/
    cout << left;
    cout << "**************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER1 << endl;
    cout << "* PROGRAMMED BY : " << PROGRAMMER2 << endl;
    cout << "* " << setw(14) << "CLASS" << ": " << CLASS << endl;
    cout << "* " << setw(14) << "SECTION" << ": " << SECTION << endl;
    cout << "* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
    cout << "**************************************************\n\n";
    cout << right;

/**********************************************************************
* INPUT: (prompts the user their name, amount left, and amount spent)
**********************************************************************/
    cout << left;
    cout << setw(32) << "What's your name? " <<endl; 
    cin.getline(name, NAME_SIZE);
    cout << setw(32) << "How much is left from last week? " << endl;
    cin >> amtLeftover;
    cout << setw(32) << "How much have you spent? " << endl;
    cin >> spent;
    cout << endl << right << endl;


/**********************************************************************
* PROCESSING: (calculates the currentMoney, and the pocketMoney)
**********************************************************************/
    
    currentMoney = spent - amtLeftover;
    pocketMoney = WEEKLY_POCKET_MONEY - currentMoney;

/**********************************************************************
* OUTPUT: (outputs the name, amtLeftover, spent, and pocketMoney)
**********************************************************************/
    cout << left; 
    cout << fixed;
    cout << setprecision(2); 
    cout << setw(32)<< "What's your name? " << name << endl; 
    cout << setw(32)<< "How much is left from last week " << amtLeftover << endl;
    cout << setw(32)<< "How much have you spent? " << spent << endl;
    cout << endl << endl; 
    cout << "Hello " << name << "!" << endl;
    cout << "You now have $" << pocketMoney << " left. " << endl;

return 0;
}