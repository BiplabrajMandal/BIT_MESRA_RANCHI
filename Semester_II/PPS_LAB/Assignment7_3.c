/*

Using pointer, write a function that receives a character string and a character as argument. 
Delete all occurrences of this character in the string. 
The function should return corrected string with no holes.

*/

#include <stdio.h>
#include <string.h>

void Del_char(char *S,char ch)
{
    int i,j,L;
    L=strlen(S);
    for(i=0;i<L;i++)
    {
        for(j=0;j<L;j++)
        {
           if(*S==ch)
            {
                strcpy(S,S+1);
            } 
        }
        S=S+1;
    }
    
}

int main()
{
    char S[50];
    char ch;

    printf("\nEnter a string(Maximum 50 character):\n");
    gets(S);

    printf("\nEnter the which needs to deleted:");
    scanf("%c",&ch);

    printf("\nOld String: %s",S);
    Del_char(S,ch);
    printf("\nNew String: %s",S);

    printf("\n\n");
    return (0);
}
