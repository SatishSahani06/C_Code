#include "stdio.h"
void main()
{
  int sum=0;
    int arr[10];
    printf("enter element:");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
    
    printf("Display Array is");
    for(int i=0;i<10;i++)
    {
    printf("%d ",arr[i]);
    }
    
    printf("\nDisplay Sum is");
   for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    {
        printf(" %d",sum);
    }
}
