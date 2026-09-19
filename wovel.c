#include "stdio.h"
int main()
{
    int i;
    char str[50];
    printf("Enter string");
    gets(str);
    printf("vowel is your string\n");
    for(i=0;str[i]!='\0';i++)
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    printf("%c",str[i]);

}