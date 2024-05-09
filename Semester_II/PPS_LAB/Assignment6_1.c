/*

WAP to sort a list of numbers.

*/

#include <stdio.h>

int main()
{
    int n,i,j,s;
    printf("\nEnter the no. of terms: ");
    scanf(" %d",&n);

    int N[n];
    printf("\nEnter the elements of the Arrray:\n");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&N[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(N[i]>N[j])
            {
                s=N[i];
                N[i]=N[j];
                N[j]=s;
            }
        }
    }

    printf("\nThe elements of the Arrray in Ascending Order:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d \n",N[i]);
    }

    printf("\n\n");
    return (0);
}
