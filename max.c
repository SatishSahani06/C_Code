#include "stdio.h"
int main()
{
    int arr[5];//={2,5,8,12,31};
    int max=-1;
    printf("enter element:\n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<=5;i++)
    {
    if(max<arr[i])
    {
    max=arr[i];
    }
    }
    printf("\n max is =  %d",max);
    
    return 0;
}


