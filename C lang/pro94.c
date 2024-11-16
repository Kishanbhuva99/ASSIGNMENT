/* WAP to reverse a string and check that the string is palindrome or not   */


#include<stdio.h>
#include<string.h>
    char str[50];
int palin()
{
    int length,palin=1;
    char revstr[50];
    strcpy(revstr,str);
    strrev(revstr);
    //aprintf("%s",revstr);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]!=revstr[i])
        {
            palin=0;
        }
    }

        if(palin==1)
        {
            printf("\nThis string is Palindrome.");
        }
        else
        {
            printf("\nThis String is not Palindrome");
        }
}

int main()
{
    printf("Enter String : ");
    gets(str);
    palin();
return 0;
}