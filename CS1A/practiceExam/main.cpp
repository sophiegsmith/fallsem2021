/*
    NAME: Sophie smith
    DATE: 11/2/21
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    //declare stream variables
    ifstream inFile;
    ofstream outFile;
    
    //open input file
    inFile.open("input.txt");

    if (!inFile)
    {
        cout << "Cannot open file." << "Program terminates." << endl; 
        return 1;
     } else {cout << "file opened"<<endl;}

    //open output file
    outFile.open ("output.txt");
    if (!outFile)
    {
        cout << "Cannot open file." << "Program terminates." << endl; 
        return -2;
     } else {cout << "file opened"<<endl;}

    //declaring variables
    string firstName = " ";
    string lastName = " "; 
    int baseSalary = 0.0;
    double percentIncrease = 0.0;

    //loop output
    do {
        //get data and calculate salary
        inFile >> lastName >> firstName >> baseSalary >> percentIncrease;
        double salaryMultiplier = 1 + percentIncrease/ 100;
        double newSalary = baseSalary * salaryMultiplier * salaryMultiplier; 
        
        //output the data
        cout << setprecision(2) << fixed << showpoint << endl; 
        cout << left << "New Salaries: " << setw(10) << lastName << setw(10) << firstName << right << setw(3) <<
       "$" << newSalary << setw(7) << endl;
    } while (!inFile.eof());
    inFile.close();
    outFile.close();
    return 0; 
}

