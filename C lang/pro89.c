/* WAP to find reverse of string using recursion   */


#include<stdio.h>
void revstr(char *);

int main()
{
    char str[50];
    printf("Enter string : ");
    gets(str);
    revstr(str);
    
return 0;
}

void revstr(char *str2)
{
    //this condition work untill Null
    if(*str2)
    {
        revstr(str2+1);
        printf("%c",*str2);
    }

}