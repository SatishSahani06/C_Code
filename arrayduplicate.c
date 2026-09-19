#include "stdio.h"
int main()
{
    int arr[100],i,j,k,size;
    printf("Enter size of array");
    scanf("%d",&size);

    printf("Enter elemnt");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display Array is");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("remove duplicate value");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}