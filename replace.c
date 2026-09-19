#include "stdio.h"
int main()
{

    char str[50],n1,n2;
    int i=0;
    printf("Enter String:");
    flushall();
    gets(str);

    printf("Enter n1:");
    flushall();
    scanf("%c",&n1);

    printf("Enter n2:");
    flushall();
    scanf("%c",&n2);


    while( str[i]!='\0')
    {
        if(str[i]==n1)
        {
            str[i]=n2;
        }
        i++;
    }
    printf("after replace. str=%s",str);


    
}