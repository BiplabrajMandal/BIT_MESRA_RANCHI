/*

Read a line of mixed text, and then write it out with all lowercase and uppercase letters
replaced by a successor, all replaced by 0s and all other characters
(non=letters and non-digits replaced by '*'.)

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char S_in[20];
    char S_out[20];
    printf("\nEnter a line of mixed text:  ");
    gets(S_in);
    i=0;
    while(S_in[i]!='\0')
    {
        if(S_in[i]>=65 && S_in[i]<=90)
        {
            S_out[i]=65 + (S_in[i]+1-65)%26;
        }
        else if(S_in[i]>=97 && S_in[i]<=122)
        {
            S_out[i]=97+(S_in[i]+1-97)%26;
        }
        else if(S_in[i]>=48 && S_in[i]<=57)
        {
            S_out[i]='0';
        }
        else
        {
            S_out[i]='*';
        }
        i=i+1;
    }
    S_out[i]='\0';
    printf("\nInput: %s",S_in);
    printf("\nOutput: %s",S_out);
    printf("\n\n");
    return (0);
}
