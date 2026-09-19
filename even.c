#include "stdio.h"
int main()
{
   int arr[100],size;
   printf("Enter Size of Array");
   scanf("%d",&size);
    printf("enter element:\n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    if(arr[i]%2==0)   
    {  
    printf("\n Even value  is = %d,index %d",arr[i],i);
    }
    else
    {
      printf("\n Odd value  is = %d,index %d",arr[i],i);

      
    }
    return 0;
    /*
   int arr[5]={11,22,33,44,55};
   for(int i=0;i<5;i++)
   if(arr[i]%2==0)
   printf("even is %d,index is %d   \n",arr[i],i);
    */
}


