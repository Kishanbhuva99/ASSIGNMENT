/* WAP to print Fibonacci series up to given numbers */

#include<stdio.h>
int main()
{
    int a=0,b=1,n,next;

    printf("Enter number for fibonacci :");
    scanf("%d",&n);
    printf("fibonacci : %d,%d",a,b);
    next=a+b;
    for (int i = 3; i <=n; i++)
    {
        printf(",%d",next);
        a=b;
        b=next;
        next=a+b;
    }
    
return 0;
}