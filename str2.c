#include "stdio.h"
int main()
{
    char name[10];
    int value=25;
    printf("Enter any string: ");
    gets(name);
    printf("%s",name);
    printf("value is: %d",value);

}