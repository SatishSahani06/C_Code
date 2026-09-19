#include "stdio.h"
int main()
{
    int num[]={12,4,5,1,9,13,11,19,59,34};
    int i,t;
    for(i=0;i<10;i++)
    {
        t=num[i];
        num[i]=num[i];
        num[i]=t;

    }
    for(i=0;i<10;i++)
    {
    printf("%d ",num[i]);
    }
     return 0;

}