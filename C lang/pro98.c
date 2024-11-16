//WAP to accept 5 numbers from user and display in reverse order using for loop and array 
#include<stdio.h>
int main()
{
    int nm[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&nm[i]);
    }
    int swap;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
                swap=nm[i];
                nm[i]=nm[j];
                nm[j]=swap; 
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",nm[i]);
    }
    
    
return 0;
}