#include "stdio.h"
int main()
{
    int arr[5]={2,34,55,22,11};
     arr[2]=100;
    for(int i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
}