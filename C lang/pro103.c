//Accept 5 numbers from user and perform sum of array 
#include<stdio.h>
int main()
{
    int n[5],sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    printf("\nSum of Array is : %d",sum);
    
return 0;
}