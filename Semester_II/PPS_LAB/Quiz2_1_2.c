/*

WAP to find a reverse of a given number.

*/

#include <stdio.h> 
int main()
{
    int N,a,N_N;
    printf("\nEnter a Number:");
    scanf("%d",&N);

    a=N;
    N_N=0;
    while(a!=0)
    {
        N_N=N_N*10+a%10;
        a=a/10;
    }

    printf("Reverse of %d is %d",N,N_N);
    return (0);
}
