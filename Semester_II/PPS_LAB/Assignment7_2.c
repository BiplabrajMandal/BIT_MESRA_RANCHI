/*

Write a function that accepts two arguments an array and its size n. 
It performs Bubble up sort on the array elements. 
Using the indirection operator ‘*’ implement this in a complete C program. 
Display the source and the sorted array.

*/

#include <stdio.h>
#include <stdlib.h>

void Display(int *Arr,int *n)
{
    int i;
    for(i=0;i<*n;i++)
    {
        printf("  %d",*(Arr+i));
    }
}

void Input_size(int *n)
{
    printf("\nEnter the size of Array:");
    scanf(" %d",&(*n));
}

void Input(int *Arr,int *n)
{
    int i;
    printf("\nEnter the elements of the Array:\n");
    for(i=0;i<*n;i++)
    {
        scanf(" %d",(Arr+i));
    }
}

void Bubble_Sort(int *Arr,int *n)
{
    int i,j,k;
    int *a,*b,c;
    for(k=0;k<*n;k++)
    {
        for(i=0,j=1;j<*n;i++,j++)
        {
            a=Arr+i;
            b=Arr+j;
            if((*a)>(*b))
            {
                c=*a;
                *a=*b;
                *b=c;
            }
        }
    }
    
}

int main()
{
    int n,*Arr;
    Input_size(&n);

    Arr=(int*)malloc(sizeof(int)*n);
    Input(Arr,&n);

    printf("\nOld Array:\n");
    Display(Arr,&n);
    printf("\n");

    Bubble_Sort(Arr,&n);

    

    printf("\nNew Array:\n");
    Display(Arr,&n);

    return (0);
}
