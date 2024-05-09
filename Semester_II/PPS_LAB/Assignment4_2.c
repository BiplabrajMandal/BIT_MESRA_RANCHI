/*

Print the following Pattern
			11
	     11 10 11
	   11 10 9 10 11
	 11 10 9 8 9 10 11



*/


#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,N,a;
    N=1;
    for(i=1;i<=4;i++)
    {
        a=11;
        for(j=4;j>=i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=N;k++)
        {
            printf(" %d",a);
            if(k<=(ceil(N/2)))
            {
                a=a-1;
            }
            else
            {
                a=a+1;
            }
        }
        N=N+2;
        printf("\n");
    }
    printf("\n\n");
    return (0);
}
