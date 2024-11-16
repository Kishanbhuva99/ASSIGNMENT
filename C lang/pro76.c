/*  Calculate 5 numbers from user and calculate number of even and odd using 
of while loop */

#include<stdio.h>
int main()
{
    int n[5],even=0,odd=0;

    int i=0;
    while (i<5)
    {
        printf("Enter Number %d :",i+1);
        scanf("%d",&n[i]);
        if(n[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
        i++;
    }
    printf("Total Even Numbers : %d",even);
    printf("\nTotal Odd Numbers : %d",odd);
    
return 0;
}