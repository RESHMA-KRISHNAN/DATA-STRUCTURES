#include<stdio.h>
#define N 10
int main()
{
     int arr[5], i, max,min;
     printf("\t\t\t1-D ARRAY");
     for(i=0;i<N;i++)
      {
        printf("\nEnter the element no: %d, arr[%d]: ",i+1,i);
        scanf("%d",&arr[i]);
      }
      max=min=arr[0];
      for(i=0;i<N;i++)
      {
          if(arr[i]>max)
           {
               max=arr[i];
           }
          if(arr[i]<min)
           {
               min=arr[i];
           }
      }
    printf("\nThe highest of the elements is %d\n", max);
    printf("\nThe lowest of the elements is %d\n", min);
    return 0;
}