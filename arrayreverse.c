#include "stdio.h"
int main()
{
    int arr[100],i,size,j;
    printf("Enter size of array");
    scanf("%d",&size);

    printf("Enter Element");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display array");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nreverse array is   ");
   // for(i=size-1;i>=0;i--)
    //{
      //printf("%d ",arr[i]);
    //}
    for(i=0,j=size-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
     for(i=0;i<size;i++)
    {  
        printf("%d",arr[i]);
    }

}