/*

You have given the following numbers

	60, 40, 30, 80, 10, 50, 20, 10, 25, 15

Write a program in C Language to solve the following

	a) Store the above numbers in array A(Single Dimension) using scanf() and
	   display the results.

	b) Store the value of an array into Mat1 of dimension 2X5
		e.g.,			Mat1
			    60	40	30	80	10
			    50	20	10	25	15

	c) Create another matrix Mat2 from Mat1 using the following logic
	   Replace marks with 20 if marks more than 20
		Result			Mat2
			    20	20	20	20	10
			    20	20	10	20	15

	d) Find the sum of two matrices Mat1 and Mat2 using the function and
	   store the result into the third Mat3.


*/

#include <stdio.h>

void Sum_Matrix(int r,int c,int M1[r][c],int M2[r][c],int M3[r][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
}

int main()
{
    int A[10],Mat1[2][5],Mat2[2][5],Mat3[2][5];
    int i,j,a=0;

    printf("\nEnter the elements in the Array(Numbers):\n");
    for(i=0;i<10;i++)
    {
        scanf(" %d",(A+i));
    }
    
    printf("\nThe Array:\n");
    for(i=0;i<10;i++)
    {
        printf(" %d",*(A+i));
    }
    printf("\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            Mat1[i][j]=*(A+a);
            a++;
        }
    }

    printf("\nThe Matrix_1:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t %d",Mat1[i][j]);
        }
        printf("\n\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            if(Mat1[i][j]>20)
            {
                Mat2[i][j]=20;
            }
            else
            {
                Mat2[i][j]=Mat1[i][j];
            }
        }
    }

    printf("\nThe Matrix_2:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t %d",Mat2[i][j]);
        }
        printf("\n\n");
    }

    Sum_Matrix(2,5,Mat1,Mat2,Mat3);

    printf("\nThe Sum of Matrix_1 and Matrix_2(Matrix_3):\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\t %d",Mat3[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
    return (0);
}
