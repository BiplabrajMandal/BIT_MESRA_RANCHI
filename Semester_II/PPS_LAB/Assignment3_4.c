/*
Write the following using the switch case
	 If you enter ‘A’ or ‘a’ then display you are a computer science branch student
	 If you enter ‘B’ or ‘b’ then display you are an electronics branch student
	 If you enter ‘C’ or ‘c’ then display you are an electrical branch student
	 If you enter ‘D’ or ‘d’ then display you are a mechanical branch student
	 If you enter other than ‘A’or ‘a’, ‘B’ or ‘b, ‘C’ or ‘c’ or ‘D’ or ‘d’ then display the wrong input
*/

#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter the value ch(Alphabet):");
    scanf("%c",&ch);
    printf("\n");
    switch (ch)
    {
    case 'A':
    case 'a':
        printf("You are a Computer Science Branch Student.");
        break;
    case 'B':
    case 'b':
        printf("You are an Electronics Branch Student.");
        break;
    case 'C':
    case 'c':
        printf("You are an Electrical Branch Student.");
        break;
    case 'D':
    case 'd':
        printf("You are a Mechanical Branch Student.");
        break;
    default:
        printf("Worng choice.");
        break;
    }
    printf("\n\n");
    return (0);
}
