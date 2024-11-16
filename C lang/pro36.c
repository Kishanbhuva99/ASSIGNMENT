// WAP to check if the given year is a leap year or not. 
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d",&year);

    if (year%4 == 0)
    {
        printf("%d year is leap year\n",year);
    }
    else
    {
                printf("%d year is not leap year\n",year);
    }
    
    
return 0;
}