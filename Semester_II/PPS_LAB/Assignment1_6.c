/*
Find out the largest among three numbers using a conditional operator.

	Use ?: operator 
	Hint largest between two numbers 
	int a, b, largest; 
	a=80; b=100; 
	largest = a>b?a:b; 
	printf(“Largerst number is %d”, largest); 
	output Largest number is 100
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int a,b,c;
    printf("Enter the value of a(Integer):");
    scanf("%d",&a);
    printf("Enter the value of b(Integer):");
    scanf("%d",&b);
    printf("Enter the value of c(Integer):");
    scanf("%d",&c);
    printf("\n");
    if(b<a&&c<a)
    {
        printf("%d is a Largest Number.",a);
    }
    else if(a<b&&c<b)
    {
        printf("%d is a Largest Number.",b);
    }
    else
    {
        printf("%d is a Largest Number.",c);
    }
    printf("\n\n");
    return 0;
}
