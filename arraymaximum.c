/*#include "stdio.h"
int main()
{
    int size ,i,max;
   int a[i];
    printf("Enter Size of array");
    scanf("%d",&size);
    printf("Enter element");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for ( i = 0; i < size; i++)
    {
      if(a[i]>max);

    }
    printf("max is %d",a[i]);
}
    */
#include <stdio.h>

int main()
{
  int arr[100],size,i,max;
  printf("Enter Size of array");
  scanf("%d",&size);

  printf("Enter element");
  for(i=0;i<size;i++)
  {
  scanf("%d",&arr[i]);
  }
    max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            printf("max is  %d,index is %d", max,i);
        }         
    }
    return 0;
}