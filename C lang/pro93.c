/* WAP Find out length of string without using inbuilt function  */


#include<stdio.h>
int lenstr();
    char str[50];
    
int main()
{
    printf("Enter String : ");
    gets(str);
   printf("\nLenght of string is : %d",lenstr(str));
return 0;
}

int lenstr()
{
    int lenght=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        lenght++;
    }
    return lenght;
}

// int lenstr(char *str1,int len)
// {
//     len++;
//     if (*str1)
//     {
        
//         lenstr(str1+1,len);
//     }
//     printf("\nLenght of String is : %d",len);
    
// }