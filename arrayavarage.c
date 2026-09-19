#include "stdio.h"
int main()
{
    int arr[100],i,size,sum=0,avarage;
    printf("Enter size of Array");
    scanf("%d",&size);

    printf("Enter element of Array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display Is Array");
    for(i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\nSum is");
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf(" %d",sum);
    avarage=sum/size;
    printf("Avarage is %d",avarage);
}