/* .calculate the Factorial of a Given Number using while loop */

#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("Enter number for factorial :");
    scanf("%d",&n);
    printf("FACTORIAL using while loop");
    int i=1;
    while(i <= n)
    {
        factorial=factorial*i;
        i++;
    }
    printf("\nFactorial of %d is : %d",n,factorial);
    
return 0;
}