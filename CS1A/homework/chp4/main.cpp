#include <iostream>
#include <fstream>
#include <string> 
#include <iomanip>
#include <cmath>

using namespace std;
const double PI= 3 * 1416;

void chp4_prog_exercise_4();
void chp4_prog_exercise_5();
void chp4_prog_exercise_8();
void chp4_prog_exercise_14();
void chp4_prog_exercise_20();
void chp4_prog_exercise_21();



int main()
{
    chp4_prog_exercise_4();
    chp4_prog_exercise_5();
    chp4_prog_exercise_8();
    chp4_prog_exercise_14();
    chp4_prog_exercise_20();
    chp4_prog_exercise_21();
}

void chp4_prog_exercise_4()
{
    string shape;
    double height;
    double length;
    double width;
    double radius;

    cout << "Running Chapter 4 Progrmain Exerciese 4" << endl;

    cout << "Enter the shape type: (rectangle, circle, cylinder) ";
    cin >> shape;
    cout <<fixed<< showpoint << setprecision(2);

    if (shape == "rectangle") {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle : ";
        cin >> width;
        cout << "Perimeter of the rectangle= " << 2 * (length+ width) << endl;
        cout << "Area of the rectangle=" << length * width<< endl;
    }else if (shape == "circle"){
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Circumference of the circle: " << 2 * PI * radius << endl;
        cout << "Area of the circle = " << PI * pow(radius, 2.0) << endl;
    }else if (shape== "cylinder"){
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << "Enter the radius of the base of the cylinder: ";
        cin >> radius;
        cout << "Volume of the cylinder = "<< PI* pow(radius, 2.0)* height << endl;
        cout << "Surface area of the cylinder: " << 2 * PI * radius * height + 2 * PI * pow(radius,2.0) << endl;
    } else {
         cout << "The program does not handle " <<shape<< endl;
    }
   cout << endl; 
}

void chp4_prog_exercise_5()
{
    cout << "Running Chapter 4 Progrmain Exerciese 5" << endl; 
    int  h1, h2, h3;
    cout << "Enter length of the three sides of a triangle: ";
    cin >> h1 >> h2 >> h3;

    int a = h1 * h1;
    int b = h2 * h2;
    int c = h3 * h3;


    if ( h1 == 3 &&  h2 == 4  && h3 == 5){
        cout << "Right triangle" << endl;
    }else if ((a == b) || (b == c) || (c == a)){
        cout << "Right triangle" << endl;
    } else {
        cout << "Not a Right triangle" << endl;
    }
    cout << endl;

}

void chp4_prog_exercise_8()
{
    cout << "Running Chapter 4 Progrmain Exerciese 5" << endl; 
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+,-,/,*): ";
    cin >> op;
    int value;
    if (op == '+'){
        value = a + b;
    } else if (op == '*'){
        value = a * b;
    } else if (op == '-'){
        value = a - b;
    } else if (op == '/'){
        if (b <= 0){
            cout << "Bad value for denominator" << endl;
            return;
        } 
        value = a / b;
    }
    cout << "Result is: " << value << endl;
    cout << endl;
    
}
void chp4_prog_exercise_14()
{
    cout << "Running Chapter 4 Progrmain Exerciese 14" << endl; 
    int hours;
    cout << "Enter number of hours parked: ";
    cin >> hours;

    if (hours >= 0 && hours <= 3 ){
        cout << "Parking fee: $" << 5 << endl;
    }else if (hours > 3 && hours <= 9 ){
        cout << "Parking fee: $" <<  6 * (hours + 1);
    }else if (hours > 9  ){
        cout << "Parking fee: $" << 60 << endl;
    }
    cout << endl;
    
}
void chp4_prog_exercise_20()
{
    const int ROOM_RATE = 100;
    const int SALES_TAX = 0.10;

    cout << "Running Chapter 4 Progrmain Exerciese 20" << endl; 
    //double room_rate;
    //cout << "Enter room rate: ";
    //cin >> room_rate;
    double room_count;
    cout << "Enter the number of rooms: ";
    cin >> room_count;
    double number_of_days;
    cout << "Enter the number of days: ";
    cin >> number_of_days;
    double room_sales_tax;
    //cout << "Enter sales tax: ";
    //cin >> room_sales_tax;

    //double total = room_count * room_rate + ((room_count * room_rate) * room_sales_tax); 
    double total = ROOM_RATE * number_of_days * room_count;
    double discount;

    if (room_count >= 10){
       discount = .10;
    }
    if (room_count >= 20){
        discount = .20;
    }
    if (room_count >= 30){
        discount = .30;
    }

    double discount_percent = total * discount;

    if (number_of_days > 3){
        discount = .05;
    }
    room_sales_tax = total * SALES_TAX;
    discount_percent = total * discount;
    cout << "Room cost: " << ROOM_RATE << endl; 
    cout << "Discount:" << discount_percent << endl;
    cout << "Number of rooms booked: " << room_count << endl;
    cout << "Totoal cost: " << total + room_sales_tax << endl;
    cout << endl;
    
}
void chp4_prog_exercise_21()
{
    
    cout << "Running Chapter 4 Progrmain Exerciese 21" << endl; 
    double x1, y1;
    cout << "Enter two point on the plane (x,y): ";
    cin >> x1 >> y1;
    double x2, y2;
    cout << "Enter next two point on the plane (x,y): ";
    cin >> x2 >> y2;
    //get slop
    double m = (y2 - y1)/(x2 -x1);
    //get y-intercep  
    double b = y2 - m * x2;
    
    cout << "The equation of the line is:  y = mx + b where m = " << m << ", x = " << (x2 - x1) << ", b = " << b << endl;

    if (y2 > y1 && x2 > x1) {
        //line is increasing 
        cout << "Line is increasing";
    } else  if (y2 < y1 && x2 < x1){
        //line decreasing
        cout << "Line is decreasing";
    }else if (y2 == y1){
        // line horizontal 
        cout << "Line is horizontal";
    } else if ( x2 == x1) {
       // line verical      
       cout << "Line is verical";
    }

    cout << endl;

}



