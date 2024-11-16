/* Calculate person’s insurance premium based on salary  */

#include<stdio.h>
int main()
{
    
    float premium_rate,salary,premium;

    printf("Enter salary :");
    scanf("%f",&salary);
    printf("Enter insurance premium rate(ex: 10%% = 10) :");
    scanf("%f",&premium_rate);

    premium_rate=premium_rate/100;
    premium=salary*premium_rate;
    printf("\n given salary is : %.2f",salary);
    salary=salary-premium;
    printf("\n salalry after isurance premium debited is : %.2f",salary);

    printf("\n Amount of premium is : %.2f",premium);

return 0;
}