#include "stdio.h"
int main()
{
    int r,c;
    printf("Enter matrix row & column value");
    scanf("%d%d",&r,&c);
    int arr1[r][c];
    int arr2[r][c];
     printf("Enter matrix  value:");
     for(int i=0;i<r;i++)
     {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
     }

     
     printf("Display first matrix");
       for(int i=0;i<r;i++)
       {
         for(int j=0;j<c;j++)
         {
            printf("%d",arr1[i][j]);
         }
       }
       
  printf("Enter secon matrix value:");
   for(int i=0;i<r;i++)
   {
     for(int j=0;j<c;j++)
     {
         scanf("%d",&arr2[i][j]);
     }
   }
printf("display Matrix 2:");
   for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
         {
            printf("%d",arr1[i][j]);
         }
   }
    printf("result Add of two matrix");
    int sum[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
         {
            printf("%d",sum[i][j]);
         }
        
      }
       
}