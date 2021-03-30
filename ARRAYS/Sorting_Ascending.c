#include<stdio.h>
int main()
{
 int arr[10], i,j;
 printf("\t\t 1-D ARRAY");
 for(i=0; i<5; i++)
  {
   printf("\nEnter the element no: %d, arr[%d]:",i+1,i);
   scanf("%d",&arr[i]);
  }
 printf("\n\t_DISPLAYING THE ARRAY_");
 for(i=0;i<10;i++)
  {
    printf("\nThe element no: %d is %d\n",i+1, arr[i]);
  }
for (i = 0; i<10; ++i)
    {
        for (j = i + 1; j<10; ++j)
        {
            if(arr[i] > arr[j])
            {
                temp =  arr[i];
                arr [i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Sorting Order Array: \n");
    for (i = 0; i<10; ++i)
        printf("%d\n", arr[i]);
        
    return 0;
}
}