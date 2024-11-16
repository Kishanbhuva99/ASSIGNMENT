//Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    
    char str[100],maxWord[100],minword[100];
    int max=0,min=20;
    char word[100];
    int j=0;
    int len;
    fflush(stdin);
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
            if(len<=min)
            {
                min=len;
                strcpy(minword,word);
            

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
            if(len<=min)
            {
                min=len;
                strcpy(minword,word);
            }
    printf("Largest Word --> %s\n",maxWord);
    printf("Smallest Word --> %s\n",minword);
return 0;
}