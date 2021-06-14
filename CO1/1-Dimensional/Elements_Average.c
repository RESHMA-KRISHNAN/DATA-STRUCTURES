#include<stdio.h>
int main()
{
     int arr[5], i, sum=0, avg;
     printf("\t\t\t1-D ARRAY");
     for(i=0;i<5;i++)
      {
        printf("\nEnter the element no: %d, arr[%d]: ",i+1,i);
        scanf("%d",&arr[i]);
      }
      printf("\n\t_SUM OF THE ARRAY ELEMENTS_");
      for(i=0;i<5;i++)
       {
           sum+=arr[i];
       }
    avg=sum/5;
    printf("\nAverage of the array elements is: %d\n",avg);
    return 0;
}
