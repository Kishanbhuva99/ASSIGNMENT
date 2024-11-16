// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter a numberof term : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("Sum is : %d", sum);
    
    }