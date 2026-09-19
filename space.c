#include "stdio.h"
int i;
int space=0;
void main()
{
    char str[50];
    printf("Enter string:");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
        if (str[i]==' ')
    {
        space++;
    }
    printf("space is :%d", space);
}