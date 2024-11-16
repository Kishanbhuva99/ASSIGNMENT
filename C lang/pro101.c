//Perform 2D matrix array
#include<stdio.h>
int main()
{
    int mat[2][2];
     printf("\t\t2D MATRIX\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
    }  
return 0;
}