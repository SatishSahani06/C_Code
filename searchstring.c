#include "stdio.h"
int main()
{
    int i,is;
    char str[50];
    printf("Enter string");
    gets(str);
    printf("find is your string\n");
    for(i=0;str[i]!='\0';i++)
    
    if(str[i]=='i'&&str[i+1]=='s'||str[i]=='i'&&str[i+1]=='s')
    {
        is++;
    }
    
    printf("%d",is);

}