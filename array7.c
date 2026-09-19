#include "stdio.h"
int main()
{

    int arr[10];
    printf("enter elemnt");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
   // printf("Display array");
    for(int i=0;i<10;i++)
   // {
    if(arr[i]%3==0 && arr[i]%5==0)
    {
    printf("\n %d",arr[i]);
    }
   // }
   return 0;
}