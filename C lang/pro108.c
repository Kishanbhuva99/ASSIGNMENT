//Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main()
{
    char str[50];
    int wordCount=1;
    printf("Enter string : ");
    gets(str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            wordCount++;
        }
    }
    printf("Total Number of Words : %d",wordCount);
return 0;
}