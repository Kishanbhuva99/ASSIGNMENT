//WAP to perform Palindrome number using for loop and function
#include<stdio.h>
void palin(int n)
{
    int palin,reverse=0;
    int temp;
    temp=n;
    for (int i = 0; temp!=0 ; temp/=10)
    {
        i=temp%10;
        reverse=reverse*10+i;
    }
    if (n==reverse)
    {
        printf("\n%d is palindrome.",n);
    }
    else
    {
        printf("\n%d is not palindrome.",n);
    }
}
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    palin(num);
    
return 0;
}