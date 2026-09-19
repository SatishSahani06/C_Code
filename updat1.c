#include "stdio.h"
int main()
{
    int n,index,ele;
    printf("how many terms yoy want in array;?");
    scanf("%d",&n);//5
    int arr[n];//5...0 to 4
    printf("Enter array element:%d",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);// 10 20 30 40 50
    }
    printf("Enter index for update:");
    scanf("%d",&index);//2
    printf("Enter element fo update:");
    scanf("%d",&ele);//60
    printf("\n");
    printf("old element is \n");
    for(int i=0;i<n;i++)
    {
printf("%d ",arr[i]);
    }
printf("\n");
printf("Display Update Element:\n");
for(int i=0;i<n;i++)//i=0,1,2
{
    if(index==i)//2==2
    {
        arr[i]=ele;//arr[2]=60

    }
    printf("%d     ",arr[i]);
}

    
}