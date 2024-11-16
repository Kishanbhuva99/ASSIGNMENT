//WAP to input the month number and print month day.  
#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number(1-12) : ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("JANUARY");
    }
    else if(month == 2)
    {
        printf("FEBRUARY");
    }
    else if(month == 3)
    {
        printf("MARCH");
    }
    else if(month == 4)
    {
        printf("APRIL");
    }
    else if(month == 5)
    {
        printf("May");
    }
    else if(month == 6)
    {
        printf("JUNE");
    }
    else if(month == 7)
    {
        printf("JULY");
    }
    else if (month == 8)
    {
        printf("AUGUST");
    }
    else if (month == 9)
    {
        printf("SEPTEMBER");
    }
    else if (month == 10)
    {
        printf("OCTMBER");
    }
    else if (month == 11)
    {
        printf("NOVEMBER");
    }
    else if (month == 12)
    {
        printf("DECEMBER");
    }   
    else
    {
        printf("Invalid Input! Please enter month number between 1-12.");
    }

    return 0;
}