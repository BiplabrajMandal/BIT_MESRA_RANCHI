/*
Print the following using for loop
	10 20 30 40 50 60 70 80 90 100 
	Syntax of for loop int i=1; 
	for(i=1; i<=5; i++) 
	{ printf(“%d”,i); } 
	Output : 1 2 3 4 5
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int a,i,N;
    a=10;
    for(i=1;i<=10;i++)
    {
        N=a*i;
        printf("%d \t",N);
    }
    printf("\n\n");
    return 0;
}
