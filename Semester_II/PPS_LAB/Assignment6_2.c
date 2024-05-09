/*

WAP to sort a list of strings alphabetically using a 2-dim. Character array.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,m,n;

    printf("\nEnter the no of elements of Arrray of Strings:");
    scanf(" %d",&m);
    printf("\nEnter the maximum length of the Strings:");
    scanf(" %d",&n);

    char S[m][n];
    char c[n];
    printf("\nEnter the elemnts of the Array with maximum length of %d:\n",n);
    for(i=0;i<m+1;i++)
    {
        gets(S[i]);
    }

    for(i=0;i<m+1;i++)
    {
        for(j=i;j<m+1;j++)
        {
            if((strcmp(S[i],S[j]))>0)
            {
               strcpy(c,S[j]);
               strcpy(S[j],S[i]);
               strcpy(S[i],c);
            }
        }
    }

    printf("\nThe elements of the Array in Ascending Order:\n");
    for(i=0;i<m+1;i++)
    {
        puts(S[i]);
    }

    printf("\n\n");
    return (0);
}
