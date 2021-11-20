#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

//constatns
const double PI = 3.14159;

//programming excercises
void programming_excercise_1();
void programming_excercise_2(); 
void programming_excercise_3();
void programming_excercise_4();
void programming_excercise_5();
void programming_excercise_6();
void programming_excercise_7();
void programming_excercise_8();
void programming_excercise_9();
void programming_excercise_10();
void programming_excercise_11();
void programming_excercise_12();
void programming_excercise_13();
void programming_excercise_14();
void programming_excercise_15();
void programming_excercise_16();
void programming_excercise_17();
void programming_excercise_18();
void programming_excercise_19();
void programming_excercise_20();
void programming_excercise_21();
void programming_excercise_22();
void programming_excercise_23();
void programming_excercise_24();
void programming_excercise_25();
void programming_excercise_29();
void programming_excercise_30();
void programming_excercise_31();
//starting excercise 1
bool isPalindrome(string str)
{
    int length = str.length();

    for (int i = 0; i < length / 2 ; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
           str[i]=str[i]+32;  
        }
        if(str[length-1-i]>=65 && str[length-1-i]<=90)
        {
           str[length-1-i]=str[length-1-i]+32;
        }
        if (str[i] != str[length - 1 - i])
        {
            return false;
        }
    }
    return true; 
}
void programming_excercise_1()
{
    string str; 
    cout << "Enter a string: ";
    cin >> str;

    cout << "The string  " << str << " is";

    if (isPalindrome(str))
        {cout << " a palindrome. ";}
    else
        {cout << " not a palindrome. ";}   
}
//end of 1

//starting 2
bool isVowel(char letter)
{
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || 
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
      return true;
   }
   return false;
}
void programming_excercise_2()
{
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    cout << "The letter " << letter << " is ";

    if(isVowel(letter))
        {cout << "a vowel.";}
    else
        {cout << "not a vowel.";}
}
// end of 2

//starting 3
bool isVowel2(char letter)
{
    char letter2 = tolower(letter);
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') 
    {
      return true;
    }
   return false;
}
void programming_excercise_3()
{
    int count = 0;
    int len;
    string myString;
    cout << "Enter a sequence of characters: ";
    getline(cin,myString); 
    len = myString.length();

    for (int i = 0; i < len; i++)
    {
        if (isVowel(myString[i]))
        count++;
    }

    if (count == 0)
        cout << "There were 0 vowels.\n";
    else if (count == 1)
        cout << "There was 1 vowel.\n";
    else
        cout << "There were " << count << " vowels.\n";
}
//end of 3

//starting 4
void programming_excercise_4()
{
    const double PI = 3.14159;
    double r = 0;

    cout << "Enter the radius of the sphere: ";
    cin >> r; 
    cout << "Square root of Pi = " << sqrt(PI) << endl;
    cout << "Surface are of sphere = " << 4 * PI * pow(r, 2.0) << endl;
    cout << "Volume of sphere = " << (4.0/3.0) * PI * pow(r, 3.0) << endl;
}
// ending 4

//starting 5
void printStars(int blanks, int starsInLine)
{
    int count;
    for (count = 1; count <= blanks; count++)
    {
        cout << ' ';
    }

    for (count = 1; count <= starsInLine; count++)
    {
        cout << " *";
    }

    cout << endl;
}

void funOne(int a, int& b, char v)
{
    int one;
    one = a;
    a++;
    b = b * 2;
    v = 'B';
    cout << "Line 26: Inside funOne: a =" << a << ", b=" << b << ", and v = " << v << endl;
}

void funTwo(int& x, int y, char& w)
{
    x++;
    y = y * 2;
    w = 'G';
    cout << "Line 33: Inside funTwo: x =" << x << ", y=" << y << ", and W = " << w << endl;
}

void programming_excercise_5()
{
    //for exanple 6-11
    int noOflines;
    int noOfBlanks; 
    int counter;
    cout << "Enter number of star lines(1-20): ";
    cin >> noOflines;

    while(noOflines < 0 || noOflines > 20)
    {
        cout << "Enter the number of star lines to be printed(1-20): ";
        cin >> noOflines;
    }

    cout << endl << endl;
    noOfBlanks = 30;
    //noOflines = 15; 
    for (counter = 1; counter <= noOflines; counter ++)
    {
        printStars(noOfBlanks, counter);
        noOfBlanks--;
    }    

    //for example 6-14
    int num1, num2;
    char ch1;
    num1 = 10;
    num2 = 15;
    ch1 = 'A';

    cout << "Line 12: Inside main: num 1 =" << num1 << ", num2=" << num2 << ", and ch = " << ch1 << endl;
    funOne(num1, num2, ch1);

    cout << "Line 14: After funOne: num 1 =" << num1 << ", num2=" << num2 << ", and ch = " << ch1 << endl;
    funTwo(num2, 25, ch1);

    cout << "Line 16: After funTwo: num 1 =" << num1 << ", num2=" << num2 << ", and ch = " << ch1 << endl;
}
//end of 5

//start of 6
void num_func()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Two times the number: " << 2 * a << endl;
    }
    else
    {
        cout << "Five times the number: " << 5 * a << endl;
    }
}
void avg_func()
{
    int numx, numy, count = 0;
    float avg = 0;
    float sum = 0;

    cout << "Enter two integers: " << endl;
    cin >> numx >> numy;

    if (numx > numy)
    {
        int temp = numx;
        numx = numy;
        numy = temp;
    }

    for (int i = numx; i <= numy; i++)
    {
        sum = sum + i;
        count ++;
    }
    avg = sum/count;
    cout << "Sum of integers from " << numx << " to " << numy << " is " << sum << endl;
    cout << "Average of the integers: " << avg << endl;
}
void programming_excercise_6()
{
    num_func();
    avg_func();
}
//end of 6

//for programming excerised 7
int getNumberFromUser()
{
    int number = 0;
    cout << "Enter a number : ";
    cin >> number; 

    while (number < 0)
        cout << "Invalid entry. Enter a number: ";
        cin >> number; 
    return number; 
}

bool isPrime(int number)
{
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false; 
        }
    }
    return true; 
}

int calculateSumOfPrimesBetween(int number1, int number2)
{
    int sum = 0;
    for (int i = min(number1, number2) ; i<= max(number1, number2); i++)
    {
        if (isPrime(i))
        {
            sum +=1;
        }
    }
    return sum; 
}

void programming_excercise_7()
{
    int num1 = getNumberFromUser();
    int num2 = getNumberFromUser();
    int sum = calculateSumOfPrimesBetween(num1,num2);
    cout << "Sum of primes is " << sum << endl; 

}
//end of program excercise 7

//start of 8
double rectangle(double l, double w)
{
    return l * w;
}

double circle(double r)
{
    double PI = 3.1419; 
    return r * r * PI; 
}

double cylinder(double br, double h)
{
    double PI = 3.1419;
    return PI * br * br * h; 
}
void programming_excercise_8()
{
    
    int choice; 
    string shape;
    double height;
    double length;
    double width;
    double radius;

    cout <<fixed<< showpoint << setprecision(2);
    cout << "To run the program enter: "<< endl;
    cout << "1: To find the area of rectangle. " << endl; 
    cout << "2: To find the area of circle. " << endl;
    cout << "3: To find the area of cylinder. " << endl;
    cout << "-1: To terminate the program. " << endl;
    cin >> choice;
    cout << endl;
    while (choice != -1)
    {
        switch(choice)
        {
            case  1:
                cout << "Enter the length  and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of Rectangle = " << rectangle(length, width) << endl;
                break;

            case 2:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "Area of Cirlce = " << circle(radius) << endl; 
                break;

            case 3: 
                cout << "Enter the radius of the base of the cylinder: ";
                cin >> radius;
                cout << "Enter the height of the cylinder: ";
                cin >> height;
                cout << "Volume of Cylinder= " << cylinder(radius, height) << endl; 
                break; 
            default: 
                cout << "Invalid choice!" << endl;
        }
        cout << "To run the program enter: "<< endl;
        //cin >> choice; 
        cout << "1: To find the area of rectangle. " << endl; 
        cout << "2: To find the area of circle. " << endl;
        cout << "3: To find the area of cylinder. " << endl;
        cout << "-1: To terminate the program. " << endl;
        cin >> choice;
        cout << endl;
    }
}
//end of 8

//starting program excercise 9
int reverseDigit(int number)
{
    int reverse = 0; 
    bool isNegative = false;

    if (number < 0)
    {
        number = -1 * number;
        isNegative = true; 
    }
    while(number > 0)
    {
        int lastDigit = number % 10;
        reverse = reverse * 10 + lastDigit;
        number /= 10;   
    }
    if (isNegative)
    {
        reverse = -1 * reverse; 
    }
    return reverse; 
}
void programming_excercise_9()
{
    cout << reverseDigit(12345) << endl;
    cout << reverseDigit(-532) << endl;
}
// end of programming excercise 9

//starting 10
int rollDice(int num)
{
    int die1;
    int die2;
    int sum;
    int rollCount = 0;
    
    srand(time(0));

    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        rollCount++;
    } while (sum!=num);
    return rollCount;
}

void programming_excercise_10()
{
    //int choice;
    //do
    //{
        /* code */
        //int desiredSum;
        //cout << "Enter the desired sum of numbers to be rolled: ";
        //cin>>desiredSum;
        //cout << endl << "the numebr of times the dice is rolled to =" << desiredSum << rollDice(desiredSum) << endl;
        //cout << "To play, enter 1, other numbers will terminate." << endl;
        //cin >> choice;
    //} while (choice == 1);
    
    cout << "The number of times the dice are rolled to get the sum of 10 = " <<rollDice(10) << endl;
    cout << "The number of times the dice are rolled to get the sum of 6 = " << rollDice(6) << endl;
}
//end of 10

//starting 11
double distance(double x1Point, double y1Point, double x2Point, double y2Point)
{
    return sqrt(pow(x2Point - x1Point, 2.0) + pow(y2Point - y1Point, 2.0));
}

double radius(double x1Point, double y1Point, double x2Point, double y2Point)
{
    return (x1Point, y1Point, x2Point, y2Point);
}

double circumference(double r)
{
    return 2 * PI  * r; 
}

double area (double r)
{
    return PI * r * r;
}

void programming_excercise_11()
{
    double x1, y1, x2, y2;
    double distanceOfThePoints;
    double radiusCircle;
    double circumferenceOfCircle;
    double circleArea;

    cout << "Enter the points for the center of the circle: ";
    cin >> x1 >>y1;

    cout << "Enter any point on the circle: ";
    cin >> x2 >> y2;

    distanceOfThePoints = distance(x1, y1, x2, y2);

    cout << "/n The distance between the points: " << distanceOfThePoints << endl;

    radiusCircle = radius(x1, y1, x2, y2);
    cout << "The radius of the circle: " << radiusCircle << endl;

    circumferenceOfCircle = circumference(radiusCircle);
    cout << "The circumference of the circle: " << circumferenceOfCircle << endl;

    circleArea = area(radiusCircle);
    cout << "The area of the circle: " << circleArea << endl;
}
//ending 11

//starting 12
double mean( double x1, double x2, double x3,double x4, double x5)
{
    return (x1 + x2 + x3 + x4 + x5)/5;
}
double standardDeviation(double x1, double x2, double x3,double x4, double x5, double x)
{
    double sd;
    sd = pow((x1 -x), 2) + pow((x2 -x), 2) + pow((x3 -x), 2) + pow((x4 -x), 2) + pow((x5 -x), 2)/5.0; 
    return sd; 
}
void programming_excercise_12()
{
    double x1, x2, x3,x4,x5;
    double x,s;

    cout << "Enter value of x1= ";
    cin >> x1;
    cout << "Enter value of x2= ";
    cin >> x2;
    cout << "Enter value of x3= ";
    cin >> x3;
    cout << "Enter value of x4= ";
    cin >> x4;
    cout << "Enter value of x5= ";
    cin >> x5;

    x = mean(x1, x2, x3,x4,x5);
    cout << "The mean value is " << x << endl;

    s = standardDeviation(x1, x2, x3,x4,x5,x);
    cout << "The mean standard deviation is " << s << endl;
}
//ending 12

//starting 13
double calculatePayment(double L, double r, double m, double t)
{
    double i = r/m;
    return(L * i)/1 - pow(1 + i, -1 * m * t);
}

double calculateUnpaidBalance(double L, double r, double m, double t, double k)
{
    double i = r / m;
    double payment = calculatePayment(L, r, m, t);
    return payment * ((1 - pow(1 + i, -1 * (m * t - k)))/ i);
}

void programming_excercise_13()
{
    double L = 0;
    double r = 0;
    double m = 0;
    double t = 0;
    double k = 0; 
    char runAgain = 'Y';

    while (runAgain == 'Y' || runAgain == 'y')
    {
        cout << "Enter L: ";
        cin >> L; 

        cout << "Enter r: ";
        cin >> r; 

        cout << "Enter m: ";
        cin >> m; 

        cout << "Enter t: ";
        cin >> t; 

        cout << "Enter t: ";
        cin >> t; 

        cout << "Periodic Payment: " << calculatePayment(L, r, m, t) << endl;
        cout << "Unpaid Balance: " << calculateUnpaidBalance(L, r, m, t, k) << endl;
        
        cout << "Run again (Y/N)?" << endl;
        cin >> runAgain; 
    }
}
//end of 13

//starting 14
void programming_excercise_14()
{

}
//ending 14

//starting 15
void read_input(double &v, double &t)
{
    cout << "Enter wind speed (miles per hour): ";
    cin >> v;
    cout << "Enter temperature (Farenheit): ";
    cin >> t;
}
double calc_wcFactor(double &v, double &t)
{
    return (35.74 + 0.6215 * t - 35.75 * pow(v, 0.16)+ 0.4275 * t * pow(v, 0.16));
}
void programming_excercise_15()
{
    double wcFactor, velocity, temperature;
    read_input(velocity, temperature);
    wcFactor = calc_wcFactor(velocity, temperature);
    cout << "Wind Chill Factor is: " << wcFactor << endl;
}
//ending 15

//starting 16
void initialize(int &x, int &y, char &z)
{
    x = 0;
    y = 0;
    z = ' ';
}

void getHoursRate(double& hours, double& rate)
{
    cout << "Enter the number of hours worked: ";
    cin >> hours;
    cout << "Enter the rate per hour: ";
    cin >> rate; 
}

double payCheck(double hours, double rate)
{
    double amtToBePaid = 0;
    if (hours <= 40)
    {
        amtToBePaid = hours * rate;
    } 
    else
    {
        amtToBePaid = (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    return amtToBePaid;
}

void printCheck(double hours, double rate, double amount)
{
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Hours worked: " << hours << endl;
    cout << "Hourly Rate: " << rate << endl;
    cout << "Salary: $" << amount << endl;
}

void funcOne(int& x, int& y)
{
    int num;
    cout << "Enter a number: ";
    cin >> num; 
    x = 2 * x + y - num;  
}

void nextChar(char &z)
{
    z++; 
}

void programming_excercise_16()
{
    int x, y;
    char z;
    double rate, hours, amount;

    initialize(x, y, z);
    getHoursRate(rate, hours);
    amount = payCheck(hours, rate);
    printCheck(hours, rate, amount);

    cout << "Initial values of x, y, and z are "<< endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    funcOne(x, y);
    nextChar(z);

    cout << "Updated values of x, y, and z are "<< endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
//end of 16

//start of 17
void func1()
{
    cout << "To run the program, enter 1. " << endl;
    cout << "To exit the program, enter 99." << endl;
    cout << "Enter 1 or 99: ";
}
void func2(int& a, int& b, double &c)
{
    if (a != 0 && b != 0)
    {
        if ( a <= b)
        {
            c = pow(a, b);
        }
        if ( a < b)
        {
            c = pow(b, a);
        }
    }

    if(a != 0 && b == 0)
    {
        c = sqrt(abs(a));
    }

    if(a == 0 && b!= 0)
    {
        c = sqrt(abs(b));
    }

    if( a == b && a == 0)
    {
        c = 0; 
    }
}
void programming_excercise_17()
{
    int num1, num2;
    double num3;
    int choice;

    cout << fixed << showpoint << setprecision(2) << endl;
    do
    {
        func1();
        cin >> choice;
        cout << endl;

        cout << "Enter the first integer number: ";
        cin >> num1;

        cout << "Enter the second integer number: ";
        cin >> num2;

        if (choice == 1)
        {
            func2(num1, num2, num3);
            cout << num1 << ", " << num2 << ", " << num3 << endl;
        }
    } while (choice != 99);
}
//end of 17

//start 0f 18
void timeOnJob(int arvHr, int arvMin, bool arvIsAM, int depHr, int depMin, bool depIsAM)
{
    int arvTimeInMin;
    int depTimeInMin;
    int timeOnJobInMin;
    arvTimeInMin = arvHr * 60 * arvMin;
    depTimeInMin = depHr * 60 * depMin;

    if((arvIsAM == true && depIsAM == true) || (arvIsAM == false && depIsAM == false))
    {
        if (arvTimeInMin <= depTimeInMin)
        {
            timeOnJobInMin = depTimeInMin - arvTimeInMin; 
            cout << "Time spent on job: " << timeOnJobInMin/60 << "hour(s) and " << timeOnJobInMin % 60 << " min. " << endl;
        }
        else
        {
            cout << "Invalid Input. " << endl;
        }
    }
    else if (arvIsAM  == true && depIsAM == false)
    {
        timeOnJobInMin = (720 - arvTimeInMin) + depTimeInMin;
        cout << "Time spent on job: " << timeOnJobInMin/60 << "hour(s) and  timeOnJobInMin = " << (720 - arvTimeInMin) + depTimeInMin << endl; 
        cout << "Time spent on job: " << timeOnJobInMin/60 << "hour(s) and " << timeOnJobInMin % 60 << " min. " << endl;
    }    
    else 
    {
        cout << "Invalid Input."; 
    }
}

void programming_excercise_18()
{
    string employeeName;
    int arrivalHr;
    int arrivalMin;
    bool arrivalAM;
    int departureHr;
    int departureMin;
    bool departureAM;
    char response;
    char discard; 
    char isAM;

    cout << "This program calculates the total time spent by an employee on the job." << endl;
    cout << "To enter the program, enter(y/Y): ";
    cin >> response;
    cin.get(discard);
    cout << endl; 

    while(response == 'y' || response == 'Y')
    {
        cout << "Enter employee's name: ";
        getline(cin, employeeName); 
        cout << endl; 
        cout << "Enter arrival hour: ";
        cin >> arrivalHr;
        cout << endl;
        cout << "Enter arrival min: ";
        cin >> arrivalMin; 
        cout << endl; 
        cout << "Enter (y/Y) if arrival is before 12:00 PM: ";
        cin >> isAM; 
        cout << endl; 

        if (isAM == 'y' || isAM == 'Y')
            arrivalAM = true;
        else 
            arrivalAM = false;
        
        cout << "Enter departure hour: ";
        cin >> departureHr;
        cout << endl;
        cout << "Enter departure min: ";
        cin >> departureMin; 
        cout << endl; 
        cout << "Enter (y/Y) if departure is before 12:00 PM: ";
        cin >> isAM; 
        cout << endl;

        if (isAM == 'y' || isAM == 'Y')
            departureAM = true;
        else 
            departureAM = false;
        
        cout << employeeName << endl;
        timeOnJob(arrivalHr, arrivalMin, arrivalAM, departureHr,departureMin, departureAM);
    }
}
//end of 18

//start of 19
void getScore(int& score)
{
    cout << "Enter course score: ";
    cin >> score;
    cout << "Course score is " << score << endl;
}

char calculateGrade(int courseScore)
{
    if(courseScore >= 90)
        return 'A';
    else 
        if(courseScore >= 80)
            return 'B';
        else
            if (courseScore >= 70)
                return 'C';
            else
                if (courseScore >= 60)
                    return 'D';
                else
                    if(courseScore >= 50)
                        return 'F';    
}

void programming_excercise_19()
{
    int courseScore;
    getScore(courseScore);
    cout << "Your grade for this course is: " << calculateGrade(courseScore);
}
//end of 19

//start of 20
/*void initialize(int& zeroCount, int& oddCount, int& evenCount)
{
    zeroCount = 0;
    oddCount = 0
    evenCount = 0; 
}
void programming_excercise_20()
{
    int counter =0;
    int number;
    int zeroes;
    int odds;
    int evens; 
    int sum = 0;
    
    ifstream infile;
    ofstream outfile;
    
    infile.open("input.txt");

    if (!infile)
    {
        cout << "Cannot open file." << "Program terminates." << endl; 
     } else {cout << "file opened"<<endl;}

    outfile.open ("output.txt");
    if (!outfile)
    {
        cout << "Cannot open file." << "Program terminates." << endl; 
     } else {cout << "file opened" <<endl;}

    initialize(zeroes, odds, evens );

    while(true)
    {
        getNumber(infile, outfile, number);
        if (!infile)
            break; 
        sum += number;
        counter++;
        if((counter % 10) == 0)
            outfile << endl; 
        classifyNumbers(number, zeroes, odds, evens);
    }
    printResults(outfile, zeroes, evens, odds, sum);

}
//end of 20
*/
//start of 21
bool isLeapYear(int year)
{
    if(((year % 4 == 0) && (year % 100 !=0)) && ((year % 100 ==0) && (year % 400 == 0)))
    {
        cout << year << "is a leap year.";
        return true;
    }
    return false; 
}
void programming_excercise_21()
{
    int day, month, year;
    int dayNum = 0;
    char ch;
    cout << "Enter a date(mm--dd--yyyy):";
    cin >> month;
    cin >> ch;
    cin >> day;
    cin >> ch;
    cin >> year;
    if((month >= 1 && month <= 12) && (day >= 1 && day <=31))
    {
        while(month > 1 && month <=12)
        {
            switch(month - 1)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12: 
                    dayNum +=31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    dayNum +=30;
                    break; 
                case 2:
                    dayNum +=28;
                    if(isLeapYear(year))
                        dayNum++;
                    break; 
            }
            month--;
        }
    } 
    else
    {
        cout << "Enter correct month or day.";
    } dayNum += day; 
    cout << "The day number is: " << dayNum; 
}
//end of 21

//start of 22
int vowelCount(string str, char ch)
{
    int count = 0;
    int length;
    length = str.length();
    for(int i = 0; i < length; i++)
    {
        if(str.at(i)==ch)
        {
            count++;
        }
    }
    return count;
}
void programming_excercise_22()
{
    string str1;
    cout << "Enter string: ";
    getline(cin, str1);
    cout << "Vowel 'a' count is " << vowelCount(str1, 'a') << endl;
    cout << "Vowel 'e' count is " << vowelCount(str1, 'e') << endl;
    cout << "Vowel 'i' count is " << vowelCount(str1, 'i') << endl;
    cout << "Vowel 'o' count is " << vowelCount(str1, 'o') << endl;
    cout << "Vowel 'u' count is " << vowelCount(str1, 'u') << endl;
}
//start of 22

//start of 23
int vowelCount(char ch, char vowel)
{
    int count = 0;
    if (ch == vowel)
        return 1;
    else 
        return 0;
}
void programming_excercise_23()
{
    string str1;
    int count = 0;
    cout << "Enter string: ";
    getline(cin, str1);

    for(int i = 0; i < str1.length(); i++)
    {
        count = count + vowelCount(str1, 'a');
    }
    cout << "Vowel 'a' count is " << vowelCount(str1, 'a') << endl;

    for(int i = 0; i < str1.length(); i++)
    {
        count = count + vowelCount(str1, 'e');
    }
    cout << "Vowel 'e' count is " << vowelCount(str1, 'e') << endl;

    for(int i = 0; i < str1.length(); i++)
    {
        count = count + vowelCount(str1, 'i');
    }
    cout << "Vowel 'i' count is " << vowelCount(str1, 'i') << endl;

    for(int i = 0; i < str1.length(); i++)
    {
        count = count + vowelCount(str1, 'o');
    }
    cout << "Vowel 'o' count is " << vowelCount(str1, 'o') << endl;

    for(int i = 0; i < str1.length(); i++)
    {
        count = count + vowelCount(str1, 'u');
    }
    cout << "Vowel 'u' count is " << vowelCount(str1, 'u') << endl;
}
//end of 23

//start of 24
void numbersCount(long long value)
{
    int i;
    int even = 0;
    int odd = 0;
    int zeroes;
    while (value > 0)
    {
        i = value % 10;
        if(i % 2 == 0 && i >= 0)
            even++;
        else if (i > 0)
            odd++;
        if (i != 0)
            zeroes++;
            value = value/10;
    } 
    cout << "Number of odds: " << odd << endl;
    cout << "Number of evens: " << even << endl;
    cout << "Number of zeroes: " << zeroes << endl;
}
void programming_excercise_24()
{
    long long num;
    cout << "Enter a long value: ";
    cin >> num;
    numbersCount(num);
}
//end of 24

//start of 25
void displayGenInfo()
{
    cout << "The discouts are: " << endl;
    cout << "(a) 30%' for senior citizens." << endl;
    cout << "(b) 15%' if membership is bought or paid for 12 months." << endl;
    cout << "(c) 20%' for 5 personal training sessions are bought and paid for." << endl;
}

void readNecInfo(double& regCostPerMonth, double& costPersonalTraining, bool& seniorCitizen, int& numOfSessions, int& numOfMonths)
{
    char ch;
    cout << "Enter cost per month: ";
    cin >> regCostPerMonth;
    cout << "Enter cost per personal training session: ";
    cin >> costPersonalTraining;
    cout << "Enter 'Y' if you are a senior citizen: ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        seniorCitizen = true;
    } else {seniorCitizen = false;}
    cout << "Enter number of training sessions bought: ";
    cin >> numOfSessions;
    cout << "Enter number of months paid for: ";
    cin >> numOfMonths;
}

double determineMemberCost(double regCostPerMonth, double costPersonalTraining, bool seniorCitizen,int numOfSessions, int numOfMonths)
{
    double newMemberCost = regCostPerMonth * numOfMonths;
    if (seniorCitizen)
    {
        newMemberCost = newMemberCost - (regCostPerMonth * 0.30 * numOfMonths);
    }
    if (numOfMonths >= 12)
    {
        newMemberCost = newMemberCost - (regCostPerMonth * 0.15 * numOfMonths);
    }
    if (numOfSessions > 5)
    {
        newMemberCost = newMemberCost - (regCostPerMonth * 0.20 * numOfMonths);
    }
    return newMemberCost; 
}

void programming_excercise_25()
{
    double regCostPerMonth;
    double costPersonalTraining;
    bool seniorCitizen;
    int numOfSessions;
    int numOfMonths;
    double newMemberCost;
    char again; 
    
    do
    {
        displayGenInfo();
        readNecInfo(regCostPerMonth, costPersonalTraining, seniorCitizen, numOfSessions, numOfMonths );
        newMemberCost = determineMemberCost(regCostPerMonth, costPersonalTraining, seniorCitizen, numOfSessions, numOfMonths);
        cout << fixed << showpoint << setprecision(2) << endl;
        cout << "Cost of new membership: " << newMemberCost << endl;
        cout << "Enter 'Y' for another membership: " << endl;
        cin >> again; 
    } while (again == 'Y' || again == 'y');
}
//end of 25

//start of 29
void maxBoxVol(double length, double width, double& maxBoxVol, double& sqlen)
{
    double sqSide;
    double boxVol;
    sqSide = 0.001;
    maxBoxVol = 0.0;
    double minSide = min(length, width);

    while(2 * sqSide <= minSide)
    {
        boxVol = sqSide * (length - 2 * sqSide) * (width -2 *sqSide);
        if (maxBoxVol < boxVol)
        {
            maxBoxVol = boxVol;
            sqlen = sqSide;
        }
        sqSide += 0.001;
    }
}

double min(double l, double w)
{
    if (l < w)
        return l;
    return w; 
}

void programming_excercise_29()
{
    double length[20], width[20], sqlen[40];
    double maxVol[30];
    int areaCardboard;
    double values[50];
    int count = 0, k = 0;
    int i;
    cout << "Enter the area of the cardboard: ";
    cin >> areaCardboard;
    for(i = 1; i <= areaCardboard; i++)
    {
        if (areaCardboard % i == 0)
        {
            values[count] = static_cast<double>(i);
            count++;
        }
    }
    for(i = 0; i < count /2 ; i++)
    {
        width[i] = values[i];
    }
    int x = count / 2;
    for(int j = count -1; j>= x; j--)
    {
        length[k] = values[j];
        k++;
    }
    for(i = 0; i < x; i++)
    {
        maxBoxVol(length[i], width[i], maxVol[i], sqlen[i]);
    }
    double max = maxVol[0];
    int maxpos;
    for(int i =1; i < x; i++)
    {
        if(maxVol[i] > max)
            max = maxVol[i];
            maxpos = i;
    }
    cout << "Length of cardboard = " << length[maxpos] << " inches. " << endl;
    cout << "Width of cardboard = " << width[maxpos] << " inches. " << endl;
    cout << "Length of square to cut to form box = " << setprecision(3) << sqlen[maxpos] << " inches. " << endl;
    cout << "Max volume of box = " << setprecision(3) << maxVol[maxpos] << " inches cubed." << endl;
}
//end of 29

//start of 30
void LengthofPowerLine( double widthofRiver, double distanceofFactory, double costUnderWater, double costOverLand)
{
    double minWidth = 0, mindistance = 0, mincost;
    double i = 0.0,dis, tempCost;
    mincost = (widthofRiver * costUnderWater) + (distanceofFactory * costOverLand);
    do
    {
        dis = sqrt((widthofRiver * widthofRiver) + (i*i));
        tempCost = dis * costUnderWater;
        tempCost += (distanceofFactory - i) * costOverLand;
        if(mincost > tempCost)
        {
            minWidth = dis;
            mincost = tempCost;
        } 
        i += 0.1;
    } while (i < distanceofFactory);
    cout << "Length of powerline underwater is: " << minWidth << endl;
    cout << "Length of powerline overwater is: " << mindistance << endl;
    cout << "Cost of constructing the power line is: " << mincost << endl;
}
void programming_excercise_30()
{
    double widthofRiver;
    double distanceofFactory;
    double costUnderWater;
    double costOverLand;
    cout << "Enter width of river: ";
    cin >> widthofRiver;
    cout << "Enter distance of factory: ";
    cin >> distanceofFactory;
    cout << "Enter cost of laying powerline underwater: ";
    cin >> costUnderWater;
    cout << "Enter cost of laying powerline over land: ";
    cin >> costOverLand;
    LengthofPowerLine(widthofRiver, distanceofFactory, costUnderWater, costOverLand);
}
//end of 30

//start of 31
double pipe(double w1, double w2, double t)
{
    double length = w1 / sin(t) + w2 / cos(t);
    return length;
}
void programming_excercise_31()
{
    double wid1, wid2, len;
    double theta = 30;
    cout << "Enter widths of both of the corridors: ";
    cin >> wid1 >> wid2;
    double l = pipe(wid1, wid2, theta);
    cout << "Longest length " << l << endl;
}
//end of 31

//main function
int main()
{
    
    //programming_excercise_1();
    //programming_excercise_2();
    //programming_excercise_3();
    //programming_excercise_4();
    //programming_excercise_5();
    //programming_excercise_6();
    //programming_excercise_7();
    //programming_excercise_8();
    //programming_excercise_9();
    //programming_excercise_10();
    //programming_excercise_11();
    //programming_excercise_12();
    //programming_excercise_13();
    //programming_excercise_14();
    //programming_excercise_15();
    //programming_excercise_16();
    //programming_excercise_17();
    //programming_excercise_18();
    //programming_excercise_19();
    //programming_excercise_20();
    //programming_excercise_21(); 
    //programming_excercise_22();
    //programming_excercise_23();
    //programming_excercise_24();
    //programming_excercise_25();
    programming_excercise_29();
    programming_excercise_30();
    programming_excercise_31();
}