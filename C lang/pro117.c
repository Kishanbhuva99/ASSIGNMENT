//Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[50];
    char onlyalpha[50];
    printf("Enter string : ");
    gets(str);

    int j=0;
    for (int i = 0; str[i] !='\0' ; i++)
    {
        if (isalpha(str[i]))
        {
            onlyalpha[j]=str[i];
            j++;
        }
    
    }
    onlyalpha[j]='\0';
    printf("after removing characters %s",onlyalpha);

return 0;
}