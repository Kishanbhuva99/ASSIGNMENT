/* WAP to find factorial using recursion  */

#include <stdio.h>
int fact(int num);

void main()
{
    int num;

    printf("Enter your number : ");
    scanf(" %d", &num);

    printf("\nFactorial of Given number is : %d", fact(num));
}

int fact(int num)
{
    if (num > 1)
    {
        num *= fact(num - 1);
        return num;
    }
    else
    {
        return 1;
    }
}