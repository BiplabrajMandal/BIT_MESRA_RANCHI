/*

Print the following Pattern
	
	* * * * * * * * *
	  * * * * * * *
	    * * * * *
	      * * *
		    *

*/



#include <stdio.h>
int main()
{
    int i,j,N,k,M;
    N=1;
    M=9;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("  ");
        }
        for(k=0;k<M;k++)
        {
            printf(" *");
        }
        N=N+1;
        M=M-2;
        printf("\n");
    }
    return (0);
}
