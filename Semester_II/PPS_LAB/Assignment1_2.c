/*
Find the sum, multiplication, division, and remainder of two numbers.

	Example 20+10 =30 , 20/10 = 2, 20*10 =200, 20%10 =0
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int a,b;
    int sum,multi,divi,remain;
    printf("Enter the value of a(Integer):");
    scanf("%d",&a);
    printf("Enter the value of b(Integer):");
    scanf("%d",&b);
    sum=a+b;
    multi=a*b;
    divi=a/b;
    remain=a%b;
    printf("\n");
    printf("SUM:\t\t %d + %d = %d \n",a,b,sum);
    printf("MULTIPLICATION:\t %d + %d = %d \n",a,b,multi);
    printf("DIVISION:\t %d + %d = %d \n",a,b,divi);
    printf("REMAINDER:\t %d + %d = %d \n",a,b,remain);
    printf("\n");
    return 0;
}