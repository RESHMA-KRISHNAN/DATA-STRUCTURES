#include <stdio.h>
#include <stdlib.h>

// First subarray is arr[p...q]
// Second subarray is arr[q+1..r]

void merge(int arr[], int p, int q, int r)
{
	int i, j, k;
	int n1 = q - p + 1;
	int n2 = r - q;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[q + 1 + j];

	/* Merge the temp arrays back into arr[]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = p; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j]) 
		  {
			arr[k] = L[i];
			i++;
	      }
		else 
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[], 
	//if there are any
	are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], 
	// if there are any
	are any 
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
	if (l < r) 
	{

		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{   
    int n , i;
	int arr[100];
	
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for (i=0;i<n;i++)
	  {
	      scanf("%d",&arr[i]);
	  }
	mergeSort(arr, 0, n - 1);

	printf("\nSorted array is \n");
    printArray(arr,n);
    return 0;
}