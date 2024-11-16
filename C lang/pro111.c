//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],cpystr[50];
    printf("Enter String : ");
    gets(str);
    strcpy(cpystr,str);
    printf("Enterd string is %s\n",str);
    printf("Copy of string---> %s",cpystr);

return 0;
}
