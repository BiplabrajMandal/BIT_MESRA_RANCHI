/*

Write a program to add two 10-digit numbers using an array.
Hint
    Declare three arrays name a, b, and c of 11 integers
    Initially assign zero values to all elements of the array.
    Enter 9-digit numbers in the first array
    Similarly enter 9-digit numbers in the second array.
    Find the sum digit by digit

First Number
    0   8   5   9   8   7   9   6   5   7
    0   1   2   3   4   5   6   7   8   9

Second Number
    0   4   5   5   6   3   5   3   2   5
    0   1   2   3   4   5   6   7   8   9

Sum of Two Number
    1+0     8+4     5+5     9+5     8+6     7+3     9+5     6+3     5+2     7+5=12
    0       1       2       3       4       5       6       7       8       9

Initially carry =0;
Num = a[9] + b[9] +carry;
If num = =12
C[9] = num%2
Carry = 1
Else
C[9] = num;
Carry=0;
End;

*/

#include <stdio.h>

int main()
{
    int i,a[11],b[11],c[11],carry;
    long long N_1,N_2;
    for (i=0;i<11;i++)
    {
        a[i]=0;
        b[i]=0;
        c[i]=0;
    }

    printf("\nEnter a 10-digit Number:\n");
    scanf("%lld",&N_1);

    printf("\nEnter another 10-digit Number:\n");
    scanf("%lld",&N_2);

    for(i=10;i>=0;i--)
    {
        a[i]=N_1%10;
        b[i]=N_2%10;
        N_1=N_1/10;
        N_2=N_2/10;
    }

    printf("\n 1st Number:  ");
    for (i=0;i<11;i++)
    {
        printf("  %d",a[i]);
    }
    printf("\n 2nd Number:  ");
    for (i=0;i<11;i++)
    {
        printf("  %d",b[i]);
    }

    carry=0;
    for(i=10;i>=0;i--)
    {
        c[i]=(a[i]+b[i]+carry)%10;
        carry=(a[i]+b[i]+carry)/10;
    }

    printf("\n\n Sum of 1st & 2nd Number:");
    for (i=0;i<11;i++)
    {
        printf("  %d",c[i]);
    }

    printf("\n\n");
    return (0);
}




/*
#include <stdio.h>

int main()
{
    int N1,N2;
    printf("Enter First Number (Maximum Ten-Digit Number) :");
    scanf("%d",&N1);
    printf("Enter Second Number (Maximum Ten-Digit Number) :");
    scanf("%d",&N2);
    int i,A[11],B[11],S[11];
    for(i=0;i<=10;i++)
    {
        A[i]=0;
        B[i]=0;
        S[i]=0;
    } 
    for(i=10;i>=0;i--)
    {
        A[i]=N1%10;
        B[i]=N2%10;
        N1=N1/10;
        N2=N2/10;
    }
    printf("\n1st Number:\t");
    for(i=0;i<=10;i++)
    {
        printf("%d  ",A[i]);
    }
    
    printf("\n2nd Number:\t");
    for(i=0;i<=10;i++)
    {
        printf("%d  ",B[i]);
    }
    int sum;
    for(i=10;i>=0;i--)
    {
        sum=A[i]+B[i];
        S[i]=S[i]+sum%10;
        S[i]=S[i]%10;
        S[i-1]=S[i]/10+sum/10;
    }
    
    printf("\n Sum :\t");
    for(i=0;i<=10;i++)
    {
        printf("%d  ",S[i]);
    }
    printf("\n\n");
    return (0);
}
*/