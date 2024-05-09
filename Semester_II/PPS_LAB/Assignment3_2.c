/*
Write a program to check whether the number is a perfect square.
For example, 9 is a perfect square
Hint
	 Declare number and flag=0
	 Read a number
	 Use for loop starting value i=2, condition should be less than equal num/2 and update i=i+1
	 If in any case number == i*i than flag =1
	 If flag=1 then a number is a perfect square.

For example num=9, last condition num/2 = 9/2 =4.5 == 4
	num	i=2;		i=3			i=4 
	9	i*i=2*2 	i*i=3*3=9 flag=1
Hence number 9 is a perfect square since flag=1
*/

#include <stdio.h>
int main()
{
    int N,flag,i;
    printf("\nEnter the value of N(Natural No.):");
    scanf("%d",&N);
    flag=0;
    printf("\n");
    if(N==1)
    {
        flag=1;
    }
    for(i=2;i<N/2;i=i+1)
    {
        if(i*i==N)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%d is a Perfect Square.",N);
    }
    else
    {
        printf("%d is a not Perfect Square.",N);
    }
    printf("\n\n");
    return (0);
}
