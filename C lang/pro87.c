/* Write a program to find out the max number from given array using   */


#include<stdio.h>

int maxNumber();

int main()
{
    int maxValue =maxNumber();
    printf("\nMax Number is %d.",maxValue);
    
return 0;
}

int maxNumber()
{

    int n[5],max=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter NUMBER %d: ",i+1);
        scanf("%d",&n[i]);
        if(n[i]>max)
        {
            max=n[i];
         }
    }
    return max;
}