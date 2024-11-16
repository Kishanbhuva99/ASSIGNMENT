/* .Convert temperature Fahrenheit to Celsius*/

#include<stdio.h>
int main()
{
    float Fahrenheit,Celsius;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&Fahrenheit);

    Celsius=(Fahrenheit-32)/1.8;
    printf("\nTemperature Converted to Celsius : %f",Celsius);
return 0;
}