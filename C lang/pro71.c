/* Program of Armstrong Number in C Using For Loop & While Loop */

#include<stdio.h>
int main()
{
    int nm,result=0,armstrong,singleNumber;
    printf("Enter number for ARMSTRONG : ");
    scanf("%d",&nm);
    singleNumber=nm;

    printf("\nARMSTRONG using for loop");
    for (singleNumber = nm; singleNumber!=0; singleNumber/=10)
    {
        armstrong=singleNumber%10;
        result+=armstrong*armstrong*armstrong;
    }
    


    //printf("ARMTRONG using while loop");
    // while (singleNumber!=0)
    // {
    //     armstrong=singleNumber%10;
    //     result+=armstrong*armstrong*armstrong;
    //     singleNumber/=10;
    // }
    if(result==nm)
    {
        printf("\nNumber %d is ARMSTRONG.",nm);
    }
    else
    {
        printf("\nNumber %d is not ARMSTRONG.",nm);
    }
    
return 0;
}