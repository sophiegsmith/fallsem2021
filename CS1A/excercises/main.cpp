#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    //variable declatration
    const int COL_WIDTH = 13;
    double val1  = 1234.56789101;
    double val2  = 123.4567; 
    float val3   = 12345; 
    float val4   = 12.34;
    float val5   = 12; 

    //OUTPUT
    cout << setw(COL_WIDTH) << val1 << endl
         << setw(COL_WIDTH) << val2 << endl
         << setw(COL_WIDTH) << val3 << endl
         << setw(COL_WIDTH) << val4 << endl
         << setw(COL_WIDTH) << val5 << endl;
    
    
    cout << fixed; 
    cout << setw(COL_WIDTH) << val1 << endl
         << setw(COL_WIDTH) << val2 << endl
         << setw(COL_WIDTH) << val3 << endl
         << setw(COL_WIDTH) << val4 << endl
         << setw(COL_WIDTH) << val5 << endl;

    cout << setprecision(3); 
    cout << setw(COL_WIDTH) << val1 << endl
         << setw(COL_WIDTH) << val2 << endl
         << setw(COL_WIDTH) << val3 << endl
         << setw(COL_WIDTH) << val4 << endl
         << setw(COL_WIDTH) << val5 << endl;

    cout << showpoint; 
    cout << setw(COL_WIDTH) << val1 << endl
         << setw(COL_WIDTH) << val2 << endl
         << setw(COL_WIDTH) << val3 << endl
         << setw(COL_WIDTH) << val4 << endl
         << setw(COL_WIDTH) << val5 << endl;

    cout << setprecision(3) << fixed; 
    cout << setw(COL_WIDTH) << val1 << endl
         << setw(COL_WIDTH) << val2 << endl
         << setw(COL_WIDTH) << val3 << endl
         << setw(COL_WIDTH) << val4 << endl
         << setw(COL_WIDTH) << val5 << endl;

    cout << setprecision(3) << showpoint; 
    cout << setw(COL_WIDTH) << val1 << endl
         << setw(COL_WIDTH) << val2 << endl
         << setw(COL_WIDTH) << val3 << endl
         << setw(COL_WIDTH) << val4 << endl
         << setw(COL_WIDTH) << val5 << endl;

    cout << setprecision(3) << showpoint << fixed; 
    cout << setw(COL_WIDTH) << val1 << endl
         << setw(COL_WIDTH) << val2 << endl
         << setw(COL_WIDTH) << val3 << endl
         << setw(COL_WIDTH) << val4 << endl
         << setw(COL_WIDTH) << val5 << endl;

    return 0;
}