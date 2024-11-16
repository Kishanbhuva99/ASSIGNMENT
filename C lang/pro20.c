/*   Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.  */

#include<stdio.h>
int main()
{
    float salary,premium,loanInstallment;
    //float premium_rate;//=10;
    //float loan_rate;//=10;

    printf("Enter salary of month :");
    scanf("%f",&salary);

    printf("<<-------------------INSURANCE PREMIUM----------------------------->>");
    //premium_rate=10.00/100;
    //premium_rate=premium_rate/100;
    premium=salary*(10.00/100);
    printf("\n monthly salary is : %.2f",salary);
    salary=salary-premium;
    printf("\n salalry after isurance premium debited is : %.2f",salary);
    printf("\n Amount of premium is : %.2f\n",premium);

    printf("<<-------------------LOAN INSTALLMENT----------------------------->>");
   // loan_rate=10.00/100;
    //loan_rate=loan_rate/100;
    loanInstallment=salary*(10.00/100);
    salary=salary-loanInstallment;
    printf("\n salary after loan installment deducted is : %.2f",salary);
    printf("\n Amount of loan  installment is : %.2f",loanInstallment);

return 0;
}