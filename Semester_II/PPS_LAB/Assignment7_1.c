/*

Write a program in C to do the following using the function
    a) Read values in matrix1 of order 3x3
    b) Read values in matrix2 of order 3x3
    c) Find the sum of two matrices and store the results in matrix3
    d) Find the Multiplication of two matrices
    e) Find the transpose of a matrix

*/

#include <stdio.h>

void Display_Matrix(int M[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",M[i][j]);
        }
        printf("\n\n");
    }
}

void Input_Matrix(int M[3][3],int M_no)
{
    int i,j;
    printf("\nEnter the values for 3 x 3 Matrix(Matrix%d):\n",M_no);
    for(i=0;i<3;i++)
    {
        printf("Row %d \n",(i+1));
        for(j=0;j<3;j++)
        {  
            printf("Column %d :",(j+1));
            scanf("\t %d",&M[i][j]);
        }
        printf("\n");
    }
    printf("\n The Matrix%d :\n",M_no);
    Display_Matrix(M);
}

void Sum_Matrix(int M1[3][3],int M2[3][3],int M3[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {  
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
}


void Transpose_Matrix(int M[3][3],int M_T[3][3],int M_no)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            M_T[j][i]=M[i][j];
        }
    }
    printf("\n The Transpose of Matrix%d :\n",M_no);
    Display_Matrix(M_T);
}


int main()
{
    int M1[3][3],M2[3][3],M3[3][3];
    int M1_T[3][3],M2_T[3][3],M3_T[3][3];

    Input_Matrix(M1,1);
    Input_Matrix(M2,2);
    Sum_Matrix(M1,M2,M3);
    printf("\n The Sum of Matrix1 and Matrix2:\n");
    Display_Matrix(M3);
    Transpose_Matrix(M1,M1_T,1);
    Transpose_Matrix(M2,M2_T,2);
    Transpose_Matrix(M3,M3_T,3);

    printf("\n\n");
    return (0);
}
