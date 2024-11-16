/* Write a C program to accept two integers and check whether they are equal or 
not    */
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("\nEnter number 2 :");
    scanf("%d",&b);

    a ==  b ? printf("A is equal to B"):printf("A is not equal to B");
return 0;
}