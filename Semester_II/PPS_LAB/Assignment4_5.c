/*

WAP to reverse the elements in an array.
Hint
	Declare an array name a of 10 integers
	Ask the user to store only five values from the keyboard using for loop
	For example n=5
	Declare another array name b of 10 integers
	Now reverse the value
	Declare one variable, j=n-1 since array indexing starts from 0.
	Store reverse value into b array using another for loop
	where initially i=0 and condition i <n and update i by 1;
	begin
	b[j] = a[i];
	j=j-1;
	end
	print reverse of a number using for loops.

*/


#include <stdio.h>
int main()
{
    int N,i,j;
    printf("\nEnter no. of elements for the Array:");
    scanf("%d",&N);
    int A[N],B[N];
    j=N-1;
    printf("\nEnter the integer value for the Array:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        B[j]=A[i];
        j=j-1;
    }
    printf("\n\nOld Array:\n");
    for(i=0;i<N;i++)
    {
        printf("\t %d",A[i]);
    }
    printf("\n\nNew Array(After Reversing the elements):\n");
    for(i=0;i<N;i++)
    {
        printf("\t %d",B[i]);
    }
    printf("\n\n");
    return (0);
}

