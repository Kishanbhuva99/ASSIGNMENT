/* WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice */


#include<stdio.h>
void ascend();
void descend();
    int n[10];

int main()
{
    int choice;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&n[i]);
    }

    printf("\n1. Ascending");
    printf("\n2. Descending");

    printf("\nPlease Enter Choice : ");
    scanf(" %d",&choice);

    if (choice==1)
    {
        ascend();   
    }
    else if (choice==2)
    {
        descend();
    }
    else
    {
        printf("! Invalid choice");
    }
    
return 0;
}

void ascend()
{
    int swap;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (n[i]>n[j])
            {
                swap=n[i];
                n[i]=n[j];
                n[j]=swap;
            }
            
            
        }
        
    }
    printf("\n------ASCENDING ORDER------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",n[i]);
    }
    
}

void descend()
{
     int swap;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (n[i]<n[j])
            {
                swap=n[i];
                n[i]=n[j];
                n[j]=swap;
            }
            
            
        }
        
    }
    printf("\n------DESCENDING ORDER------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",n[i]);
    }
}