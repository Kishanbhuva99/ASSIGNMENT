//Check Number Is Positive or Negative 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);

    
    if(num>0)
    {
        printf("Number is POSITIVE");
    }
    else if (num==0)
    {
        printf("NUmber is 0(ZERO)");
    }
    else
    {
        printf("Number is NEGATIVE");
    }
return 0;
}