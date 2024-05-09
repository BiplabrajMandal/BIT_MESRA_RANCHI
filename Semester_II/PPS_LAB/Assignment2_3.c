/*
Modify it to generate a list of leap years between two-year limits given by the user.
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int Y1,Y2,i,j;
    j=0;
    printf("Enter a year Y1(e.g., 2022,1945,etc):");
    scanf("%d",&Y1);
    printf("Enter a year Y2(e.g., 2022,1945,etc):");
    scanf("%d",&Y2);
    printf("\n");
    if(Y1<Y2)
    {
        printf("Leap Year between %d and %d:\n",Y1,Y2);
        for(i=Y1;i<=Y2;i++)
        {
            if (i%4==0 && i%100!=0)
            {
                printf("\t %d",i);
                j=j+1;
            }
            else if(i%400==0)
            {
                printf("\t %d",i);
                j=j+1;
            }
        }
        if(j==0)
        {
            printf("\tNo Leap Year.");
        }
    }
    else if(Y1>Y2)
    {
        printf("Leap Year between %d and %d:\n",Y2,Y1);
        for(i=Y2;i<=Y1;i++)
        {
            if (i%4==0 && i%100!=0)
            {
                printf("\t %d",i);
                j=j+1;
            }
            else if(i%400==0)
            {
                printf("\t %d",i);
                j=j+1;
            }
        }    
        if(j==0)
        {
            printf("\tNo Leap Year.");
        }
    }
    else
    {
        i=Y1;
        printf("Leap Year between %d and %d:\n",Y2,Y1);
        if (i%4==0 && i%100!=0)
        {
            printf("\t %d",i);
        }
        else if(i%400==0)
        {
            printf("\t %d",i);
        }
        else
        {
            printf("\tNo Leap Year.");
        }
        
    }
    printf("\n\n");
    return 0;
}
