//Write a program in C to find the maximum number of characters in a string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    
    char str[100],maxWord[100];
    int max=0;
    char word[100];
    int j=0;
    int len;
    
    printf("Enter string :");
    gets(str);

    for (int i = 0; str[i] !='\0'; i++)
    {
        if (isspace(str[i]))
        {
            word[j]='\0';
            len=strlen(word);
            if(len>=max)
            {
                max=len;
                strcpy(maxWord,word);
                
            }
            j=0;
        }
        else
        {
            word[j]=str[i];
            j++;
        } 
    }
    word[j]='\0';
    len=strlen(word);
            if(len>=max)
            {
                max=len;
                strcpy(maxWord,word);
            }
    printf("maximum characters --> %s\n",maxWord);
return 0;
}