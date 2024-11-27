// Write a C++ program that accepts user input for their name and age and then 
//displays a personalized greeting. 

#include<iostream>

using namespace std;

int main()
{
    std::string name;
    int age;
   std:: cout << "Enter your name :  ";
    std::cin>>  name;

    std::cout << "Enter your AGE : " ;
    std::cin >> age;

    std::cout << "welcome " <<name<< "\n your age is " << age ;

    return 0; 
}