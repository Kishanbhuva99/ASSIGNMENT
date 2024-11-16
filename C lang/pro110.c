//Write a program in C to count the total number of alphabets, digits and special characters in a string
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[50];
    int alphabets = 0, digits = 0, specialChars = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            alphabets++;
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else
        {
            specialChars++;
        }
    }
    
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    
    return 0;
}
