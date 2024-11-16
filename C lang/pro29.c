/*.Convert minutes into seconds and hours    */

#include<stdio.h>
int main()
{
    int seconds,hours,min1,min2;

    printf("Enter MINUTS (for seconds) : ");
    scanf("%d",&min1);
    printf("\nEnter MINUTS (more than 60 for hours) : ");
    scanf("%d",&min2);

    seconds=min1*60;
    hours=min2/60;
    printf("<<---------------------->>");
    printf("\n%d MINUTES Equal to %d SECONDS",min1,seconds);
    printf("\n%d MINUTES Equal to %d HOUORS",min2,hours);

return 0;
}