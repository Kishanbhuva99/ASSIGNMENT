/*Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. 
*/
#include<iostream>

using namespace std;

class circle
{
    int radius;
    float area,circumference;
    const float pi=3.14;
    
    public:
    circle()
    {
        std::cout << "Enter radius: ";
        std::cin >> radius;
    }
    float getarea()
    {
        area=pi*radius*radius;
        return area;
    }
    float getcircumference()
    {
        circumference=2*pi*radius;
        return circumference;
    }

};

int main()
{
    circle c;

    std::cout << "area of circle is : " << c.getarea();
    std::cout << "\ncircumference of circle is : "<< c.getcircumference();
    return 0; 
}