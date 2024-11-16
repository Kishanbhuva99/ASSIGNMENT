/* WAP to calculate swap 2 numbers with using of multiplication and division.  */

#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter Number1 :");
    scanf("%d",&num1);
    printf("Enter Number2 :");
    scanf("%d",&num2);

    printf("\n<<-------------------NUMBER SWAPED BY * and / ------------->>");
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("\nNumber 1 = %d\nNumber 2 = %d",num1,num2);

return 0;
}