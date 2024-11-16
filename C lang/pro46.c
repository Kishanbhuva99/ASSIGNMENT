// WAP to find minimum number among 3 numbers using ternary operator  
#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Enter number 1 :");
    scanf("%d",&n1);
    printf("Enter number 2 :");
    scanf("%d",&n2);
    printf("Enter number 3 :");
    scanf("%d",&n3);

    printf("3 numbers are %d, %d, %d",n1,n2,n3);

    (n1<n2)&&(n1<n3)?printf("\n%d is 1MIN",n1):
    n2<n3?printf("\n%d is 2MIN",n2):printf("\n%d is 3MIN",n3);
return 0;
}