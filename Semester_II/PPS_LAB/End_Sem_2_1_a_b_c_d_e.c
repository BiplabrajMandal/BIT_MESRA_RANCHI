/*

You have given the following numbers

	8, 41, 7, 80, 11, 50, 10, 20, 30, 20, 60, 70

Write a program in C Language to solve the following

	a) Store the above numbers in array A(Single Dimension) using scanf() and
	   display the results.

	b) Store the value of an array into Mat1 of dimension 3X4
		e.g.,			Mat1
			8	41	7	80
			11	50	10	20
			30	20	60	70

	c) Create another matrix Mat2 from Mat1 using the following logic
	   Replace marks with 50 if marks more than 50
		Result			Mat2
			8	41	7	50
			11	50	10	20
			30	20	50	50

	d) Find the subtraction of two matrices Mat1 and Mat2 using the function and
	   store the result into the third Mat3.

	e) Prove the following using transpose of matrix
		((Mat1)^T)^T = Mat1
	   Where T stands for transpose of a matrix.

*/

#include <stdio.h>

void Sub_Matrix(int r,int c,int M1[r][c],int M2[r][c],int M3[r][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]-M2[i][j];
        }
    }
}

void Transpose_Matrix(int r,int c,int M[r][c],int M_T[c][r])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            M_T[j][i]=M[i][j];
        }
    }
}

int main()
{
    int A[12],Mat1[3][4],Mat2[3][4],Mat3[3][4],M_T[4][3],M_T_T[3][4];
    int i,j,a=0,check=0;

    printf("\nEnter the elements in the Array(Numbers):\n");
    for(i=0;i<12;i++)
    {
        scanf(" %d",(A+i));
    }
    
    printf("\nThe Array:\n");
    for(i=0;i<12;i++)
    {
        printf(" %d",*(A+i));
    }
    printf("\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            Mat1[i][j]=*(A+a);
            a++;
        }
    }

    printf("\nThe Matrix_1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",Mat1[i][j]);
        }
        printf("\n\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(Mat1[i][j]>50)
            {
                Mat2[i][j]=50;
            }
            else
            {
                Mat2[i][j]=Mat1[i][j];
            }
        }
    }

    printf("\nThe Matrix_2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",Mat2[i][j]);
        }
        printf("\n\n");
    }

    Sub_Matrix(3,4,Mat1,Mat2,Mat3);

    printf("\nThe Subtraction of Matrix_1 and Matrix_2(Matrix_3):\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",Mat3[i][j]);
        }
        printf("\n\n");
    }

    printf("\n \" T stands for Transpose \" \n");

    Transpose_Matrix(3,4,Mat1,M_T);
    printf("\nThe Transpose of Matrix_1[(Mat1)^T]:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",M_T[i][j]);
        }
        printf("\n\n");
    }

    printf("\nThe Matrix_1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",Mat1[i][j]);
        }
        printf("\n\n");
    }

    Transpose_Matrix(4,3,M_T,M_T_T);
    printf("\nThe Transpose of Transpose of Matrix_1[((Mat1)^T)^T]:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",M_T_T[i][j]);
        }
        printf("\n\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if (Mat1[i][j]!=M_T_T[i][j])
            {
                check++;
            }
        }
    }
    if (check==0)
    {
        printf("\n ((Mat)^T)^T is equal to Mat1. \n");
    }
    else
    {
        printf("\n ((Mat)^T)^T is not equal to Mat1. \n");
    }

    printf("\n\n");
    return (0);
}
