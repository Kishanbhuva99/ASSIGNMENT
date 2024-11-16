/*.WAP to find the largest of three numbers  */

#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Enter numer 1 :");
    scanf("%d",&n1);
    printf("Enter numer 2 :");
    scanf("%d",&n2);
    printf("Enter numer 3 :");
    scanf("%d",&n3);

    if((n1>n2)&&(n2>n3))
    {
        printf("%d is maximnum",n1);
    }
    else if (n2>n3)
    {
        printf("%d is maximum",n2);
    }
    else
    {
        printf("%d is  maximum",n3);
    }

return 0;
}