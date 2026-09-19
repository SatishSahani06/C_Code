#include "stdio.h"
void main()
{
  
    int arr[5];
   // char arr[];
   // printf("enter size of array");
   // scanf("%d",&arr[]);
    printf("enter element:");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Display");
    for(int i=0;i<5;i++)
    {
    printf("%d",arr[i]);
    }
}
