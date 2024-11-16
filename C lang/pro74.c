/* Calculate sum of 10 numbers using of while loop */

#include<stdio.h>
int main()
{
    int n[10],sum=0;

    int i=0;
    while (i<10)
    {
        printf("Enter Number %d :",i+1);
        scanf("%d",&n[i]);
        sum+=n[i];
        i++;
    }
    printf("SUM of all Numbers : %d",sum);
    
return 0;
}