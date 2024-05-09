/*
Store the three different type values using scanf() function and print

	For example 10, 40.50, ‘A’
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int a;
    float b;
    char c;
    printf("Enter the value of c(Alphabet):");
    scanf("%c",&c);
    printf("Enter the value of a(Integer):");
    scanf("%d",&a);
    printf("Enter the value of b(Decimal Number):");
    scanf("%f",&b);
    printf("\n");
    printf("%d,%f,'%c'",a,b,c);
    printf("\n\n");
    return 0;
}
