//Selection sort
#include "stdio.h"
int main()
{
    int arr[100],i,j,temp,minIndex,size;
    printf("Enetr size of array");
    scanf("%d",&size);

    printf("Enter Element");
    for(i=0;i<size ;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("display Array is:");
    for(i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
    
    for(i=0;i<size-1;i++)
    {
        minIndex=i;
        for(j=i+1;j<size;j++)
        {
          if(arr[j]<arr[minIndex])
          {
            minIndex=j;
          }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
     
    }
    printf("sorted array is:");
    for(i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}