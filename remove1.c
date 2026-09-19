//wap to remove  element from array.
#include "stdio.h"
int main()
{
    //int index,ele;
    int arr[5]={2,3,4,5,6};
    int n=10;
    int index=3;
    printf("original array");
    
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    //code for delete
     for(int i=0;i<n;i++)
     {
    arr[i]=arr[i+1];
     }

    n--;
    printf("after delete element array:");

    for(int i=0;i<n;i++)//i=0,1,2
    {
    printf("%d ",arr[i]);
    }

    
}