/*  Write a C Program to Print the Multiplication Table of N  
i. 
E.g. 5 * 1 = 5  
ii. 5 * 2 = 10  
1. .  
2. . iii. 5 * 10 = 50  
 */

#include<stdio.h>
int main()
{
    int n,i=1;

    printf("Enter Number to get Table :");
    scanf("%d",&n);
    printf("--------Table of %d------",n);
    while(i<=10)
    {
        printf("\n\t%d * %d = %d",n,i,n*i);
        i++;
    }
return 0;
}