/*Write a C++ program that calculates the factorial of a number using recursion. */

#include<iostream>

using namespace std;

int fact(int num)
{
    if (num > 1)
    {
        num *= fact(num - 1);
        return num;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;

    std::cout << "Enter your number : ";
    std::cin >> num;

    std::cout << "\nFactorial of Given number is : " <<  fact(num);
     return 0;
}
