#include "stdio.h"
int main()
{
    int arr1[2][2]={{6,4},{6,1}};
    int arr2[2][2]={{3,2},{2,1}};
    printf("enter 1st matrix\n");
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<2;j++)
         {
         printf("%d ",arr1[i][j]);
         }
         printf("\n");
    }

     

    printf("enter 2nd matrix\n");
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<2;j++)
         {
         printf("%d ",arr2[i][j]);
         }
         printf("\n");
    }

    printf("subtration of two matrix:\n");
    int r,c;
    int sum[2][2];
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
      sum[i][j]=arr1[i][j]-arr2[i][j];
      }
    }

   for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
      printf("%d ",sum[i][j]);
      }
      printf("\n");
    }


}