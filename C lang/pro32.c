// Accept 2 numbers and find out its sum check it size  
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("\nEnter number 2 : ");
    scanf("%d",&b);

    sum=a+b;

    printf("\nSUM OF 2 NUMBERS IS : %d",sum);
    printf("\n size of a : %d",sizeof(a));
    printf("\n size of b : %d",sizeof(b));
    printf("\n size of sum : %d",sizeof(sum));

return 0;
}