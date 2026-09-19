
#include "stdio.h"
int main()
{
     
    int arr[5];
    int product= 1;
    printf("Enter the Element Number:");
    for(int i=0;i<5;i++)
     {
        scanf("%d",&arr[i]);
     }
    
     for(int i=0;i<5;i++)
     
        product=product*arr[i];
     {
        printf("\n%d",product); 
     }
}