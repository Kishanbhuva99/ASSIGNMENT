//Write a program in C to find the number of times a given word 'is' appears in the given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int wordCount=0;
    printf("Enter string :");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i]=='i')&&(str[i-1]==' ')&&(str[i+1]=='s')&&(str[i+2]==' '))
        {
            wordCount++;
        }
        
    }
   printf("Given word -- is -- appeared %d times in String",wordCount);
    


    // char findWord[50];
    // char substr[50];
    // int k=0;
    // printf("Enter word to find :");
    // gets(findWord);
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if(str[i]==' ')
    //     {
    //         //substr[i]='\0';
    //         printf("%s\n",substr);
    //         int result =strcmp(substr,findWord);
    //         //printf("%d\n",result);
    //         if (result==0)
    //         {
    //             wordCount++;
    //             //printf("%d",wordCount);
    //         } 
    //         k=0;
    //     }
    //     else
    //     {
    //         substr[k]=str[i];
    //         k++;
    //     }
    // }
    // substr[k] = '\0';
    // if (strcmp(substr, findWord) == 0) {
    //     wordCount++;
    // }
    // printf("Given word -- %s -- appeared %d times in String",findWord,wordCount); 
return 0;
}