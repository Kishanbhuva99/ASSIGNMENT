//Write a program in C to extract a substring from a given string
#include <stdio.h>

int main()
{
    char str[50], substr[50];
    int pos, len,i;

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the position to start extraction: ");
    scanf("%d", &pos);

    printf("Enter the length of the substring: ");
    scanf("%d", &len);
    pos--;
    for(i = 0; i < len; i++)
    {
        substr[i] = str[pos];
        pos++;
    }
    substr[i] = '\0';

    printf("The extracted substring is: %s\n", substr);

    return 0;
}