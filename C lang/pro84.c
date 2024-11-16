// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>
void main()
{
    int n, i, j, sum = 0, total;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
        total += sum;
    }
    printf("Sum is : %d", sum);
}