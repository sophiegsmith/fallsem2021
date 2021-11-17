#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

//programming excercises
void programming_excercise_1(); 
void programming_excercise_7();
void programming_excercise_9();

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

//starting program excercise 9
int reverseDigit(int number)
{
    int reverse = 0; 
    bool isNegative = false;

    if (number < 0)
    {
        number = -1 *number;
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

int main()
{
    void programming_excercise_1();
    void programming_excercise_7();
    void programming_excercise_9();
}