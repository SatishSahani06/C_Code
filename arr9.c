#include "stdio.h"
int main()
{
    int marks[5]={35,38,25,48,40};
   for(int i=0;i<5;i++)
   if(marks[i]<40)
   {
    printf("\n%d",marks[i]);
   }
}