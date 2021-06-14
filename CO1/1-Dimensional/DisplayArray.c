#include<stdio.h>
int main()
{
 int arr[5], i;
 printf("\t\t 1-D ARRAY");
 for(i=0; i<5; i++)
  {
   printf("\nEnter the element no: %d, arr[%d]:",i+1,i);
   scanf("%d",&arr[i]);
  }
 printf("\n\t_DISPLAYING THE ELEMENTS_");
 for(i=0;i<5;i++)
  {
    printf("\nThe element no: %d is %d\n",i+1, arr[i]);
  }
 return 0;
}
