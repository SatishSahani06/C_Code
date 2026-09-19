#include "stdio.h"
int main()
{
    int i;
    int arr[5]={2,4,5,6,7};
    int index=1;
    int element=8;
    for( i=0;i<5;i++)
    {
        if(i==index)
         {
            arr[i]=element;
         }

    }
    
    printf("%d",arr[i]);


}