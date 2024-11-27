/*Write a C++ program that takes a student’s marks as input and calculates the grade 
based on if-else conditions. */

#include <iostream>

using namespace std;

int main()
{
    float marks;
    cout << "Enter the student's marks(0-100) : ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "Grade: A";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Grade: B";
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Grade: C";
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "Grade: D";
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "Grade: E";
    }
    else if (marks >= 0 && marks < 50)
    {
        cout << " FAIL ";
    }
    else
    {
        cout << "Invalid marks entered!";
    }

    return 0;
}
