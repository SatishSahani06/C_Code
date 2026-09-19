#include "stdio.h"
int main()
{
    int n;
    int arr[n],count=0;
    
    printf("Enter number:");
    scanf("%d",&arr[n]);
    for(int i=1;i<n;i++)
    {
        if(arr[n]%i==0)
        count++;
    }
    if(count==2)
    {
        printf("is prime number:");
    }
    else
    {
        printf("is not prime number:");
    }

}