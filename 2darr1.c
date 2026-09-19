#include "stdio.h"
int main()
{
   int r,c,row,col,row1,col1, sum[r][c];
   printf("how many rows and column u want inmatrix?");
   scanf("%d%d",&r,&c);
   int arr[r][c];
   printf("Enter %d*%d matrix:",r,c);
   for(row=0;row<r;row++)
   {
    for(col=0;col<c;col++)
    {
       scanf("%d",&arr[row][col]);
    }
   }
   printf("Display %d*%d Element is: \n",r,c);
   for(row=0;row<r;row++)
   {
    for(col=0;col<c;col++)
    {
        printf("%d ",arr[row][col]);
    }
    printf("\n");
   }
  

   for(row1=0;row1<r;row1++)
    {
    for(col1=0;col1<c;col1++)
    {
       scanf("%d",&arr[row1][col1]);
    }
   }
   printf("Display %d*%d Element is: \n",r,c);
   for(row1=0;row1<r;row1++)
   {
    for(col1=0;col1<c;col1++)
    {
        printf("%d ",arr[row1][col1]);
    }
    printf("\n");
   }
   sum[r][c]=arr[row][col]+arr[row1][col1];
   {
    printf("%d ",sum[r][c]);
   }


}