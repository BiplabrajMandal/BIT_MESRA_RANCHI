/*
WAP to take marks in 5 subjects as user input and find the percentage and grade of the student.
Use the following grading rule.
i. Below 25 – F
ii. 25 to 45 – E
iii. 45 to 50 – D
iv. 50 to 60 – C
v. 60 to 80 – B
vi. Above 80 – A
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int M1,M2,M3,M4,M5,T,P;
    printf("Enter the mark M1 of the student:");
    scanf("%d",&M1);
    printf("Enter the mark M2 of the student:");
    scanf("%d",&M2);
    printf("Enter the mark M3 of the student:");
    scanf("%d",&M3);
    printf("Enter the mark M4 of the student:");
    scanf("%d",&M4);
    printf("Enter the mark M5 of the student:");
    scanf("%d",&M5);
    T=M1+M2+M3+M4+M5;
    P=(T*100)/500;
    printf("\n");
    printf("Precentage of the student:\t %d \n",P);
    if(P>80)
    {
        printf("Grade of the student:\t 'A'");
    }
    else if(P<=80 && P>60)
    {
        printf("Grade of the student:\t 'B'");
    }
    else if(P<=60 && P>50)
    {
        printf("Grade of the student:\t 'C'");
    }
    else if(P<=50 && P>45)
    {
        printf("Grade of the student:\t 'D'");
    }
    else if(P<=45 && P>=25)
    {
        printf("Grade of the student:\t 'E'");
    }
    else
    {
        printf("Grade of the student:\t 'F'");
    }
    printf("\n\n");
    return 0;
}
