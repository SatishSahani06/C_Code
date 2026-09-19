#include "stdio.h"
int main()
{
    int arr[100],i,size,max1,max2;
    printf("Enter size of array");
    scanf("%d",&size);

    printf("Enter element");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display Array");
    for(i=0; i<size;i++)
    {
      printf("%d ",arr[i]);  //34,23.5,33,1   
    }
    if(arr[0]>arr[1])
    {
      max1=arr[0];
      max2=arr[1];
    }
    else
    {
      max2=arr[0]; 
      max1=arr[1];     
    }  
    for(i=2; i<size; i++)
    {
        if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
          max2=arr[i];
        }
        
    } 
     printf("Second max is=%d",max2);
  //  printf("first max is %d,Second max is=%d",max1,max2); 
}