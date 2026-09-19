#include "stdio.h"
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    printf("array fefore delete");
    for(int i=0; i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    int post1=5,post2=9;
    for(int i=post2; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    size=size-1;
    for(int i=post1; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    size=size-1;
    for(int i=post1; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    size=size-1;
    printf("\n Array after delete length at 5 index and 9 index is :");
    for(int i=0; i<size;i++)
    {
        printf("%d  ", arr[i]);

    }
}