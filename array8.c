#include "stdio.h"
int main()
{
    
    int arr[5];
    int max=0;
    printf("enter elemnt");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Display array");
    for(int i=0;i<5;i++){
        printf("%d,",arr[i]);
    }
    /*for(int i=0;i<5;i++){
       if(arr[i]>arr[i+1])
    {
    max=arr[i];
    }

    }
    
    printf("\n%d,",max);
    */
   
    }