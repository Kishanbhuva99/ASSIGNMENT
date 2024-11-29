# Explain recursion in C++ with an example. 

Recursion in C++ is a technique where a function calls itself to solve a problem. This approach is particularly useful for problems that can be broken down into smaller, similar sub-problems.

```cpp
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
```