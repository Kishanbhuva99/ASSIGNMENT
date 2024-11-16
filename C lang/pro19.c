/* . Calculate compound interest (Compound Interest formula:  
a. Formula to calculate compound interest annually is given by:  
Amount= P(1 + R/100)t  
b. Compound Interest = Amount – P */


#include <stdio.h>
int main()
{
    float principleAmount, rate, time, amount, CompoundInterest;

    printf("\nEnter principle amount : ");
    scanf("%f", &principleAmount);

    printf("Enter rate : ");
    scanf("%f", &rate);

    printf("Enter time : ");
    scanf("%f", &time);

    amount = principleAmount * (1 + rate / 100) * time;
    CompoundInterest = amount - principleAmount;

    printf("<<<------------------------->>>");
    printf("\n Compound Interest is : %.2f", CompoundInterest);
    return 0;
}