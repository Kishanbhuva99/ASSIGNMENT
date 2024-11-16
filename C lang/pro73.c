/* .Accept 5 numbers from user and find those numbers factorials   */

#include<stdio.h>
int main()
{
    int n[5];;
// done
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter number %d : ",i+1);
        scanf(" %d",&n[i]);
        int j=1;
        int factorial=1;
        while(j <= n[i])
        {
            factorial=factorial*j;
            j++;
        }
        n[i]=factorial;
        printf("Factorial is %d",n[i]);
    }
    
return 0;
}