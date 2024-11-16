// C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z') 
    {
        printf("%c is LOWER CASE", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("%c is UPPER CASE",c);
    }
    
    else if (c>='0' && c<='9')
    {
        printf("%c IS DIGIT ",c);
    }
    else
    {
        printf("%c is Special character.\n", c);
    }
return 0;
}