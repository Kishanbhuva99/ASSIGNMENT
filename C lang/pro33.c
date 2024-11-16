/* C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)  
  */


#include<stdio.h>
int main()
{
    int a;

    printf("Enter number : ");
    scanf("%d",&a);

    printf("First 3 Power of %d are %d, %d, %d",a,a,a*a,a*a*a);
return 0;
}