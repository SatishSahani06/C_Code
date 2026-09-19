#include "stdio.h"
int i;
int count=0;
void main()
{
    char str[50];
    printf("Enter string:");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length is %d:", count);
}
