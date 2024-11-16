/* print 1 to 50 in diffrent line  */

#include<stdio.h>
int main()
{
    for (int i = 1; i <=50; i++)
    {
        printf(" %02d",i);
        if(i==10||i==20||i==30||i==40||i==50)
        {
            printf("\n");
        }
    }
    
return 0;
}