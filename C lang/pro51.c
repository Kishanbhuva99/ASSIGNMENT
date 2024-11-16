//Write a C program to calculate profit and loss on a transaction. 
#include<stdio.h>
int main()
{
    int costPrice,sellingPrice,transaction;

    printf("Enter cost price : ");
    scanf("%d",&costPrice);
    printf("Enter Selling price : ");
    scanf("%d",&sellingPrice);

    if(sellingPrice>costPrice)
    {
        transaction=sellingPrice-costPrice;
        printf("profit is %d",transaction);
    }
    else if (sellingPrice==costPrice)
    {
        printf("NO PROFIT NO LOSS");
    }
    else
    {
       transaction=costPrice-sellingPrice;
        printf("LOSS IS %d",transaction);
    }
    
return 0;
}