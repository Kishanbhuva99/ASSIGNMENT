/*Write a C++ program that performs both implicit and explicit type conversions and 
prints the results. */

#include<iostream>

using namespace std;

int main()
{
     int n1 = 42;
    float n2 = 20.36;

    std::cout << " : this is Explicit type cast :\n";
    std::cout << (int)n2 << endl;
    std::cout << (float)n1 << endl;

    std::cout << " : this is Implcit type cast :\n";
    int c = 'C';
    std::cout << c << endl;

    char num = 97;
    std::cout << num << endl;
    return 0; 
}

