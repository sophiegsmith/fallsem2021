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
    //declaring variables
    string firstName;
    string lastName; 
    int baseSalary;
    double ratePerYear;

    //declare stream variables
    ifstream inFile;
    ofstream outFile;

    //open input file
    inFile.open("input.txt");

    //if (!inFile)
    //{
    //    cout << "Cannot open file." << "Program terminates." << endl; 
    //    return 1;
    //}
    //open output file
    outFile.open ("output.txt");
    
    //get data
    inFile>> firstName >>lastName>> baseSalary>> ratePerYear;
    
    //determine the output
    cout << left;
    cout << fixed << setprecision(2) << setw(6) << endl; 
    cout << "New Salaries after 2 years" << endl;


    return 0; 
}