//  1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d", sum);
}