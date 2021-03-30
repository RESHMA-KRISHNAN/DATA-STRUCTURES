#include<stdio.h>
int main()
{
   int num= 10;
   int *p;
   p=&num;
   printf("Address of variable 'num' is: %p\n", p);
   return 0;
}