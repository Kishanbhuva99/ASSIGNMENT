/* WAP to print table up to given numbers  */

#include<stdio.h>
int main()
{
    int n=5;
    for (int i = 1; i <=10; i++)
    {
        printf("\n%d * %d = %d",n,i,n*i);
    }
    
return 0;
}