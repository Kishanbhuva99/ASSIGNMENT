/* WAP of Addition, Subtraction, Multiplication and Division using 
Switch case.(Must Be Menu Driven) */

#include<stdio.h>

void numin();
int add();
int sub();
int multi();
int div();
    int num1,num2;

int main()
{
    int n;
    do
    {
        printf("\n------Calculator---------");

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Division");
        printf("\n4. Multiplication");
        printf("\n5. Exit");

        printf("\n\tChoose your option : ");
        scanf(" %d",&n);
        if(n==5)
        {
            break;
        }
        switch (n)
        {
        case 1:
            printf("\n\t-->Addition is : %d",add());
            break;
        case 2:
            printf("\n\t-->Subtraction is : %d",sub());
            break;
        case 3:
            printf("\n\t-->Division is : %d",div());
            break;
        case 4:
            printf("\n\t-->Multiplication is : %d",multi());
            break;

        default:
            printf("\nInvalid input!");
            break;
        }
        
    } while (1);
    
return 0;
}

void numin()
{
    printf("Enter Number 1 : " );
    scanf(" %d",&num1);
    printf("Enter Number 2 : ");
    scanf(" %d",&num2);
}

int add()
{   
    int result;
    numin();
    result=num1+num2;
    return result;
}
int sub()
{   
    int result;
    numin();
    result=num1-num2;
    return result;
}
int multi()
{   
    int result;
    numin();
    result=num1*num2;
    return result;
}
int div()
{   
    int result;
    numin();
    result=num1/num2;
    return result;
}