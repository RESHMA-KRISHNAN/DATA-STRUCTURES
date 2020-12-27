#include<stdio.h>
int main()
{
    int x[4],i;
    for(i=0;i<4;++1)
    {
        printf("&x[%d]=%p\n",i,&x[i]);
    }
printf("\nAddress of array x: %p",x);
return 0;
}