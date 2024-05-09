/*

Write a program to convert a decimal number to binary number.

*/


#include <stdio.h>
int main()
{
    int i,k,N,B[8];
    printf("\nEnter the Decimal Number:");
    scanf("%d",&N);
    k=7;
    for(i=0;i<8;i++)
    {
        B[i]=0;
    }


    while(N!=0)
    {
        B[k]=N%2;
        N=N/2;
        k=k-1;
    }


    printf("\n");
    for(i=0;i<8;i++)
    {
        printf(" %d",B[i]);
    }
    printf("\n\n");
    return (0);
}


/*

"Another Way to Write the Program"

#include <stdio.h>

int main()
{
    int n, i, a[8];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}



*/


