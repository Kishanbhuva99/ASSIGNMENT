//Accept 5 expense from user and find average of expense

#include<stdio.h>
int main()
{
    float expense1,expense2,expense3,expense4,expense5,average,totalExpense;
    
    printf("<<-----Enater 5 Expense----->>");
    printf("\nEnter Expense 1 :");
    scanf("%f",&expense1);
    printf("\nEnter Expense 2 :");
    scanf("%f",&expense2);
    printf("\nEnter Expense 3 :");
    scanf("%f",&expense3);
    printf("\nEnter Expense 4 :");
    scanf("%f",&expense4);
    printf("\nEnter Expense 5 :");
    scanf("%f",&expense5);

    average=(expense1+expense2+expense3+expense4+expense5)/5;
    // totalExpense=expense1+expense2+expense3+expense4+expense5;
    // average=totalExpense/5;
    printf("Average Expense is %.2f",average);

return 0;
}