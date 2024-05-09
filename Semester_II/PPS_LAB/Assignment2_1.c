/*
To check whether a given alphabet is vowel or not.
The vowels in English are a, e, i,o and u.
*/

#include <stdio.h>
int main()
{
    printf("\n");
    char a;
    printf("Enter an Alphabet:");
    scanf("%c",&a);
    printf("\n");
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("%c is a Vowel.",a);
    }
    else
    {
        printf("%c is not a Vowel.",a);
    }
    printf("\n\n");
    return 0;
}
