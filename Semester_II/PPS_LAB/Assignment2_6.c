/*
Proof the following using the C program
a) sin^2 (45 degree) + cos^2 (45 degree) =1
b) sec^2 (45 degree) - tan^2 (45 degree) =1
c) cosec^2 (45 degree) - cot^2 (45 degree) =1
Hint
    #include<math.h>
    Π radian = 180 degree
    Π /180 = 1 degree
    45*( Π /180) = 45 degree
    Where Π = 3.14
    sec(45degree) = 1/cos(45 degree)
    cot(45degree) = 1/tan(45degree)
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("\n");
    float a,b,c,A;
    float pi,si,co,ta,cs,se,ct;
    pi=3.14;
    A=45*(pi/180);
    si=sin(A);
    co=cos(A);
    ta=tan(A);
    cs=1/si;
    se=1/co;
    ct=1/ta;
    a=pow(si,2)+pow(co,2);
    b=pow((se),2)-pow((ta),2);
    c=pow((cs),2)-pow((ct),2);
    printf("The Result of First Trignometric Equation:\t %f \n",a);
    printf("The Result of Second Trignometric Equation:\t %f \n",b);
    printf("The Result of Third Trignometric Equation:\t %f \n",c);
    printf("\n\n");
    return 0;
}