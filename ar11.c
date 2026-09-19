#include "stdio.h"
int main()
{
    int arr[5];
   for(int i=0;i<5;i++)
   {
     //printf("Enter the Element Number:%d",i);
     printf("Enter the Element Number:%d",i+1);
     scanf("%d",&arr[i]);
   }
  for(int i=0;i<5;i++)
    if(arr[i]<40)
   {
    printf("\n%d",arr[i]);
   }
}