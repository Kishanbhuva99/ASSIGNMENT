#include<stdio.h>

int sumnum(int a,int b)
{
    a*=2;
    b*=2;
    int num4 =dblnum(a,b);  
    return num4; 
}
int dblnum(int num1,int num2)
{
    int num3 = num1+num2;
    return num3;

}

int main()
{
    int n1,n2;
    printf("enter number 1 : ");
    scanf("%d",&n1);
    printf("enter number 2 : ");
    scanf("%d",&n2);
    int sum= sumnum(n1,n2);
    printf(" sum is %d",sum);
}