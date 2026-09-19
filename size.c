#include "stdio.h"
int main()
{
    char str[50];
    print("Enter any string:");
    get(str);
    for(int i=0;i=str[i]!='\0';i++)
    {
        printf("%s",str);
    }
}