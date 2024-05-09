/*

WAP to take make in three subjects as user input and find the percentage and grade of the student.
Using the following grading rule.
        Below 40 - Fail
        40 to 80 - Average
        Above 80 - Excellent

*/

#include <stdio.h>
int main()
{
    int S[3],i,P,sum;
    sum=0;
    printf("\nEnter the marks for the 3 Subjects:\n");
    for(i=0;i<3;i++)
    {
        printf("\nSubject %d:",i+1);
        scanf(" %d",&S[i]);
        sum=sum+S[i];
    }

    P=((sum*100)/300);

    printf("\nPercentage: %d",P);
    printf("\nGrade: ");
    if(P<40)
    {
        printf("'Fail'");
    }
    else if(P>=40 && P<=80)
    {
        printf("'Average'");
    }
    else
    {
        printf("'Excellent'");
    }

    printf("\n\n");
    return (0);
}
