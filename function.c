#include "stdio.h"
int sum(int,int);//Function Declaration
int multy(int,int);
int main()
{
    int a,b,result,result1;

    printf("Enter TRwo Number");
    scanf("%d %d",&a,&b);

    result=sum(a,b); // function Calling
    result1=multy(a,b); 
    
    printf("sum is=%d",result);
    printf("\nMulty is= %d",result1);
    return 0;
}
int sum(int x,int y)      // function Definition
{
    int z;
    z=x+y;
    return(z);
}
int multy(int x, int y)
{
    int z;
    z=x*y;
    return (z);
}