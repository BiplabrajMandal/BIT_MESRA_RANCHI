/*
Use the printf function to print the real numbers 12345.6789
	 Without specifying any field width
	 in a field width of 10 with 4 decimal places
	 in a field width of 10 with 2 decimal places
	 in a field width of 6 with 4 decimal places
	 in a field width of 2 with 4 decimal places
*/

#include <stdio.h>
int main()
{
    double N=12345.6789;
    printf("\nWithout specifying any field width: %lf",N);
    printf("\nIn a field width of 10 with 4 decimal places: %10.4lf",N);
    printf("\nIn a field width of 10 with 2 decimal places: %10.2lf",N);
    printf("\nIn a field width of 6 with 4 decimal places: %6.4lf",N);
    printf("\nIn a field width of 2 with 4 decimal places: %2.4lf",N);
    printf("\n\n");
    return (0);
}
