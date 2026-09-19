#include "stdio.h"
int main()
{
  
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<=9;i++)

    {
        if(i==5)
        break;
        printf("%d \n",arr[i]);
    }
   // printf("\n %d ",arr[4]);
}