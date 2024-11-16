//Write a program in C to count the total number of vowels or consonants in a string. 
#include<stdio.h>
int main()
{
    char str[50];
    int vowel=0,consonant=0;
    printf("Enter string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
        {
            vowel++;
        }
        else if (str[i]==' ')
        {
            continue;
        }
        else
        {
            consonant++;
        }
    }
    printf("Total Vowels are : %d\n",vowel);
    printf("Total Consonants are : %d",consonant);
return 0;
}