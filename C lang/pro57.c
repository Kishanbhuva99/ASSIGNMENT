//Accept the input month number and print number of days in that month. 
#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number(1-12) : ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("JANUARY has 31 Days.");
    }
    else if(month == 2)
    {
        printf("FEBRUARY has 28 Days.");
    }
    else if(month == 3)
    {
        printf("MARCH has 31 Days.");
    }
    else if(month == 4)
    {
        printf("APRIL has 30 Days.");
    }
    else if(month == 5)
    {
        printf("May has 31 Days.");
    }
    else if(month == 6)
    {
        printf("JUNE has 30 Days.");
    }
    else if(month == 7)
    {
        printf("JULY has 31 Days.");
    }
    else if (month == 8)
    {
        printf("AUGUST has 31 Days.");
    }
    else if (month == 9)
    {
        printf("SEPTEMBER has 30 Days.");
    }
    else if (month == 10)
    {
        printf("OCTMBER has 31 Days.");
    }
    else if (month == 11)
    {
        printf("NOVEMBER has 30 Days.");
    }
    else if (month == 12)
    {
        printf("DECEMBER has 31 Days.");
    }   
    else
    {
        printf("Invalid Input! Please enter month number between 1-12.");
    }

    return 0;
}