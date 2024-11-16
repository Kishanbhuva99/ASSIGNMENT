/*.Convert years into days and months  */


#include<stdio.h>
int main()
{
    int days,years,month;

    printf("Enter YEARS : ");
    scanf("%d",&years);

    days=years*365;
    month=years*12;
    printf("%d Years Equal to %d DAYS",years,days);
    printf("\n%d YEARS Equal to %d MONTHS",years,month);

return 0;
}