 /*************************************************
 * AUTHOR : Kirtan Bhatt
 * STUDENT ID : 1150121
 * AUTHOR: Sophie Smith
 * STUDENT ID: 1185180
 * LAB #10 : Basic Output (Geometry)
 * CLASS : CS1A
 * SECTION : MW:8am
 * DUE DATE : 10/15/2021
 *************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{   
    //constants for class heading output
    const char PROGRAMMER1[] = "Sophie Smith";
    const char PROGRAMMER2[] = "Kirtan Bhatt";
    const char CLASS[]       = "CS1A";
    const char SECTION[]     = "MW: 8am - 10:20";
    const int  LAB_NUM       = 10;
    const char LAB_NAME[]    = "Intro to Programming";

    //variable declaration
    //constants for this prograM
    const int TRIANGLE_AREA = 15; 
    const int RECTANGLE_AREA = 15;
    const int CIRCLE_AREA = 15;
    const char TRIANGLE_AREA[];
    const char RECTANGLE_AREA;
    const char CIRCLE_AREA;
    const char 

    //variable declaration for program
	double heightTriangle; //IN height of triangle to calc area of triangle
	double baseTriangle;   //IN base of triangle to calc area  of triangle
	double areaTriangle;   //CALC & OUT area of triangle
	double widthRectangle; //IN width of rectangle to calc area of rectangle
	double heightRectangle;//IN height of rectangle to calc area of rectangle
	double areaRectangle;  //CALC & OUT area of rectangle
    int radiusCircle;      //IN radius of circle to calc area of circle
    double areaCircle;     //CALC & OUT area of circle

    //INPUT
    cout << "Enter the height of the triangle: " << endl;
    cin >> heightTriangle;
    cout << "Enter the base of the triangle: " << endl;
    cin >> baseTriangle;
    cout << endl;
    cout << "Enter the width of the rectangle: " << endl;
    cin >> widthRectangle;
    cout << "Enter the height of the rectangle: " << endl;
    cin >> heightRectangle;
    cout << endl;
    cout << "Enter the radius of the circle: " << endl;
    cin >> radiusCircle;
    cout << endl;
    cout << endl;

    //OUTPUT - class heading
    cout << left;
    cout << "**************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER1 << endl;
    cout << "* PROGRAMMED BY : " << PROGRAMMER2 << endl;
    cout << "* " << setw(14) << "CLASS" << ": " << CLASS << endl;
    cout << "* " << setw(14) << "SECTION" << ": " << SECTION << endl;
    cout << "* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
    cout << "**************************************************\n\n";
    cout << right;

    //Prpcessing
    areaTriangle = (heightTriangle*baseTriangle) /2;
    areaRectangle = widthRectangle*heightRectangle;
    areaCircle = 3.14159*(radiusCircle*radiusCircle);

    //OUTPUT
    cout << "Enter the height of the triangle: " << heightTriangle << endl;
    cout << "Enter the base of the triangle: " << baseTriangle << endl << endl;
    cout << "Enter the width of the triangle: " << widthRectangle << endl;
    cout << "Enter the height of the rectangle: " << heightRectangle << endl; 
    cout << "Enter the radius of the circle: " << radiusCircle << endl << endl << endl << endl << endl;

    
    return 0;
 }

