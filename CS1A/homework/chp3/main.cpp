#include <iostream>
#include <fstream>
#include <string> 
#include <iomanip>
#include <cmath>


using namespace std;

void chp3_prog_exercise_1();
void chp3_prog_exercise_2();
void chp3_prog_exercise_3();
void chp3_prog_exercise_4();
void chp3_prog_exercise_5();
void chp3_prog_exercise_6();
void chp3_prog_exercise_7();
void chp3_prog_exercise_8();
void chp3_prog_exercise_9();
void chp3_prog_exercise_10();
void chp3_prog_exercise_11();
void chp3_prog_exercise_12();

const double PI = 3.14159;
int main()
{
   chp3_prog_exercise_1();    
   chp3_prog_exercise_2();
   chp3_prog_exercise_3();
   chp3_prog_exercise_4();
   chp3_prog_exercise_5();
   chp3_prog_exercise_6();
   chp3_prog_exercise_7();
   chp3_prog_exercise_8 ();
   chp3_prog_exercise_9 ();
   chp3_prog_exercise_10();
   chp3_prog_exercise_11();
   chp3_prog_exercise_12();
}


void chp3_prog_exercise_1()
{
    ifstream inData;
    ofstream outData;

    cout << "Running Chapter 3 Progrmain Exerciese 1" << endl; 

    inData.open ("inData.txt");
    outData.open ("outData.txt");

    string fname, lname, dep;
    double salary, bonus, taxes, travel, travel_time, coffee_cost;
    int coffee;


    inData >> fname >> lname >> dep;
    cout << "Name: " << fname << " " << lname << ", Deparament: " << dep << endl;
    outData << "Name: " << fname << " " << lname << ", Deparament: " << dep << endl;

    inData >> salary >> bonus >> taxes;
    cout << fixed<<setprecision(2) << "Monthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "%" << endl;
    outData << fixed<<setprecision(2) << "Monthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "%" << endl;
    cout << fixed<<setprecision(2) << "Paycheck: $" << ((salary * bonus) - ((salary * bonus) * taxes)) << endl;
    outData << fixed<<setprecision(2) << "Paycheck: $" << ((salary * bonus) - ((salary * bonus) * taxes)) << endl;

    inData >> travel >> travel_time;
    cout << fixed<<setprecision(2) << "Distance Traveled: " << travel << " miles, " << "Traveling Time: " << travel_time << "hours" << endl;
    outData << fixed<<setprecision(2) << "Distance Traveled: " << travel << " miles, " << "Traveling Time: " << travel_time << "hours" << endl;
    cout << fixed<<setprecision(2) << "Average Speed: " << (travel / travel_time) << " miles per hour" << endl;
    outData << fixed<<setprecision(2) << "Average Speed: " << (travel / travel_time) << " miles per hour" << endl;

    inData >> coffee >> coffee_cost;
    cout << fixed<<setprecision(2) << "Sale Amount = " << (coffee * coffee_cost) << endl; 
    outData << fixed<<setprecision(2) << "Sale Amount = " << (coffee * coffee_cost) << endl;

    inData.close();
    outData.close();
    cout << endl;

}

void chp3_prog_exercise_2()
{
    cout << "Running Chapter 3 Progrmain Exerciese 2" << endl; 
    double height;

    double radius;
    cout << "Enter the radius of the base of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "Volume of the cylinder= " << PI * pow(radius, 2.0) *height << endl;
    cout << "Surface area: " <<  2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
    cout << fixed<< showpoint << setprecision(2);
    cout << endl;
}

void chp3_prog_exercise_3()
{

    cout << "Running Chapter 3 Progrmain Exerciese 3" << endl; 
    double weight_in_kg;

    cout << "Enter your weight in kilograms: ";
    cin >> weight_in_kg;
 
    cout << fixed<<setprecision(2) << " Your weigth in pounds is: " << (weight_in_kg * 2.2) << " lbs" << endl;
    cout << endl;

}

void chp3_prog_exercise_4()
{
    double cost;
    double area;
    double bagSize;

    cout <<fixed<< showpoint << setprecision(2);

    cout << "Running Chapter 3 Progrmain Exerciese 4" << endl; 
    cout << "Enter the amount of fertilizer, in pounds, " << " in one bag: ";
    cin >> bagSize;
    cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
    cin >> cost;
    cout << "Enter the area, in square feet, that can be" << " fertilized by one bag: ";
    cin >> area;
    cout << "The cost of the fertilizer per pound is: $" << bagSize /cost << endl;
    cout << "The cost of fertilizing per square foot is: $" << area /cost<< endl;
    cout << endl;

}

void chp3_prog_exercise_5()
{
    ifstream inData;
    ofstream outData;

    cout << "Running Chapter 3 Progrmain Exerciese 5" << endl; 

    inData.open ("Ch3_Ex5Data.txt");
    outData.open ("Ch3_Ex5Output.dat");

    string fname, lname;
    double salary,pay_increase;
    

    while (!inData.eof()){    
        inData >> fname >> lname;
        inData >> salary >> pay_increase;
        cout << fixed<<setprecision(2) << "Name: " << fname << " " << lname << " " << (salary * pay_increase) << endl;
        outData << fixed<<setprecision(2) << "Name: " << fname << " " << lname << " "  <<  (salary * pay_increase) << endl;
    }
    inData.close();
    outData.close();
    cout << endl;
}

void chp3_prog_exercise_6()
{

    cout << "Running Chapter 3 Progrmain Exerciese 6" << endl; 

    double mass;
    cout << "Enter the mass in grams: ";
    cin >> mass;
    double density;
    cout << "Enter the density in grams per cubic centimeters: ";
    cin >> density;
     
    cout << fixed<<setprecision(2) << "volume is: " << (mass/density) <<  endl;
    cout << endl;

}

void chp3_prog_exercise_7()
{
    cout << "Running Chapter 3 Progrmain Exerciese 7" << endl; 

    double netbalance;
    cout << "Enter the net balance: ";
    cin >> netbalance;
    double payment;
    cout << "Enter the payment made: ";
    cin >> payment;
    double d1;
    cout << "Enter the number of days in billing cycle: ";
    cin >> d1;
    double d2;
    cout << "Enter the payment days before billing cycle: ";
    cin >> d2;
    double rate;
    cout << "Enter the rate per month (e.g., 0.0152): " ;
    cin >> rate;
    
    cout << fixed<<setprecision(2) << "Average Daily Balance: " << (netbalance *d1 - payment *d2)/d1 << endl;
    cout << fixed<<setprecision(2) << "Interest : " << ((netbalance *d1 - payment *d2)/d1) * rate << endl;
    cout << endl;
}

void chp3_prog_exercise_8()
{
    cout << "Running Chapter 3 Progrmain Exerciese 8" << endl; 
    double tmerch;
    cout << "Enter total merchandise: ";
    cin >> tmerch;
    double tsalary;
    cout << "Enter total salaries: ";
    cin >> tsalary;
    double trent;
    cout << "Enter yearly rent: ";
    cin >> trent;
    double telec;
    cout << "Enter electricity cost: " ;
    cin >> telec; 

    double texpenses = (tmerch + tsalary + trent + telec);
    double adjusted_markup = ((tmerch * .10) + texpenses) / 0.85;
    double markup_percentage = (adjusted_markup * 100)/ tmerch;

    cout << fixed<<setprecision(2) <<"Merchendise should be marked "<< markup_percentage <<" % up." << endl;
    cout << endl;
}

void chp3_prog_exercise_9()
{

    cout  << "Running Chapter 3 Progrmain Exerciese 9" << endl; 

    double c_radius;
    cout << "Enter cylinder radius: ";
    cin >> c_radius;
    double c_height;
    cout << "Enter cylinder heigh: ";
    cin >> c_height;

    double c_vol = pow (c_radius, 2) * c_height;

    double cube_length = cbrt (c_vol);

    cout << fixed<<setprecision(2) << "Side of the cude: " << cube_length << endl;
    cout << endl;
}

void chp3_prog_exercise_10()
{
    cout << "Running Chapter 3 Progrmain Exerciese 10" << endl; 

    double  lyard;
    cout << "Enter the lenght of the yard: ";
    cin >> lyard;
    double tree_radius;
    cout << "Enter the radius of the fully grown tree: ";
    cin >> tree_radius;
    double tree_space;
    cout << "Enter the space between fully grown trees: ";
    cin >> tree_space;

    double tree_volume = pow(tree_radius,2) * PI;
    double number_of_trees = lyard / tree_space;

    cout << fixed<<setprecision(2) << "Number of trees that can be planted is " << number_of_trees << " that will take up " << tree_volume << " of space." << endl;
    cout << endl;

}

void chp3_prog_exercise_11()
{

    cout << "Running Chapter 3 Progrmain Exerciese 11" << endl; 

    double l, w , h , p ;
    cout << "Enter the lenght of candy bar: ";
    cin >> l; 
    cout << "Enter the width of the candy bar: ";
    cin >> w;
    cout << "Enter the hieght of the candy bar: ";
    cin >> h;
    cout << "Enter the percentage to reduce the candy bar: ";
    cin >> p;

    double reduction =  1-(p/100);
    l *= reduction;
    w *= reduction;
   
    cout << fixed<<setprecision(2) << "Candy  new dimentions : " << l << "x" << w << "x" << h << endl; 
    cout << endl;
}

void chp3_prog_exercise_12()
{
    cout << "Running Chapter 3 Progrmain Exerciese 12" << endl; 

    double speed_a, speed_b, hours,min;
    cout << "Enter Car A speed: ";
    cin >> speed_a;

    cout << "Enter Car B speed: ";
    cin >> speed_b;

    cout << "Enter the eplapsed time (hours and minuter): ";
    cin >> hours >> min;

    //convert min to hours 
    double distance_a = speed_a * (hours + (min/60));
    double distance_b = speed_b * (hours + (min/60));

    double shortDistance =sqrt(pow (distance_a, 2) + pow(distance_b,2));

    cout << fixed<<setprecision(2) << "Shortest distance between CarA and CarB: " << " " << shortDistance << " " <<"miles" << endl;
    cout << endl;
}
