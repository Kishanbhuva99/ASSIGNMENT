/*.Convert years into days and months  */


#include<stdio.h>
int main()
{
    float days,years,month;

    printf("Enter YEARS : ");
    scanf("%f",&years);

    days=years*365;
    month=years*12;
    printf("%.2f Years Equal to %.2f DAYS",years,days);
    printf("\n%.2f YEARS Equal to %.2f MONTHS",years,month);

return 0;
}