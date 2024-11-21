/*Convert days into months  */

#include<stdio.h>
int main()
{
    float days;
    float month;

    printf("Enter DAYS : ");
    scanf("%f",&days);

    month=days/30;
    // printf("days = %d",days);
    // printf("months = %.1f",month);

    printf("\n%.2f Days is %.2f Months",days,month);
return 0;
}