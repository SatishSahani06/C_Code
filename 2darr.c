#include "stdio.h"
int main()
{
   int r,c,row,col;
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
  


}