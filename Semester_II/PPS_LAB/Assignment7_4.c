/*

Write a function for reading character strings using a pointer. 
Calculate the length of the string (without using strlen ()). 
Finally print the string in reverse order, using a pointer.

*/

#include <stdio.h>

void Display(char *S)
{
    puts(S);
    printf("\n");
}

void Input(char *S,int n)
{
    printf("\nEnter the string(Maximun %d character):",n);
    gets(S);
}

void Length(char *S,int *l)
{
    int i=0;
    while(*(S+i)!='\0')
    {
        i=i+1;
    }
    *l=i;
}

void Reverse(char *S,char *Sr,int *l)
{
    int i,j;
    i=0;
    j=*l;
    j=j-1;

    while(*(S+i)!='\0')
    {
        *(Sr+j)=*(S+i);
        i=i+1;
        j=j-1;
    }
    *(Sr+*l)='\0';
}

int main()
{
    int n=50;
    char S[n];
    int l;

    Input(S,n);
    Length(S,&l);

    char Sr[l];

    printf("\nThe String: ");
    Display(S);

    Reverse(S,Sr,&l);

    printf("\nThe Reverse String: ");
    Display(Sr);

    printf("\n\n");
    return (0);
}
