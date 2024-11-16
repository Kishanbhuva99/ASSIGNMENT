//Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
int lenstr();
    char str[50];
    
int main()
{
    printf("Enter String : ");
    gets(str);
   printf("\nLenght of string is : %d",lenstr(str));
return 0;
}

int lenstr()
{
    int lenght=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        lenght++;
    }
    return lenght;
}