/*

WAP to read a number n, and print it out digit-by-digit, as a series of words.
e.g.,   346 would be printed as "Three Six Four"

*/

#include <stdio.h>

int main()
{
    int i,N,a,D,N_d,n,D_i;
    
    printf("\nEnter a Number(Integeral Value):");
    scanf(" %d",&N);
    
    a=N;
    N_d=0;
    D=0;
    while(a!=0)
    {
        D=a%10;
        a=a/10;
        N_d=N_d+1;
    }

    int A[N_d];
    n=N_d;

    D=0;
    a=N;
    do
    {
        D=a%10;
        a=a/10;
        A[N_d]=D;
        N_d=N_d-1;
    } while (N_d!=0);

    for(i=0;i<n;i++)
    {
        D_i=A[i];
        if(D_i==0)
        {
            printf("Zero");
        }
        else if(D_i==1)
        {
            printf("One");
        }
        else if(D_i==2)
        {
            printf("Two");
        }
        else if(D_i==3)
        {
            printf("Three");
        }
        else if(D_i==4)
        {
            printf("Four");
        }
        else if(D_i==5)
        {
            printf("Five");
        }
        else if(D_i==6)
        {
            printf("Six");
        }
        else if(D_i==7)
        {
            printf("Seven");
        }
        else if(D_i==8)
        {
            printf("Eight");
        }
        else if(D_i==9)
        {
            printf("Nine");
        }
        printf(" ");
    }

    printf("\n\n");
    return (0);
}


/*
#include <stdio.h>

int main()
{
    int N,a,D,D_i;
    
    printf("\nEnter a Number(Integer):");
    scanf(" %d",&N);

    a=N;
    D=0;
    while(a!=0)
    {
        D=D*10+a%10;
        a=a/10;
    }

    printf("\n '%d' is written in digit by digit as:",N);
    while(D!=0)
    {
        D_i=D%10;
        D=D/10;
        if(D_i==0)
        {
            printf("Zero");
        }
        else if(D_i==1)
        {
            printf("One");
        }
        else if(D_i==2)
        {
            printf("Two");
        }
        else if(D_i==3)
        {
            printf("Three");
        }
        else if(D_i==4)
        {
            printf("Four");
        }
        else if(D_i==5)
        {
            printf("Five");
        }
        else if(D_i==6)
        {
            printf("Six");
        }
        else if(D_i==7)
        {
            printf("Seven");
        }
        else if(D_i==8)
        {
            printf("Eight");
        }
        else if(D_i==9)
        {
            printf("Nine");
        }
        printf(" ");
    }

    printf("\n\n");
    return (0);
}
*/
