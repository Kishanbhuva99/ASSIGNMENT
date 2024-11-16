/*Convert days into months  */

#include<stdio.h>
int main()
{
    int days;
    float month;

    printf("Enter DAYS : ");
    scanf("%d",&days);

    month=days/30;
    // printf("days = %d",days);
    // printf("months = %.1f",month);

    printf("\n%d Days is %.1f Months",days,month);
return 0;
}