#include "stdio.h"


void main()
{
    char ch;
    printf("Enter string:");
    scanf("%c",&ch);
    for(int i=0; i<5; i++)
    {
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("wovel is :%c", ch);
        }
        else
        {
            printf("conconent is:");
        }
        printf("\n");
    
    }
}