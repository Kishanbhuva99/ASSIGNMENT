/*WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement  */

#include<stdio.h>
int main()
{
    int nm1,nm2,res;
    char c;

    printf("Enter number 1:");
    scanf("%d",&nm1);
    printf("Enter number 2:");
    scanf("%d",&nm2);
   
    printf("Enter character = :");
    scanf(" %c",&c);
    
    if(c=='a')
    {
       //res=nm1+nm2;
        printf("sum is %d",nm1+nm2);
    }
    else if (c=='b')
    {
        printf("Subtraction is %d",nm1-nm2);
    }
    else if (c=='d')
    {
        printf("Division is %d",nm1/nm2);
    }
    else if (c=='m')
    {
        printf("Multipication is %d",nm1*nm2);
    }
    else if (c=='p')
    {
        printf("Modulo is %d",nm1%nm2);
    }
    else
    {
        printf("WRONG INPUT");
    }
return 0;
}