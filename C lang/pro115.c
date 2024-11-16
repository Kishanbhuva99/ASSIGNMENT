//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa. 
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[50];

    printf("Enter a sentence: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
     {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

    printf("   After Case changed Sentence---> %s", str);

    return 0;
}
