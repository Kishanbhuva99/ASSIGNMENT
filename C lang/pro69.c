/* Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5) */

#include<stdio.h>
int main()
{
    int n,a,sum;

    printf("Enter NUMBER for summation :");
    scanf("%d",&n);
    a=n%10;
    sum=a;
    while (n!=0)
    {
        a=n%10;
        n=n/10;
    }
    sum=sum+a;
    printf("summation of given number is %d",sum);
return 0;
}