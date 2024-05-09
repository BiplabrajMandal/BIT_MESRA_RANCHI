/*
Ask users to enter the numbers of digits in the first array and then in the second array.
Find the sum of digits and store the result in the third array.
For example
    How many digits do you want to give for the first numbers: 5
    Enter Number: 8 9 4 5 7
    How many digits do you want to give for the first numbers: 4
    Enter Number: 7 5 4 8

Find Sum 
    Carry    1 1 1 1 0
            
             8 9 4 5 7
            +  7 5 4 8
          --------------
             9 7 0 0 5
          --------------

*/


#include <stdio.h>
#include <math.h>

int main()
{
    int i,Nd1,Nd2,carry;
    int Max,Min;

    printf("\nEnter the no of digits of 1st Number:");
    scanf("%d",&Nd1);
    printf("\nEnter the no of digits of 2nd Number:");
    scanf("%d",&Nd2);

    Max=fmax(Nd1,Nd2);
    Min=fmin(Nd1,Nd2);

    int A[Max],B[Max],S[Max];

    for(i=0;i<Max;i++)
    {
        A[i]=0;
        B[i]=0;
        S[i]=0;
    }

    printf("\n Enter the digit of 1st Number:\n");
    if(Nd1>=Nd2)
    {
        for(i=0;i<Nd1;i++)
        {
            scanf(" %d",&A[i]);
        }
    }
    else
    {
        for(i=0;i<Nd1;i++)
        {
            scanf(" %d",&A[Max-Min+i]);
        }
    }

    printf("\n Enter the digit of 2nd Number:\n");
    if(Nd2>=Nd1)
    {
        for(i=0;i<Nd2;i++)
        {
            scanf(" %d",&B[i]);
        }
    }
    else
    {
        for(i=0;i<Nd2;i++)
        {
            scanf(" %d",&B[Max-Min+i]);
        }
    }

    carry=0;
    for(i=Max-1;i>=0;i--)
    {
        S[i]=(A[i]+B[i]+carry)%10;
        carry=(A[i]+B[i]+carry)/10;
    }

    printf("\n 1st Number:  ");
    for (i=0;i<Max;i++)
    {
        printf("  %d",A[i]);
    }

    printf("\n 2nd Number:  ");
    for (i=0;i<Max;i++)
    {
        printf("  %d",B[i]);
    }

    printf("\n\n Sum of 1st & 2nd Number:");
    for (i=0;i<Max;i++)
    {
        printf("  %d",S[i]);
    }

    printf("\n\n");
    return (0);
}
