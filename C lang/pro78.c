/* pattern 1 */


#include<stdio.h>
int main()
{

    // printf("pattern == 2\n");
    // int a=65;
    // for (int i = 0; i < 5; i++) 
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c ",a);
    //         a++;
    //     }
    //     printf("\n");
    // }
    

    // printf("pattern == 3\n");
    //  for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 4; k >= i; k--)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1; j < (i + i); j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // printf("pattern == 5\n");
    // int a=65;
    // for (int i = 0; i < 5; i++) 
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c ",a+j);
            
    //     }
    //     printf("\n");
    // }

    // printf("pattern == 4\n");
    // int n= 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", n);
    //         n++;
    //     }
    //     printf("\n");
    // }

    // printf("pattern == 1\n");
    // int i, j;

    // for(i=0;i<=4;i++)
    // {
    //     for(j=0;j<=i;j++)
    //     {
    //         printf("%d", (j+1)%2);
    //     }
    //     printf("\n");
    // }

        printf("pattern == 6\n");
        for (int  i = 1; i <= 6 ; i++)
        {
            int j = 0;
                while (j<i)
                {
                    printf("* ");
                    j++;
                }
                printf("\n");
            
        }
        for (int i = 5; i > 0; i--)
        {
            for (int j = 0 ; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    return 0;
}