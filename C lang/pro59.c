/* WAP to show  
i. Monday to Sunday using switch case ii. 
Vowel or Consonant using switch case  */

#include<stdio.h>
int main()
{
    int week;
    char c;

    printf("Enter week number(1-7) : ");
    scanf("%d", &week);
    
    switch (week)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    
    default:
        printf("Invalid Input! Please enter week number between 1-7.");
        break;
    }
    printf("\n--------------------------------");
    printf("\nEnter character : ");
    scanf(" %c",&c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Character is VOWEL.");
        break;
    
    default:
        printf("Character is CONSONANT.");
        break;
    }


return 0;
}