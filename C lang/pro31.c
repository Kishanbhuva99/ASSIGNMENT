/*Convert kilometers into meters   */

#include<stdio.h>
int main()
{
    int meter;
    float kilometer;

    printf("Enter kiometer : ");
    scanf("%f",&kilometer);

    meter=kilometer*1000;
    printf("\n%2.f KILOMETER Equal to %d METERS",kilometer,meter);
return 0;
}