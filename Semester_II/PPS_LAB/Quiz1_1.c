/*

Create the following Matrix using the scanf() function and display the results of the Matrix.
e.g.,   4   3   8
        9   5   1
        2   7   6

Find the sum of the prime diagonal and secondary diagonal
    Sum of prime diagonal = 4 + 5 + 6 = 15
    Sum of secondary diagonal = 8 + 5 + 2 = 15

Calculate the sum of each row and column of the above matrix.

Check whether the sum of each row, column and diagonal are the same in the above matrix or not.

How many number are odd and even in the above matrix?

*/


#include <stdio.h>
int main()
{
    int M[3][3],i,j;
    int S_Pd,S_Sd,k;
    int S_r1,S_r2,S_r3,S_c1,S_c2,S_c3,a;
    int N_Odd,N_Even;

    /*Inputing elements in the Matrix*/
    printf("\nEnter the element of the Matrix(3x3):\n");
    for(i=0;i<3;i++)
    {
        printf("Row %d \n",(i+1));
        for(j=0;j<3;j++)
        {
            printf("Column %d",(j+1));
            scanf("\t %d",&M[i][j]);
        }
        printf("\n");
    }

    /*Displaying the result of the Matrix*/
    printf("\nMatrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",M[i][j]);
        }
        printf("\n\n");
    }

    /*Sum of Primary and Secondary Diagonal Elements*/
    S_Pd=0;
    S_Sd=0;
    k=2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                S_Pd=S_Pd+M[i][j];
                S_Sd=S_Sd+M[i][k];
            }
            k=k-1;
        }
    }
    printf("\nSum of elements of Primary Diagonal: %d",S_Pd);
    printf("\nSum of elements of Secondary Diagonal: %d",S_Sd);
    printf("\n\n");

    /*Sum of each Row and Column in the Matrix*/
    S_c1=0;
    S_c2=0;
    S_c3=0;
    S_r1=0;
    S_r2=0;
    S_r3=0;
    a=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==a)
            {
                S_r1=S_r1+M[i][j];
                if(j==0)
                {
                    S_c1=S_c1+M[i][j];
                }
                else if(j==1)
                {
                    S_c2=S_c2+M[i][j];
                }
                else if(j==2)
                {
                    S_c3=S_c3+M[i][j];
                }
            }
            else if(i==1)
            {
                S_r2=S_r2+M[i][j];
                if(j==0)
                {
                    S_c1=S_c1+M[i][j];
                }
                else if(j==1)
                {
                    S_c2=S_c2+M[i][j];
                }
                else if(j==2)
                {
                    S_c3=S_c3+M[i][j];
                }
            }
            else if(i==2)
            {
                S_r3=S_r3+M[i][j];
                if(j==0)
                {
                    S_c1=S_c1+M[i][j];
                }
                else if(j==1)
                {
                    S_c2=S_c2+M[i][j];
                }
                else if(j==2)
                {
                    S_c3=S_c3+M[i][j];
                }
            }
        }
        
    }
    printf("\nSum of elements in Row1: %d",S_r1);
    printf("\nSum of elements in Row2: %d",S_r2);
    printf("\nSum of elements in Row3: %d",S_r3);
    printf("\nSum of elements in Column1: %d",S_c1);
    printf("\nSum of elements in Column2: %d",S_c2);
    printf("\nSum of elements in Column3: %d",S_c3);
    printf("\n\n");

    /*Checking the Equality of each Row,Column and Diagonal in the Matric*/
    if(S_c1==S_c2 && S_c2==S_c3 && S_c3==S_r1 && S_r1==S_r2 && S_r2==S_r3 && S_r3==S_Pd && S_Pd==S_Sd)
    {
        printf("\nSum of each Row,Column and Diagonal are same i.e., %d .",S_Pd);
    }
    else
    {
        printf("\nSum of each Row,Column and Diagonal are not same.");
    }
    printf("\n\n");

    /*Displaying No. of Even and Odd No. in the Matrix*/
    N_Even=0;
    N_Odd=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(M[i][j]%2==0)
            {
                N_Even=N_Even+1;
            }
            else
            {
                N_Odd=N_Odd+1;
            }
        }
    }
    printf("\nNumber of Even no. in the Matrix: %d",N_Even);
    printf("\nNumber of Odd no. in the Matrix: %d",N_Odd);
    printf("\n\n");


    return (0);
}
