#include <stdio.h>
int main()
{
   int *p, c;
   
   c=25;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);
   
   p=&c;
   printf("Address of pointer p: %p\n", p);
   printf("Content of pointer p: %d\n\n", *p); 
   
   c=15;
   printf("Address of pointer p: %p\n", p);
   printf("Content of pointer p: %c\n\n", *c);
   
   *p = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); 
   return 0;
}