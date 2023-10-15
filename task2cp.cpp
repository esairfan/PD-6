#include <iostream>
#include <windows.h>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{
    string name;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks for English: ";
    cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
    cout << "Enter marks for  Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks for Biology: ";
    cin >> marksBiology;
    cout << "Student name: " << name<<endl;
    cout << "Percentage: " << calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology)<<"%"<<endl;
    cout << "Grade: " << calculateGrade(calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology));
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float sum = marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology;
    float average = sum * 0.2;
    return average;
}
string calculateGrade(float average)
{

    if (average >= 90)
    {
        return "A+";
    }
    if (average >= 80 && average < 90)
    {
        return "A";
    }
    if (average >= 70 && average < 80)
    {
        return "B+";
    }
    if (average >= 60 && average < 70)
    {
        return "B";
    }
    if (average >= 50 && average < 60)
    {
        return "C";
    }
    if (average >= 40 && average < 50)
    {
        return "D";
    }
    if (average < 40)
    {
        return "F";
    }
}