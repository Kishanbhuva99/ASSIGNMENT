/* WAP to take 10 no. Input from user find out below values  
a. How many Even numbers are there  
b. How many odd numbers are there  
c. Sum of even numbers  
d. Sum of odd numbers   */

#include<stdio.h>
int main()
{
    int n[10];
    int sumEven=0,sumOdd=0,countEven=0,countOdd=0,check;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number : ");
        scanf("%d",&n[i]);
        check=n[i];
       //printf("%d",check);
        if(check%2==0)
        {   
                countEven++;
                sumEven=sumEven+check;
        }
        else
        {
                countOdd++;
                sumOdd=sumOdd+check;
        }
        
    }
    printf("\nEven number are %d",countEven);
    printf("\nOdd number are %d",countOdd);
    printf("\nSum of all even numbers are %d",sumEven);
    printf("\nSum of all odd numbers are %d",sumOdd);
return 0;
}