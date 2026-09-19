#include "stdio.h"
int main()
{
    int arr[100],n,i,item;
    printf("Enter Size of array");
    scanf("%d",&n);
    
    printf("Enter Element");
    for ( int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Display Array Is \n");
    for (int  i = 0; i < n; i++)
    {
     printf("%d ",arr[i]);
    }

    printf("\n Enter Element in Enter Begning Position");
    scanf("%d",&item);
    n++;
    for(i=n;i>1;i--)
    //for(i=n;i>=2;i--) 
    {
        arr[i-1]=arr[i-2];
    }
    arr[0]=item;
    printf("Result are element");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
     return 0;
}
