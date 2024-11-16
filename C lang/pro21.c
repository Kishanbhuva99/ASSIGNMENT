/*  Accept 2 numbers from user and swap 2 numbers with using 3rd variable and 
without using 3rd variable   */

#include<stdio.h>
int main()
{
    int num1,num2,swap;

    printf("Enter Number1 :");
    scanf("%d",&num1);
    printf("Enter Number2 :");
    scanf("%d",&num2);

    printf("<<-------------------ENTERED NUMBERS-------------------------------->>");
    printf("\nNumber 1 = %d\nNumber 2 = %d\n",num1,num2);

    printf("<<-------------------NUMBER SWAPED WITH 3rd variable---------------->>");
    swap=num1;
    num1=num2;
    num2=swap;
    printf("\nNumber 1 = %d\nNumber 2 = %d",num1,num2);

    printf("\n<<-------------------NUMBER SWAPED WITHout 3rd variable------------->>");
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nNumber 1 = %d\nNumber 2 = %d",num1,num2);

return 0;
}