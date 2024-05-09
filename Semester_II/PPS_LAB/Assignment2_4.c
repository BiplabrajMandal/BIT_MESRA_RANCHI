/*
WAP to take two numbers 'a' and 'b' as user input, find:
i. a mod b
ii. Square root of a and b
iii. Power for example 10^2=100
iv. log2(32), log10(100)
v. abs value of -22
vi. exp of 1
Hint
#include<math.h>
#include<stdlib.h>
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("\n");
    int a,b,mod,po_a,po_b,ab_a,ab_b;
    float sq_a,sq_b,lo_a,lo_b,lo_a1,lo_b1,ex_a,ex_b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    mod=a%b;
    sq_a=sqrt(a);
    sq_b=sqrt(b);
    po_a=pow(a,2);
    po_b=pow(b,2);
    lo_a=log2(a);
    lo_b=log2(b);
    lo_a1=log10(a);
    lo_b1=log10(b);
    ab_a=abs(a);
    ab_b=abs(b);
    ex_a=exp(a);
    ex_b=exp(b);
    printf("\n");
    printf("%d mod %d:\t %d \n",a,b,mod);
    printf("Square root of %d:\t %f \n",a,sq_a);
    printf("Square root of %d:\t %f \n",b,sq_b);
    printf("Power of %d with base 2:\t %d \n",a,po_a);
    printf("Power of %d with base 2:\t %d \n",b,po_b);
    printf("log of %d with base 2:\t %f \n",a,lo_a);
    printf("log of %d with base 2:\t %f \n",b,lo_b);
    printf("log of %d with base 10:\t %f \n",a,lo_a1);
    printf("log of %d with base 10:\t %f \n",b,lo_b1);
    printf("Absolute value of %d:\t %d \n",a,ab_a);
    printf("Absolute value of %d:\t %d \n",b,ab_b);
    printf("Exponent of %d:\t %f \n",a,ex_a);
    printf("Exponent of %d:\t %f \n",b,ex_b);
    printf("\n\n");
    return 0;
}
