#include "stdio.h"
#include "string.h"
#include "ctype.h"
int main()
{
    char firstname[50],middlename[50],lastname[50];
    printf("Enter 1ts name:");
    gets(firstname);

    printf("Enter middle name:");
    gets(middlename);

    printf("Enter last name:");
    gets(lastname);

    printf("%c.%c. %s",toupper(firstname[0]),toupper(middlename[0]),lastname);
}