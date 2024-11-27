/* Write a C++ program that accepts an array of integers, calculates the sum and 
average, and displays the results.*/

#include <iostream>

using namespace std;

int main()
{

    int sum = 0,average=0;
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter number " << i+1 << " : ";
        cin >> num[i];
        sum=sum+num[i];
    }
    average=sum/5;

    std::cout << "Sum of 5 numbers: " << sum << endl;
    std::cout << "Average of 5 numbers: " << average << endl;

    return 0;
}
