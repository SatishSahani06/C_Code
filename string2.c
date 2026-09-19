#include "stdio.h"
#include "stdlib.h"
void main()
{
    int n;
    printf("Enter size of string: ");
    scanf("%d",&n);
    fflush(stdin);
    char a[n];
    printf("Enter string :");
    scanf("%[^\n]s",&a);
    printf(" Name is:%s ",a);
    
}