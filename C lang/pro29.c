/*.Convert minutes into seconds and hours    */

#include<stdio.h>
int main()
{
    float seconds,min1,min2;
    float hours;

    printf("Enter MINUTS (for seconds) : ");
    scanf("%f",&min1);
    printf("\nEnter MINUTS (more than 60 for hours) : ");
    scanf("%f",&min2);

    seconds=min1*60.00;
    hours=min2/60.00;
    printf("<<---------------------->>");
    printf("\n%.2f MINUTES Equal to %.2f SECONDS",min1,seconds);
    printf("\n%.2f MINUTES Equal to %.2f HOUORS",min2,hours);

return 0;
}