/* WAP to make addition, Subtraction and multiplication of two matrix 
using 2-D Array */

#include<stdio.h>

void inputMat();
void multiplyMat();
void addMat();
void subMat();

    int mat1[2][2];
    int mat2[2][2];
    int mat3[2][2];

int main()
{
    inputMat();
    printf("\n");
    printf("\n1. Addition of Matrix");
    printf("\n2.Subtraction of Matrix");
    printf("\n3. Multiplication of Matrix");

    int oprtn;
    printf("\nEnter your Opretion : ");
    scanf("%d",&oprtn);

    if(oprtn==1)
    {
        addMat();
    }
    else if (oprtn==2)
    {
        subMat();
    }
    else if (oprtn==3)
    {
        multiplyMat();
    }
    else
    {
        printf("\n! Invalid Opretion");
    }
    return 0;
}

void inputMat()
{

    printf("\n-------------MATRIX: 1-------------\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat1[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
    }  

    printf("\n-------------MATRIX: 2-------------\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat2[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }     
    } 
}

void multiplyMat()
{
    
    mat3[0][0]=(mat1[0][0]*mat2[0][0])+(mat1[0][1]*mat2[1][0]);
    mat3[0][1]=(mat1[0][0]*mat2[0][1])+(mat1[0][1]*mat2[1][1]);
    mat3[1][0]=(mat1[1][0]*mat2[0][0])+(mat1[1][1]*mat2[1][0]);
    mat3[1][1]=(mat1[1][0]*mat2[0][1])+(mat1[1][1]*mat2[1][1]);

     printf("\n-----Multiplication of Matrix----------\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
    
}

void addMat()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("\n\n--------Addition of Matrix--------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }   
}

void subMat()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat3[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    printf("\n\n---------Subtraction of Matrix---------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
}