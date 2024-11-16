/* Accept 5 names from user at run time. */

#include<stdio.h>
int main()
{  
    char nm[5][20];

    for (int i = 0; i < 5; i++)
    {
            printf("Enter name %d: ",i+1);
            scanf(" %s",&nm[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("\n%d name is : %s",i+1,nm[i]);
    } 
    
return 0;
}