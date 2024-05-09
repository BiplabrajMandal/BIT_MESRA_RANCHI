/*

Write a program using functions for reading, manipulating and displaying 
the corresponding matrices in matrix form.

*/

#include <stdio.h>

int main()
{
    int m,n,i,j;

    printf("\nEnter the row of the matrix:");
    scanf(" %d",&m);
    printf("\nEnter the column of the matrix:");
    scanf(" %d",&n);

    int M[m][n];
    printf("\nEnter the values for %d x %d Matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        printf("Row %d \n",(i+1));
        for(j=0;j<n;j++)
        {
            printf("Column %d :",(j+1));
            scanf("\t %d",&M[i][j]);
        }
        printf("\n");
    }

    printf("\n The Matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",M[i][j]);
        }
        printf("\n\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(M[i][j]%2==0)
            {
                M[i][j]=M[i][j]+1;
            }
            else
            {
                M[i][j]=M[i][j]-1;
            }
        }
    }

    printf("\nAfter Manipulating the Matric.\n");
    printf("Increasing the Even no. by one & Decreasing the Odd no. by 1.");
    printf("\n The Matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",M[i][j]);
        }
        printf("\n\n");
    }

    return (0);
}
