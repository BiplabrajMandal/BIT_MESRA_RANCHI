/*
Write an interactive program that will read in a +ve integer value and
determine the following If the integer is a Fibonacci number
N is a Fibonacci number if and only if ( 5*N2 + 4 ) or ( 5*N2 – 4 ) is a perfect square!
For Example: 3 is a Fibonacci number since (5*3*3 + 4) is 49 which is 7*7.
             5 is a Fibonacci number since (5*5*5 – 4) is 121 which is 11*11.

Hint
	 #include<math.h>
	 The sqrt() function takes a double number as input and outputs a value that is also a double number.
	 Change the cast to int sq1= (5*num*num)+4; sq2= (int) sqrt(sq1);
	 N 	Sq1=5*N2+4 	Sq2=5*N2–4 	Sq3=(int)sqrt(sq1) 	Sq4=(int)sqrt(sq1)
	   5 	5*5*5+4=129 	5*5*5–4=121 	Sq3=(int)sqrt(129)=11 	Sq4=(int) sqrt(121)=11

Now check the following
	If sq1== sq3*sq3 or sq2 = sq4*sq4
	Then 5 is a Fibonacci number
	Otherwise, 5 is not a Fibonacci number
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int N,Sq1,Sq2,Sq_rt1,Sq_rt2;
    printf("\nEnter the value of N(Natural No.):");
    scanf("%d",&N);
    Sq1=5*N*N+4;
    Sq2=5*N*N-4;
    Sq_rt1=(int)sqrt(Sq1);
    Sq_rt2=(int)sqrt(Sq2);
    printf("\n");
    if((Sq1==Sq_rt1*Sq_rt1)||(Sq2==Sq_rt2*Sq_rt2))
    {
        printf("%d is a Fibonacci Number.",N);
    }
    else
    {
        printf("%d is not a Fibonacci Number.",N);
    }
    printf("\n\n");
    return (0);
}
