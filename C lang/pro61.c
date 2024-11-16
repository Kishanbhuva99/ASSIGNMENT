/*WAP to accept 5 numbers from user and display all numbers  */

#include<stdio.h>
int main()
{
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number : ");
        scanf("%d",&n[i]);
    }
    // printf("\n%d",n[0]);
    // printf("\n%d",n[1]);
    // printf("\n%d",n[2]);
    // printf("\n%d",n[3]);
    // printf("\n%d",n[4]);

    for (int i = 0; i <5; i++)
    {
             printf("\n%d",n[i]);
        
    }
    
return 0;
}