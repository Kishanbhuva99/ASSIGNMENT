/*Accept 5 employees name and salary and count average and total salary  */


#include<stdio.h>
int main()
{
    float sal1,sal2,sal3,sal4,sal5,average,totalSalary;
    char nm1[10],nm2[10],nm3[10],nm4[10],nm5[10];

    printf("<<-----Enter 5 Employees Name and Salary----->>");
    printf("\nEmploye Name 1 :");
    scanf("%s",&nm1);
    printf("Enter Salary :");
    scanf("%f",&sal1);

    printf("\nEmploye Name 2 :");
    scanf("%s",&nm2);
    printf("Enter Salary :");
    scanf("%f",&sal2);

printf("\nEmploye Name 3 :");
    scanf("%s",&nm3);
    printf("Enter Salary :");
    scanf("%f",&sal3);

printf("\nEmploye Name 4 :");
    scanf("%s",&nm4);
    printf("Enter Salary :");
    scanf("%f",&sal4);

printf("\nEmploye Name 5 :");
    scanf("%s",&nm5);
    printf("Enter Salary :");
    scanf("%f",&sal5);


    // printf("name is %s",nm1);
    // printf("\nsalary is %f",sal1);
    printf("\n<<-------------------------------->>");
    totalSalary=sal1+sal2+sal3+sal4+sal5;
    average=totalSalary/5;

    printf("\nAverage salary is : %.2f",average);
    printf("\nTotal Salary of 5 Employees is : %.2f",totalSalary);
    
return 0;
}