/* Calculate the Sum of Natural Numbers Using the While Loop */

#include<stdio.h>
int main()
{
    int n[10],naturalSum=0;

    int i=0;
    while (i<10)
    {
        printf("Enter Number %d :",i+1);
        scanf("%d",&n[i]);
        if(n[i]>0)
        {
            naturalSum=naturalSum+n[i];
        }
        i++;
    }
    printf("SUM of all NATURAL Numbers : %d",naturalSum);
    
return 0;
}