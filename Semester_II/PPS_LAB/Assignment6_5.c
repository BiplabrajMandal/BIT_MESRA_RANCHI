/*

Write a program to multiply two matrices.

*/


#include <stdio.h>

int main()
{
    int m1,n1,m2,n2;
    int i,j,k,a,b,c;
    int S;

    printf("\nEnter the row of the Matrix1:");
    scanf(" %d",&m1);
    printf("\nEnter the column of the Matrix1:");
    scanf(" %d",&n1);

    printf("\nEnter the row of the Matrix2:");
    scanf(" %d",&m2);
    printf("\nEnter the column of the Matrix2:");
    scanf(" %d",&n2);

    int M1[m1][n1],M2[m2][n2];

    printf("\nEnter the values for %d x %d Matrix(Matrix1):\n",m1,n1);
    for(i=0;i<m1;i++)
    {
        printf("Row %d \n",(i+1));
        for(j=0;j<n1;j++)
        {  
            printf("Column %d :",(j+1));
            scanf("\t %d",&M1[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the values for %d x %d Matrix(Matrix2):\n",m2,n2);
    for(i=0;i<m2;i++)
    {
        printf("Row %d \n",(i+1));
        for(j=0;j<n2;j++)
        {
            printf("Column %d :",(j+1));
            scanf("\t %d",&M2[i][j]);
        }
        printf("\n");
    }

    printf("\n The Matrix1 :\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("\t %d",M1[i][j]);
        }
        printf("\n\n");
    }

    printf("\n The Matrix2 :\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("\t %d",M2[i][j]);
        }
        printf("\n\n");
    }

    a=0,b=0,c=0,k=0;

    if(n1==m2)
    {
        a=m1;
        b=n2;
        c=n1;
        int M[a][b];

        for(k=0;k<c;k++)
        {
            S=S+M1[0][k]*M2[0][k];
        }
        M[0][0]=S;
        S=0;

        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                for(k=0;k<c;k++)
                {
                    S=S+M1[i][k]*M2[k][j];
                }
                M[i][j]=S;
                S=0;
            }
        }

        printf("\n The Matrix after Multiplication(Matrix1 x Matrix2) :\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("\t %d",M[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("\nMultiplication Not Possible.\n");
    }
    
    printf("\n\n");
    return (0);
}
