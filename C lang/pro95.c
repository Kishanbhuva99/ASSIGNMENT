/* Write a program of structure employee that provides the following  
a. information -print and display empno, empname, address 
andage  
b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address andage  */


#include<stdio.h>

struct employee
{
  int empno;
  char empname[20];
  char address[100];
  int age;
};

// void employee_1()
// {
//     struct employee e1;
//   e1.empno = 1;

//   printf("Enter Employee name: ");
//   gets(e1.empname);
//   printf("Enter Address: ");
//   gets(e1.address);
//   printf("Enter age: ");
//   scanf(" %d",&e1.age);

//   printf("\nEmployee no.: %d", e1.empno);
//   printf("\nEmployee Name: %s", e1.empname);
//   printf("\nAddress: %s", e1.address);
//   printf("\nEmployee age: %d",e1.age);

// }

void multiEmployee()
{
    struct employee emp[5];
  for (int i = 0; i < 5; i++)
  {
    printf("----------\n");
    emp[i].empno = i + 1;
    printf("Employee no.: %d",emp[i].empno);
    printf("\nEnter Employee name: ");
    scanf("   %s", &emp[i].empname);
    printf("Enter Address: ");
    scanf("    %s", &emp[i].address);
    printf("Enter Employee age: ");
    scanf("%d", &emp[i].age);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("\nEmployee no.: %d", emp[i].empno);
    printf("\nEmployee Name: %s", emp[i].empname);
    printf("\nage: %d", emp[i].age);
    printf("\naddress: %s", emp[i].address);
    printf("\n<----------->");
  }
}

int main()
{
    //employee_1();
    multiEmployee();
return 0;
}