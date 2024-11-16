//WAP to accept 5 students name and store it in array 
#include<stdio.h>
int main()
{  
    char nm[5][20];

    for (int i = 0; i < 5; i++)
    {
            printf("Enter Student name %d: ",i+1);
            gets(nm[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("\nStudent %d name is : %s",i+1,nm[i]);
    } 
    
return 0;
}