//Sophie Smith

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<string>

using namespace std;

//declaring functions
void programming_excercise_1();
void programming_excercise_6();
void programming_excercise_11();

//start of 1
enum triangleType
{
    scalene, isosceles, equilateral, noShape
};

triangleType triangleShape(float s1, float s2, float s3)
{
    triangleType trishape;
    if ((s1 >(s2 +s3))|| (s2 > (s1 + s3))|| (s3 > (s1 +s2)))
    {
        trishape = noShape;
    }
    else if ((s1 == s2) && (s1==s3) && (s2==s3))
    {
        trishape = equilateral;
    }
    else if(s1 != s2 && s1 != s3 && s2 != s3)
    {
        trishape = scalene;
    }
    else 
    {
        trishape = isosceles;
    }
return trishape;
}
void programming_excercise_1()
{
    cout << "Running Programming Excercise 1 from Chapter 7"<< endl;
    float side1, side2, side3;
    int shape;
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;
    shape = triangleShape(side1, side2, side3);
    switch (shape)
    {
        case 0:
            cout << "The triangle is scalene." << endl;
            break;
        case 1:
            cout << "The triangle is isosceles." << endl;
            break;
        case 2:
            cout << "The triangle is equilateral." << endl;
            break;
        case 3:
            cout << "The triangle has no shape." << endl;
            break;
    }
}
//end of 1

//start of 6
void programming_excercise_6()
{
    cout << "Running Programming Excercise 6 from Chapter 7" << endl;
    srand(time(0));
    int randNum = (rand() % (100-10+1)+10);
    int rev_randNum1, rev_randNum2, rev_randNum3;
    cout << "Random number is: " << randNum << endl;
    int doubleNum = randNum * randNum;
    cout << "Doubled the number is: " << doubleNum << endl;
    int rev_randNum = 0;
    while (randNum > 0)
    {
        rev_randNum = rev_randNum * 10 + randNum % 10;
        randNum = randNum/10;
    }
    cout << "Reverse of the number is: " << rev_randNum << endl;
    rev_randNum1 = pow(rev_randNum, 2);
    cout << "Raise to the power of 2: " << rev_randNum1 << endl;
    rev_randNum2 = pow(rev_randNum, 3);
    cout << "Raise to the power of 3: " << rev_randNum2 << endl;
    rev_randNum3 = pow(rev_randNum, 4);
    cout << "Raise to the power of 4: " << rev_randNum3 << endl;
    int sum = 0, num = rev_randNum;
    while (num >0)
    {
        sum += num % 10;
        num = num /10;
    }
    cout << "Sum of digits of the number: " << sum << endl;
}
//end of 6

//start of 11
void programming_excercise_11()
{
    cout << "Running Programming Excercise 11 from Chapter 7" << endl;
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int sum = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        sum += str[i];
    }
    cout << "The sum of values of characters are: " << sum << endl;
}
//end of 11

//main program
int main()
{
    programming_excercise_1();
    programming_excercise_6();
    programming_excercise_11();
}