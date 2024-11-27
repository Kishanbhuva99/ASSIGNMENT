//Write two small programs: one using Procedural Programming (POP) to calculate the 
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
//class and object for the same task.
//area of Rectangle Formula : A=wl

/* using POP */
// #include<stdio.h>
// int main()
// {
//     int width,lenght,area;

//     printf("enter width :");
//     scanf("%d",&width);
//     printf("enter lenght :");
//     scanf("%d",&lenght);

//     area=width*lenght;
//     printf("area of rectangle is %d ",area);
//     return 0;
// }

/*Using OOP*/
#include<iostream>

using namespace std;
class rectangle
{
private:
    int width,lenght,area;
public:
    rectangle()
    {
         std:: cout << "Enter width :  ";
        std::cin>>  width;


        std::cout << "Enter lenght : " ;
        std::cin >> lenght;

        area=width*lenght;
    }
    int getarea()
    {
        return area;
    }
};

int main()
{
    rectangle r;
    std::cout << "Area of rectangle : " << r.getarea();

    return 0; 
}
