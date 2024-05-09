/*
Write a program to find out whether number is even or odd.

	For example, 21 is odd, and 30 is an even number.
	Hint use % operator
	Num%2 ==0 (Even Number)
	Num%2 !=0 (Odd Number)
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int N;
    printf("Enter a number(Integer):");
    scanf("%d",&N);
    printf("\n");
    if(N%2==0)
    {
        printf("%d is a Even Number.",N);
    }
    if(N%2!=0)
    {
        printf("%d is a Odd Number.",N);
    }
    printf("\n\n");
    return 0;
}

