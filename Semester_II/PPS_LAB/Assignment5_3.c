/*

You have given the following numbers    8, 41, 7, 80, 11, 50, 10, 20, 30, 20
Write a program in C Language to solve the following
    a) Store the above numbers into an array A using scanf() and display the results.
    b) Find prime numbers and even numbers from the above array A.
    c) Find out the mean value from the above array A
    d) How many values are more than the mean value from the above array?
    e) Search number 50 from the above array A.

*/


#include <stdio.h>

int main()
{
    int i,j,A[10],c,sum,n_Mean;
    float Mean;
    printf("\nEnter the number for the Array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);  /* 8,41,7,80,11,50,10,20,30,20*/
    }

    printf("\nThe Array:\t");
    for(i=0;i<10;i++)
    {
        printf("  %d",A[i]);
    }


    printf("\n\n");
    printf("\nPrime Number:\t");
    for(i=0;i<10;i++)
    {
        c=0;
        for(j=2;j<A[i];j++)
        {
            if(A[i]%j==0)
            {
                c=1;
            }
        }
        if(c==0)
        {
            printf("  %d",A[i]);
        }
    }
    
    printf("\n\n");
    printf("\nEven Number: \t");
    for(i=0;i<10;i++)
    {
        if(A[i]%2==0)
        {
            printf("  %d",A[i]);
        }
    }

    sum=0;
    printf("\n\n");
    for(i=0;i<10;i++)
    {
        sum=sum+A[i];
    }
    Mean=sum/10.0;
    printf("\nMean:\t .2%f",Mean);

    printf("\n\n");
    n_Mean=0;
    printf("\nNo. more than Mean .2%f :\t",Mean);
    for(i=0;i<10;i++)
    {
        if(A[i]>Mean)
        {
            printf("  %d",A[i]);
            n_Mean=n_Mean+1;
        }
    }
    printf("\nTotal %d number(s) are more than mean %f",n_Mean,Mean);


    printf("\n\n");
    for(i=0;i<10;i++)
    {
        if(A[i]==50)
        {
            printf("\nNumber '50' is present in the array at %d position.",i);
        }
    }

    printf("\n\n");
    return (0);

}

