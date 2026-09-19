#include "stdio.h"
int main()
{
    int arr[100],i,j,size,temp;
    printf("enter size of array");
    scanf("%d",&size);
    printf("Enter Element");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display Array is");
    for(i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==0 &&arr[j]!=0)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array is");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}