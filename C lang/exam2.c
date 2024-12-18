#include<stdio.h>

struct person
{
    char name[10];
    int age;
    char city[5];
    
};
void showperson(struct person p1)
{
    int i=0;
    printf("---------person------------\n");
    printf("Enter name of person %d : %s\n",i+1,p1.name);
    printf("Enter age : %d\n",p1.age);
    printf("Enter city : %s\n",p1.city);
    i++;
}



int main()
{
struct person p[3];
for (int i = 0; i < 3; i++)
{
    printf("Enter name of person %d : ",i+1);
    scanf("%s",&p[i].name);
    printf("Enter age : ");
    scanf("%d",&p[i].age);
    printf("Enter city : ");
    scanf("%s",&p[i].city);
    printf("\n----------------------\n");
}
for (int J = 0; J < 3; J++)
{
    showperson(p[J]);
}

    return 0;
}