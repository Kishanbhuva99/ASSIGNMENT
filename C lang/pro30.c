/* WAP to convert years into days and days into years    */

#include<stdio.h>
int main()
{
    int days,years;

    printf("Enter YEARS to convert into DAYS: ");
    scanf("%d",&years);
    days=years*365;
    printf("%d Years Equal to %d DAYS",years,days);

    printf("\nEnter DAYS to convert into YEARS: ");
    scanf("%d",&days);
    years=days/365;
    printf("%d DAYS Equal to %d YEARS",days,years);

return 0;
}