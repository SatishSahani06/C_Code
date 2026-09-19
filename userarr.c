#include "stdio.h"
int main()
{
    int n;
    printf("size of  element:\n");
    scanf("%d",&n);
    printf("Enter element:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}