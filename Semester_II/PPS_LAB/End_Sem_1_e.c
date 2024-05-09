/*

Write a program to add 7-digit numbers using an array.

*/

#include <stdio.h>

int main()
{
    int i,A[8],B[8],S[8],carry;
    long N_1,N_2;
    for (i=0;i<8;i++)
    {
        A[i]=0;
        B[i]=0;
        S[i]=0;
    }

    printf("\nEnter a 7-digit Number:\n");
    scanf("%ld",&N_1);

    printf("\nEnter another 7-digit Number:\n");
    scanf("%ld",&N_2);

    for(i=7;i>=0;i--)
    {
        A[i]=N_1%10;
        B[i]=N_2%10;
        N_1=N_1/10;
        N_2=N_2/10;
    }

    printf("\n 1st Number:  ");
    for (i=0;i<8;i++)
    {
        printf("  %d",A[i]);
    }
    printf("\n 2nd Number:  ");
    for (i=0;i<8;i++)
    {
        printf("  %d",B[i]);
    }

    carry=0;
    for(i=7;i>=0;i--)
    {
        S[i]=(A[i]+B[i]+carry)%10;
        carry=(A[i]+B[i]+carry)/10;
    }

    printf("\n\n Sum of 1st & 2nd Number:");
    for (i=0;i<8;i++)
    {
        printf("  %d",S[i]);
    }

    printf("\n\n");
    return (0);
}