//Sophie Smith
//#ifndef ARRAY_H
//#define ARRAY_H
#include<iostream>
#include<array>
#include<string>
#include<fstream>

using namespace std;

const int TOTAL_RANGES = 8;
const int RANGE_SIZE = 25;
const int MAX_STUDENTS = 50;
int totalStudents;  

//declare functions
void programming_excercese_1();
void programming_excercese_2();
void programming_excercese_3();
void programming_excercese_4();

//start of 1
void programming_excercese_1()
{
    cout << "Running programming excercise 1 from Chapter 8" << endl;
    double alpha[50];
    int i;
    for (i = 0; i < 25; i++)
    {
        alpha[i] = i * i;
    }
    for (i = 25; i < 50; i++)
    {
        alpha[i] = i * 3;
    }
    cout << "Elements in array: " << endl;
    for(i = 0; i < 50; i++)
    {
        if (i % 10 ==0)
        {
            cout << alpha[i] << " " << endl;
        }
    }
    cout << endl;
}
//end of 1

//start of 2
int smallestIndex(int array[], int size)
{
    int i, index = 0;
    int min = array[0];
    for (i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            index = i;
        }
    }
    return index; 
}
void programming_excercese_2()
{
    cout << "Running programming excercise 2 from Chapter 8" << endl;
    int array[20];
    int i, n, index;
    cout << "Enter size of an array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (i=0; i < n; i++)
    {
        cin >> array[i];
    }
    index = smallestIndex(array, n);
    cout << "Smallest element in the array is: " << array[index] << " at index is " << index << endl;
}
//end of 2

//start of 3
int lastLargestIndex(int array[], int size)
{
    int lastLargestIndex;
    int largestElement = array[0];
    for (int i = 1; i < size; i++)
    {
        if(array[i] >= largestElement)
        {
            largestElement = array[i];
            lastLargestIndex = i;
        }
    }
    return lastLargestIndex;
}
void programming_excercese_3()
{
    cout << "Running programming excercise 3 from Chapter 8" << endl;
    int a[20];
    int numOfElements;
    int last_largest_index;
    cout << "Enter elements stored in array (<= 20) : ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i= 0; i < numOfElements; i++)
    {
        cin >> a[i];
    }
    last_largest_index = lastLargestIndex(a, numOfElements);
    cout << "The largest element is " << a[last_largest_index] << " and its index is " << lastLargestIndex << endl;
}
//end of 3

//start of 4
void readTestScores(ifstream &inFile, int score[], int& totalStudents)
{
    int testScore;
    totalStudents = 0;
    while(!inFile.eof())
    {
        inFile >> testScore;
        score[totalStudents] = testScore;
        totalStudents++;
    }
}

void findRange(int score[], int range[], int& totalStudents)
{
    int testScore = 0;
    int scoreRange = 0;
    int i;
    for (i = 0; i < TOTAL_RANGES; i++)
    {
        range[i] = 0;
    }
    for ( i = 0 ; i < totalStudents; i++)
    {
        testScore = score[i];
        if (testScore >= 0 && testScore <=24)
            range[0]++;
        else if (testScore >= 25 && testScore <=49)
            range[1]++;
        else if (testScore >= 50 && testScore <=74)
            range[2]++;
        else if (testScore >= 75 && testScore <= 99)
            range[3]++;
        else if (testScore >= 100 && testScore <= 124)
            range[4]++;
        else if (testScore >= 125 && testScore <= 149)
            range[5]++;    
        else if (testScore >= 150 && testScore <= 174)
            range[6]++;
        else if (testScore >= 175 && testScore <=200)
            range[7]++;   
        else
        {
            cout << "All test score should be in the range of 0 to 200." <<endl;
        }         
    }
}

void displayResult(int score[], int range[], int& totalStudents)
{
    int rangeStart = 0;
    int endOfRange = 24;
    int i;
    
    cout << "Number of test scores stored in the file: " << totalStudents << endl;
    cout << "The result of score ranges and number of students in each range." << endl;
    for ( i = 0; i < TOTAL_RANGES; i++)
    {
        switch (i)
        {
            case 0:
                cout << "range 0-24: " << range[i] << endl;
                break;
            case 1:
                cout << "range 25-49: " << range[i] << endl;
                break;
            case 2:
                cout << "range 50-74: " << range[i] << endl;
                break;
            case 3:
                cout << "range 75-99: " << range[i] << endl;
                break;
            case 4:
                cout << "range 100-124: " << range[i] << endl;
                break;
            case 5:
                cout << "range 125-149: " << range[i] << endl;
                break;
            case 6:
                cout << "range 150-174: " << range[i] << endl;
                break;
            case 7:
                cout << "range 175-200: " << range[i] << endl;
                break;
        }
    }
    cout << "Number of students: " << totalStudents << endl;
}

void programming_excercese_4()
{
    cout << "Running programming excercise 4 from Chapter 8" << endl;
    int score[MAX_STUDENTS];
    int range[TOTAL_RANGES];
    ifstream infile;
    ofstream outfile;
    int totalStudents = 0;
    //open input file
    infile.open("input.txt");
    if (!infile)
    {
        cout << "Cannot open file." << "Program terminates." << endl; 
        return;
    } else {
        cout << "file opened"<<endl;
        
    }

    outfile.open ("output.txt");
    if (!outfile)
    {
        cout << "Cannot open file." << "Program terminates." << endl; 
    } else {
        cout << "file opened" <<endl;
    }
    readTestScores(infile, score,  totalStudents);
    findRange(score, range, totalStudents);
    displayResult(score, range, totalStudents);
    infile.close();
}
//end of 4

//main function
int main()
{
    programming_excercese_1();
    programming_excercese_2();
    programming_excercese_3();
    programming_excercese_4();
}