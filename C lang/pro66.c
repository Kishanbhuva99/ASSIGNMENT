/* WAP to print number in reverse order e.g.: number = 64728 ---> reverse =     
82746   */


#include<stdio.h>
int main()
{
    int nm,reverse=0,a;
    printf("Enter number for reverse :");
    scanf("%d",&nm);

    while(nm!=0)
    {
        a=nm%10;
        reverse=reverse*10+a;
        nm/=10;
        //printf("%d",a);
    }
    printf("REVERSE NUMBER IS : %d",reverse);

return 0;
}