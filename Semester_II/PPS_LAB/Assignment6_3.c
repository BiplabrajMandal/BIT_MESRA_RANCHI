/*

WAP in C to compute Sinx = x - (x^3/3!) + (x^5/5!) - (x^7/7!) + ........
Compare result sinx value with sin(x);
For Example,
    Sin(90) =1
    till 5th term
    Sin90 = 90*( Π /180) - (90*( Π /180))3 / fact(3) + (90*( Π /180))3 / fact(5)

*/


#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if(n==1 || n==0)
    {
        return (1);
    }
    else
    {
        return (n * factorial(n-1));
    }
}

int main()
{
    int Ad;
    int i,N;

    double Ar,S1,S2=0;

    printf("\nEnter the angle in Degree:");
    scanf(" %d",&Ad);

    printf("\nEnter the no. of terms: ");
    scanf(" %d",&N);

    Ar=Ad*(3.14/180.0);
    S1=sin(Ar);

    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            S2=S2-((pow(Ar,(2*i-1)))/(factorial(2*i-1)));
        }
        else
        {
            S2=S2+((pow(Ar,(2*i-1)))/(factorial(2*i-1)));
        }
    }

    printf("\nThe value of sin(%d)[directly] : %lf",Ad,S1);
    printf("\nThe value of sin(%d)[using other way] : %lf",Ad,S2);

    printf("\n\n");
    return (0);
}
