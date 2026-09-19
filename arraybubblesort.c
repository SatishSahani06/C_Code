#include "stdio.h"
int main()
{
   int arr[100],i,j,size,temp; 
   printf("Enter size of array");
   scanf("%d",&size);

   printf("Enter Element");
   for(i=0; i<size; i++)
   {
    scanf("%d",&arr[i]);
   }

   printf("Display Array is");
   for(i=0; i<size; i++)
   {
    printf(" %d ",arr[i]);
   }
   
   for(i=size; i>0; i--)
   {
    for(j=0; j<i-1; j++)
    {
       if(arr[j]>arr[j+1])
       {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
    }
   }
   printf("Sorted array is");
   
     for(i=0;i<size;i++)
     {
        printf(" %d ",arr[i]);
     }
   
}