/* WAP to print factorial of given number */

#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("Enter number for factorial :");
    scanf("%d",&n);
    printf("\nFACTORIAL using for loop");
    for (int i = 1; i <= n; i++)
    {
        factorial=factorial*i;
    }
    printf("\nFactorial of %d is : %d",n,factorial);
    
return 0;
}