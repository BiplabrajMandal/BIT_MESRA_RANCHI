/*

Matrix Multiplication using Pointer

*/

#include <stdio.h>
#include <stdlib.h>

void Display(int *M,int *R,int *C)
{
    int i,j;
    int a=0;
    for(i=0;i<*R;i++)
    {
        for(j=0;j<*C;j++)
        {
            printf("\t %d",*(M+a));
            a++;
        }
        printf("\n\n");
    }
}

void Input_Row_and_Column(int *R,int *C,int n)
{
    printf("\nEnter the row of Matrix_%d:",n);
    scanf(" %d",&(*R));
    printf("\nEnter the column of Matrix_%d:",n);
    scanf(" %d",&(*C));
}

void Input_Matrix(int *M,int *R,int *C,int n)
{
    int i,j;
    int a=0;
    printf("\n Enter the elements of Matrix_%d:",n);
    for(i=0;i<*R;i++)
    {
        printf("\nRow_%d:\n",(i+1));
        for(j=0;j<*C;j++)
        {
            printf("Column_%d:",(j+1));
            scanf("  %d",(M+a));
            a++;
        }
    }
    printf("\nThe Matrix_%d:\n",n);
    Display(M,R,C);
}

void Multiplication(int *M,int *M1,int *M2,int *R,int *R1,int *R2,int *C,int *C1,int *C2,int *P)
{
    int i,j,k;
    int A[*R1][*C1],B[*R2][*C2];
    int S;
    int a=0;
    
    for(i=0;i<*R1;i++)
    {
        for(j=0;j<*C1;j++)
        {  
            A[i][j]=*(M1+a);
            a++;
        }
    }
    a=0;

    for(i=0;i<*R2;i++)
    {
        for(j=0;j<*C2;j++)
        {  
            B[i][j]=*(M2+a);
            a++;
        }
    }
    a=0;

    for(k=0;k<*P;k++)
    {
        S=S+A[0][k]*B[k][0];
    }
    *M=S;
    S=0;
    
    for(i=0;i<*R;i++)
    {
        for(j=0;j<*C;j++)
        {
            for(k=0;k<*P;k++)
            {
                S=S+A[i][k]*B[k][j];
            }
            *(M+a)=S;
            a++;
            S=0;
        }
    }
    Display(M,R,C);
}

int main()
{
    int *M1,*M2,*M_M;
    int r1,c1,r2,c2;
    int N1,N2,N;
    int r,c,p;
    r=0;
    c=0;
    p=0;

    Input_Row_and_Column(&r1,&c1,1);
    Input_Row_and_Column(&r2,&c2,2);

    N1=r1*c1;
    N2=r2*c2;

    M1=(int*)malloc(sizeof(int)*(N1));
    M2=(int*)malloc(sizeof(int)*(N2));

    Input_Matrix(M1,&r1,&c1,1);
    Input_Matrix(M2,&r2,&c2,2);

    if(c1==r2)
    {
        r=r1;
        c=c2;
        p=c1;
        N=r*c;

        M_M=(int*)malloc(sizeof(int)*N);
        printf("\nMultiplication (Matrix_1 x Matrix_2):\n");
        Multiplication(M_M,M1,M2,&r,&r1,&r2,&c,&c1,&c2,&p);
    }
    if(c2==r1)
    {
        r=r2;
        c=c1;
        p=c2;
        N=r*c;

        M_M=(int*)malloc(sizeof(int)*N);
        printf("\nMultiplication (Matrix_2 x Matrix_1):\n");
        Multiplication(M_M,M1,M2,&r,&r1,&r2,&c,&c1,&c2,&p);
    }
    else
    {
        printf("\nMultiplication of Matrices is Not Possible\n");
    }
}
