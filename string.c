#include "stdio.h"
#include "stdlib.h"
void main()
{
    int n;
    printf("Enter the size of string:");
    scanf("%d",&n);
    fflush(stdin);
    char name[n];
    printf("Enter name:");
    scanf("%[^\n]s",&name);
    printf("Name is :%s",name);



}