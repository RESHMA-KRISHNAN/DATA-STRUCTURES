#include<stdio.h>
int main()
{
     int i, arr[5], sum=0;
     printf("Enter the 5 array elements:\n");
     for(i=0;i<5;i++)
     {
         scanf("%d",arr+i);
         sum+=*(arr+i);
     }
     printf("\nSum of the elements=%d\n",sum);
     return 0;
}