//wap to program check is:
#include "stdio.h"
int main()
{

    int count;
    char str[50];
    printf("Entyer string");
    gets(str);
    printf("find your string");
    for(int i=0;str[i]!='\0';i++)
    {
    if(str[i]=='i'&& str[i+1]=='s'||str[i]=='I'&& str[i+1]=='S')
    {
        count++;
    }
    }
    printf("%c",count);

}