//Write a program in C to combine two strings manually
#include<stdio.h>

int main()
{
    char str[50];
    char str1[50];
    int i,j;
    printf("Enter first string : ");
    gets(str);
    printf("Enter second string : ");
    gets(str1);

    for (i = 0; str[i] !='\0' ; i++);
    for ( j = 0; str[j] !='\0'; j++)
    {
        str[i]=str1[j];
        i++;
    }
    str1[i]='\0';
    
    printf("after Combined string-->  %s\n",str);

return 0;
}