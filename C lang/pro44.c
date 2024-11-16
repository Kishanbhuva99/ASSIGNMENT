//WAP to find number is even or odd using ternary operator 
#include<stdio.h>
int main()
{
    int nm;

    printf("Enter Number : ");
    scanf("%d",&nm);

    nm%2==0 ? printf("NUMBER IS EVEN") : printf("NUMBER IS ODD");

    // if(nm%2==0)
    // {
    //     printf("NUMBER IS EVEN");
    // }
    // else
    // {
       //  printf("NUMBER IS ODD");
    // }
return 0;
}