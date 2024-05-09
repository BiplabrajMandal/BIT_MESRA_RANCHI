/*

Represent 'a' as the closest power of 2.
For example, if a=13 then the closest power of 2 maybe 24 or 23 but the correct answer is 24 since the difference between 16 and 13 =3 and 13 and 8 =5
Hint
    Convert the number into binary and find the counter
    For example
    Num=10
            Num=10          Rem              Count
        2   10/2=5          10%2=0           Count=1
        2   5/2=2           5%2=1            Count=2
        2   2/2=1           2%2=0            Count=3
            1/2=0 Stop

Now Count=3
So Closest number may be 2^count+1 or 2^count
So the Closest number maybe 2^4 or 2^3
but the correct answer is 24 since the difference between 16 - 13 =3 and 13 - 8 =5
You may use abs()defined in <stdlib.h> to find the difference.

*/



#include <stdio.h>
#include <math.h>

int main()
{
    int a,N,count;
    int b,c,d,e;
    printf("\nEnter the Number to find the closest power of 2:");
    scanf("%d",&a);
    N=a;
    count=0;
    while(N!=0)
    {
        N=N/2;
        count=count+1;
        if(N/2==0)       
        {
            break;
        }
    }
    
    b=pow(2,count);
    c=pow(2,count+1);
    d=a-b;
    e=c-a;
    
    printf("\n");
    if(d<e)
    {
        printf("\nNumber closest to '%d' is '%d' which is '2' to the power of '%d' .",a,b,count);
    }
    else if(d>e)
    {
        printf("\nNumber closest to '%d' is '%d' which is '2' to the power of '%d' .",a,c,(count+1));
    }
    else
    {
        printf("\nNumber '%d' is equi-distant from both '%d' and '%d' .",a,b,c);
        printf("\nWhere '%d' is '2' to the power of '%d' .",b,count);
        printf("\nWhere '%d' is '2' to the power of '%d' .",c,(count+1));
    }
    printf("\n\n");
    return (0);
}



/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,i,count;
    count=0;
    printf("\nEnter the Number to find the closet to power of 2 :");
    scanf("%d",&a);
    printf("\n");
    for(i=a;i>1;i=i/2)
    {
        count++;
    }
    
    b=pow(2,count+1);
    c=pow(2,count);
    d=abs(a-b);
    e=abs(a-c);
    if(d<e)
    {
        printf("\n %d is Closet Number to %d \n",b,a);
    }
    else
    {
        printf("\n %d is Closet Number to %d \n",c,a);
    }
}
*/