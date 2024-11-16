#include<stdio.h>
#include<string.h>

void strInput();
void strReverse();

int main()
{
    printf("\n----------STRING-----------");
    strReverse();
    
return 0;
}


void strInput()
{
    // char str1[50];
    char *str;
    char str1[50];
    printf("\n Please Enter the String : ");
    gets(str1);
    // return "Hello";

    //str=str1;
    //return str;
}

void strReverse()
{
    char str2[50];
    //const char *str;
        strInput(str2);
    //puts(str);
    // char str2[50] = strInput();
    // strrev(str2);

     printf("\n\tString Reverse : %s",str2);
}
