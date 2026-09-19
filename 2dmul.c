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

     
     printf("Display first matrix\n");
       for(int i=0;i<r;i++)
       {
         for(int j=0;j<c;j++)
         {
            printf("%d ",arr1[i][j]);
         }
         printf("\n");
       }
       
  printf("Enter secon matrix value:\n");
   for(int i=0;i<r;i++)
   {
     for(int j=0;j<c;j++)
     {
         scanf("%d",&arr2[i][j]);
     }
   }
printf("display Matrix 2:\n");
   for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
         {
            printf("%d ",arr1[i][j]);
         }
         printf("\n");
   }
    printf("result mul of two matrix \n");
    int mul[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mul[i][j]=0;
        for(int k=0;k<c;k++)
        {
            mul[i][j] +=arr1[i][k]*arr2[k][j];
        }
       }
    }
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
         {
            printf("%d ",mul[i][j]);
         }
        printf("\n");
      }
       
}