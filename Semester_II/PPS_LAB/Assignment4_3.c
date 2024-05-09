/*

WAP to find the largest and smallest number in an array.
Example

	20		30		5		60		10
	a[0]	a[1]	a[2]	a[3]	a[4]

Largest value = 60
Smallest value = 5

Hint:
	Declare an array of 10 integer
	Ask the user to store only five values from the keyboard
	Declare min and max variable
	Store the starting value of an array to min and max
	Start comparing each element from min and max
	Change the following
	If any element has a value less than the minimum value
	min=a[i];
	Or If any element has a value more than the maximum value
	max=a[i];


*/


#include <stdio.h>
int main()
{
    int N,max,min,i;
    printf("\nEnter no. of elements for the Array:");
    scanf("%d",&N);
    int Arr[N];
    printf("\nEnter the integer value(s) in Array:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&Arr[i]);

    }
    max=Arr[0];
    min=Arr[0];
    for(i=0;i<N;i++)
    {
        if(max<Arr[i])
        {
            max=Arr[i];
        }
        else if(min>Arr[i])
        {
            min=Arr[i];
        }
    }
    printf("\nLargest No. in the Array: %d",max);
    printf("\nSmallest No. in the Array: %d",min);
    printf("\n\n");
    return (0);
}
