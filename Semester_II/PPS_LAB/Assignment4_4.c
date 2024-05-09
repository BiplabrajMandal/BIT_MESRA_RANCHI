/*

WAP to find the mean of all elements in the array named A.
Create another array B that stores the distance of all elements in A from the mean value.
Example

	10		20		30		40		50
	a[0]	a[1]	a[2]	a[3]	a[4]

	Average=30

	-20		-10		0		10		20
	b[0]	b[1]	b[2]	b[3]	b[4]

Hint
	Declare an array of 10 integer
	Ask the user to store only five values from the keyboard
	Find the average
	Find the distance from the mean
	For distance Subtract the mean from each value, ignore minus signs

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int N,i;
    double Sum,Mean;
    printf("\nEnter no. of element for the Array:");
    scanf("%d",&N);
    int A[N];
    double B[N];
    printf("\nEnter the integer value of the Array:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    Sum=0.0;
    for (i=0;i<N;i++)
    {
        Sum=Sum+A[i];
    }
    Mean=Sum/N;
    for(i=0;i<N;i++)
    {
        B[i]=fabs((Mean-A[i]));
    }
    printf("\n\nOld Array:\n");
    for(i=0;i<N;i++)
    {
        printf("\t %d",A[i]);
    }
    printf("\n\nMean:\t %lf",Mean);
    printf("\n\nNew Array(Distance of elements from Mean):\n");
    for(i=0;i<N;i++)
    {
        printf("\t %.2lf",B[i]);
    }
    printf("\n\n");
    return(0);
}
