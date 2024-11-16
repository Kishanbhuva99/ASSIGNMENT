// Find area of Triangle Formula : A = 1/2 × b × h 

#include<stdio.h>

void main()
{
    int base,height,area;

    printf("enter base :");
    scanf("%d",&base);
    printf("enter height :");
    scanf("%d",&height);

    area=0.5*base*height;
    printf("area of triangle is %d ",area);
    
}