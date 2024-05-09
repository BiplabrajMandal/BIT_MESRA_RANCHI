/*

Create the following Upper Triangular Matrix using scanf() fuction and display the result of the Matrix.
e.g.,       Column1    Column2     Column3       Column4 
        Row1    10-         20          30          40
        Row2    0           4           5           6
        Row3    0           0           30          20
        Row4    0           0           0           45

Prove that the above matrix is an Upper Triangular Matrix using C language

Find the Transpose of the above matrix.

Calculate the sum of each row and column of the above matrix.

How many are there in the above matrix?

*/


#include <stdio.h>
int main()
{
    int U[4][4],T[4][4];
    int i,j,flag,N_Zero;
    int S_r1,S_r2,S_r3,S_r4;
    int S_c1,S_c2,S_c3,S_c4;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            U[i][j]=0;
        }
    }

    // Asking the User to enter the value of the Matrix
    printf("\nEnter the values for 4X4 Matrix:\n");
    for(i=0;i<4;i++)
    {   
        printf("\nRow %d:\n",i+1);
        for(j=0;j<4;j++)
        {
            printf("Column %d",(j+1));
            scanf(" %d",&U[i][j]);
        }
    }

    // Displaying the Matrix
    printf("\nMatrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",U[i][j]);
        }
        printf("\n\n");
    }

    // Checking the Matrix is an Upper Triangular Matrix or not
    flag=1;
    for(i=1;i<4;i++)
    {
        for(j=0;j<i;j++)
        {
            if(U[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nThe Matrix is not an Upper Triangular Matrix.\n");
    }
    if(flag==1)
    {
        printf("\nThe Matrix is an Upper Triangular Matrix.\n");
    }

    // Creating the Transpose of the Matrix
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            T[j][i]=U[i][j];
        }
    }
    printf("\nTranspose of the Matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",T[i][j]);
        }
        printf("\n\n");
    }

    // Sum of each Row and Column of the Matrix
    S_r1=0;
    S_r2=0;
    S_r3=0;
    S_r4=0;
    S_c1=0;
    S_c2=0;
    S_c3=0;
    S_c4=0;
    printf("\nFor Original Matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0)
            {
                S_r1=S_r1+U[i][j];
                if(j==0)
                {
                    S_c1=S_c1+U[i][j];
                }
                else if(j==1)
                {
                    S_c2=S_c2+U[i][j];
                }
                else if(j==2)
                {
                    S_c3=S_c3+U[i][j];
                }
                else if(j==3)
                {
                    S_c4=S_c4+U[i][j];
                }
            }
            else if(i==1)
            {
                S_r2=S_r2+U[i][j];
                if(j==0)
                {
                    S_c1=S_c1+U[i][j];
                }
                else if(j==1)
                {
                    S_c2=S_c2+U[i][j];
                }
                else if(j==2)
                {
                    S_c3=S_c3+U[i][j];
                }
                else if(j==3)
                {
                    S_c4=S_c4+U[i][j];
                }
            }
            else if(i==2)
            {
                S_r3=S_r3+U[i][j];
                if(j==0)
                {
                    S_c1=S_c1+U[i][j];
                }
                else if(j==1)
                {
                    S_c2=S_c2+U[i][j];
                }
                else if(j==2)
                {
                    S_c3=S_c3+U[i][j];
                }
                else if(j==3)
                {
                    S_c4=S_c4+U[i][j];
                }
            }
            else if(i==3)
            {
                S_r4=S_r4+U[i][j];
                if(j==0)
                {
                    S_c1=S_c1+U[i][j];
                }
                else if(j==1)
                {
                    S_c2=S_c2+U[i][j];
                }
                else if(j==2)
                {
                    S_c3=S_c3+U[i][j];
                }
                else if(j==3)
                {
                    S_c4=S_c4+U[i][j];
                }
            }
        }
    }
    printf("\nSum of elements in Row1: %d",S_r1);
    printf("\nSum of elements in Row2: %d",S_r2);
    printf("\nSum of elements in Row3: %d",S_r3);
    printf("\nSum of elements in Row4: %d",S_r4);
    printf("\nSum of elements in Column1: %d",S_c1);
    printf("\nSum of elements in Column2: %d",S_c2);
    printf("\nSum of elements in Column3: %d",S_c3);
    printf("\nSum of elements in Column4: %d",S_c4);
    printf("\n\n");

    // Number of Zero's for the Matrix
    N_Zero=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(U[i][j]==0)
            {
                N_Zero=N_Zero+1;
            }
        }
    }
    printf("\nNumber of Zero's in the Matrix: %d",N_Zero);
    
    printf("\n\n");
    return (0);
}
