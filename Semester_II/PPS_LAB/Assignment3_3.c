/*
If the length of two sides of a triangle and the angle between them are known,
the length of the third side can be calculated.
Given the length of two sides(b and c) of a triangle, and the angle between them α in degrees,
the third side a is calculated as follows a2 = b2 + c2 -2bc cos(α)

Input should be the following
Enter the first Side: 2.2
Enter the second side: 4.4
Enter the angle between them: 50

The Third Side is 3.429
Hint
	#include<math.h>
	Π radian = 180 degree
	Π /180 = 1 degree
	45*( Π /180) = 45 degree
	Where Π = 3.14
	 Use sqrt()
*/

#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,Ar,S;
    int Ad;
    b=2.2;
    c=4.4;
    Ad=50;
    Ar=(Ad*3.14)/180;
    S=(b*b)+(c*c)-(2*b*c*cos(Ar));
    a=sqrt(S);
    printf("\nFirst side: %lf",b);
    printf("\nSecond side: %lf",c);
    printf("\nAngle between First and Second Side: %d",Ad);
    printf("\nThird Side: %lf",a);
    printf("\n\n");
    return (0);
}
