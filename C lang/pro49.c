/*Write a C program to read temperature in centigrade and display a 
suitable message according to the temperature state below:  
Temp < 0 then Freezing weather  
Temp 0-10 then Very Cold weather  
Temp 10-20 then Cold weather  
Temp 20-30 then Normal in Temp  
Temp 30-40 then Its Hot  
Temp >=40 then Its Very Hot*/

#include<stdio.h>
int main()
{
    int temp;

    printf("Enter Tempareture in Centigrade(0 to 100) : ");
    scanf("%d",&temp);

//     Temp < 0 then Freezing weather  
// Temp 0-10 then Very Cold weather  
// Temp 10-20 then Cold weather  
// Temp 20-30 then Normal in Temp  
// Temp 30-40 then Its Hot  
//Temp >=40 then Its Very Hot  

    if(temp<=0)
    {
        printf("\tFREZZING WEATHER");
    }
    else if (temp>0&&temp<=10)
    {
        printf("\tVERY COLD WEATHER");
    }
    else if (temp>10&&temp<=20)
    {
        printf("\tCOLD WEATHER");
    }
    else if (temp>20&&temp<=30)
    {
        printf("\tNORMAL TEMPARETURE");
    }
    else if (temp>30&&temp<40)
    {
        printf("\tITS HOT");
    }
    else
    {
        printf("\tITS VERY HOT");
    }
    
    

return 0;
}