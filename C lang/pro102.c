//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main()
{
    int n[5],swap;
     for (int i = 0; i < 5; i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (n[i]>n[j])
            {
                swap=n[i];
                n[i]=n[j];
                n[j]=swap;
            } 
        }
    }
    printf(" -->ASCENDING ORDER\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",n[i]);
    }
    
return 0;
}