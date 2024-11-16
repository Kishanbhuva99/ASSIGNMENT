/* Write a program in C to read any Month Number in integer and display 
the number of days for this month. */

#include<stdio.h>
int main()
{
    int month;

    printf("Enter Month Number(1 to 12) : ");
    scanf("%d",&month);
    printf("month is %d",month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("This Month has 31 DAYS.");
    }
    else if (month==2)
    {
        printf("This month has 28 DAYS.");
    }
    else
    {
        printf("This month has 30 DAYS.");
    }
    
    
return 0;
}