
#include "stdio.h"
int main()
{
    int n,i,val;
    printf("Enter size of array");
    scanf("%d",&n);
      printf("Enter a value:\n");
    int arr[n];
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&arr[i]);
    }
    
    printf("\n");
    printf("Display Array");
      for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

    printf("\n");


    printf("Enter value You want in array:");
    scanf("%d",&val);
    arr[i]=val;
    printf("After insert array");
    for(i=0;i<n+1;i++)
    {
        printf("%d  ",arr[i]);
    }



}