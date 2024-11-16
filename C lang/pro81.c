/*  Accept 3 numbers from user using while loop and check each 
numbers palindrome   */

#include<stdio.h>
int main()
{
    
    int n[3],reverse=0,nm,a=0;
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter number<palindrome> %d :",i+1);
        scanf("%d",&n[i]);
        reverse=0;
        nm=n[i];
        while (nm!=0)
        {   
            a=nm%10;
            reverse=reverse*10+a;
            nm/=10;
        }
        if (n[i]==reverse)
        {
            printf("\n%d is palindrome.",reverse);
        }
        else
        {
            printf("\n%d is not palindrome.",reverse);
        }
    }
return 0;
}