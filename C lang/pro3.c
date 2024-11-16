//WAP to Find Area And Circumference of Circle

#include<stdio.h>

void main()
{
    int radius;
    float area,circumference;
    const float pi=3.14;

    printf("Enter radius: ");
    scanf("%d",&radius);

    area=pi*radius*radius;
    printf("area of circle is %.2f\n",area);

    circumference=2*pi*radius;
    printf("circumference of circle is %.2f",circumference);
   // printf("radius = %d \npi = %f",radius,pi);
}
