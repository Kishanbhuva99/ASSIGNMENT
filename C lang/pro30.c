/* WAP to convert years into days and days into years    */

#include<stdio.h>
int main()
{
    float days,years;

    printf("Enter YEARS to convert into DAYS: ");
    scanf("%f",&years);
    days=years*365;
    printf("%.2f Years Equal to %.2f DAYS",years,days);

    printf("\nEnter DAYS to convert into YEARS: ");
    scanf("%f",&days);
    years=days/365;
    printf("%.2f DAYS Equal to %.2f YEARS",days,years);

return 0;
}