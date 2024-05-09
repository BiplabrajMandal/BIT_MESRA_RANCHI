/*
WAP to find whether a given year is a leap year or not.
START
Step 1 → Take integer variable year
Step 2 → Assign value to the variable
Step 3 → Check if the year is divisible by 4 but not 100, DISPLAY "leap year"
Step 4 → Check if the year is divisible by 400, DISPLAY "leap year"
Step 5 → Otherwise, DISPLAY "not leap year"
STOP
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int Y;
    printf("Enter a year(e.g., 2022,1945,etc):");
    scanf("%d",&Y);
    printf("\n");
    if(Y%4==0 && Y%100!=0)
    {
        printf("%d is a Leap Year.",Y);
    }
    else if(Y%400==0)
    {
        printf("%d is a Leap Year.",Y);
    }
    else
    {
        printf("%d is not a Leap Year.",Y);
    }
    printf("\n\n");
    return 0;
}
