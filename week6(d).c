#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array:\n"); 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	for(int i = 1;i < n;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("Minimum element: %d\n",min);
	printf("Maximum element: %d\n",max);
	return 0;
}

